#include "FGGridActor.h"

#include "FGGridBlockComponent.h"
#include "StaticMeshDescription.h"
#include "Algo/Reverse.h"
#include "Components/StaticMeshComponent.h"
#include "Containers/Array.h"
#include "Kismet/KismetSystemLibrary.h"

AFGGridActor::AFGGridActor()
{
	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));

	StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
	StaticMeshComponent->SetupAttachment(RootComponent);
	StaticMeshComponent->SetCastShadow(false);

	BlockStaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BlockStaticMeshComponent"));
	BlockStaticMeshComponent->SetupAttachment(RootComponent);
	BlockStaticMeshComponent->SetCastShadow(false);
}

void AFGGridActor::BeginPlay()
{
	Super::BeginPlay();
	
	//La in massa data här
	for (int32 Y = Height - 1; Y >= 0; --Y)
	{
		for (int32 X = 0; X < Width; ++X)
		{
			int32 Out;
			const int32 ArrayIndex = GetTileIndexFromXY(X, Y, Out);
			TileList[Out].GridX = X;
			TileList[Out].GridY = Y;
			TileList[Out].Index = (Y * Width) + X;
		}
	}
}

void AFGGridActor::OnConstruction(const FTransform& Transform)
{
	Super::OnConstruction(Transform);

	if (TileList.Num() == 0)
	{
		/*
		* If TileList is empty it probably means we just placed one in the level, so let's initialize it.
		*/

		TileList.SetNum(GetNumTiles());
	}

	GenerateGrid();

	DrawBlocks();
}

FVector AFGGridActor::GetWorldLocationFromXY(int32 TileX, int32 TileY) const
{
	const float X = ((static_cast<float>(TileX) - GetHalfWidth()) * TileSize) + GetTileSizeHalf();
	const float Y = ((static_cast<float>(TileY) - GetHalfHeight()) * TileSize) + GetTileSizeHalf();

	return GetActorTransform().TransformPosition(FVector(X, Y, 0));
}

bool AFGGridActor::GetXYFromWorldLocation(const FVector& WorldLocation, int32& TileX, int32& TileY) const
{
	if (!IsWorldLocationInsideGrid(WorldLocation))
		return false;

	const FVector RelativeGridLocation = GetActorTransform().InverseTransformPositionNoScale(WorldLocation);

	const float HeightOffset = (Height % 2) == 1 ? 0.5f : 0.0f;
	const float WidthOffset = (Width % 2) == 1 ? 0.5f : 0.0f;

	const float X = FMath::FloorToInt(WidthOffset + (RelativeGridLocation.X / TileSize)) + GetHalfWidth() - WidthOffset;
	const float Y = FMath::FloorToInt(HeightOffset + (RelativeGridLocation.Y / TileSize)) + GetHalfHeight() -
		HeightOffset;

	TileX = FMath::Clamp(static_cast<int32>(X), 0, Width - 1);
	TileY = FMath::Clamp(static_cast<int32>(Y), 0, Height - 1);

	return true;
}

int32 AFGGridActor::GetTileIndexFromWorldLocation(const FVector& WorldLocation) const
{
	int32 X = 0, Y = 0;
	if (GetXYFromWorldLocation(WorldLocation, X, Y))
	{
		int32 Out;
		return GetTileIndexFromXY(X, Y, Out);
	}

	return 0;
}

bool AFGGridActor::TransformWorldLocationToTileLocation(const FVector& InWorldLocation,
                                                        FVector& OutTileWorldLocation) const
{
	if (!IsWorldLocationInsideGrid(InWorldLocation))
		return false;

	int32 X = 0, Y = 0;
	if (GetXYFromWorldLocation(InWorldLocation, X, Y))
	{
		OutTileWorldLocation = GetWorldLocationFromXY(X, Y);
		return true;
	}

	return false;
}

//Hård kodat för squares
int AFGGridActor::GetDistance(FFGTileinfo TileA, FFGTileinfo TileB)
{
	int DstX = FMath::Abs(TileA.GridX - TileB.GridX);
	int DstY = FMath::Abs(TileA.GridY - TileB.GridY);

	if (DstX > DstY)
		return 14 * DstY + 10 * (DstX - DstY);

	return 14 * DstX + 10 * (DstY - DstX);
}

//Super icke optimiserad version av A*
//bästa optimiseringen jag vet man kan göra generellt är heap struktur för tiles/nodes etc
void AFGGridActor::Pathfinding(FVector StartPos, FVector Endpos)
{
	int32 StartTile = GetTileIndexFromWorldLocation(StartPos);
	int32 EndTile = GetTileIndexFromWorldLocation(Endpos);
	//int32 Out;
	TArray<int32> OpenSet;
	TArray<int32> ClosedSet;

	OpenSet.Add(StartTile);

	while (OpenSet.Num() > 0)
	{
		int32 CurrentTile = OpenSet[0];
		for (int i = 1; i < OpenSet.Num(); i++)
		{
			if (TileList[OpenSet[i]].FCost < TileList[CurrentTile].FCost || TileList[OpenSet[i]].FCost == TileList[
				CurrentTile].FCost && TileList[OpenSet[i]].HCost < TileList[CurrentTile].HCost)
			{
				CurrentTile = OpenSet[i];
			}
		}
		OpenSet.Remove(CurrentTile);
		ClosedSet.Add(CurrentTile);

		if (TileList[CurrentTile].Index == TileList[EndTile].Index)
		{
			UE_LOG(LogTemp, Log, TEXT("PATHFINDING FINISHED"));
			RetracePath(TileList[StartTile], TileList[EndTile]);
			return;
		}

		FVector WorldPos = GetWorldLocationFromXY(TileList[CurrentTile].GridX, TileList[CurrentTile].GridY);
		for (int Nbr : GetTileNeighbours(WorldPos))
		{
			if (!TileList[Nbr].bWalkable || ClosedSet.Contains(TileList[Nbr].Index))
				continue;

			int MoveCostToNbr = TileList[Nbr].GCost + GetDistance(TileList[CurrentTile], TileList[Nbr]);
			if (MoveCostToNbr < TileList[Nbr].GCost || !OpenSet.Contains(TileList[Nbr].Index))
			{
				TileList[Nbr].GCost = MoveCostToNbr;
				TileList[Nbr].HCost = GetDistance(TileList[Nbr], TileList[EndTile]);
				TileList[Nbr].ParentIndex = TileList[CurrentTile].Index;

				if (!OpenSet.Contains(TileList[Nbr].Index))
					OpenSet.Add(Nbr);
			}
		}
	}
}

//Går igenom pathen baklänges och reversar. sen ritas den ut
void AFGGridActor::RetracePath(FFGTileinfo StartTile, FFGTileinfo EndTile)
{
	TArray<FFGTileinfo> Path;
	FFGTileinfo CurrentTile = EndTile;
	while (CurrentTile.Index != StartTile.Index)
	{
		Path.Add(CurrentTile);
		CurrentTile = TileList[CurrentTile.ParentIndex];
	}

	Algo::Reverse(Path); //pallade inte göra en egen lmao

	for (FFGTileinfo Tile : Path)
	{
		UKismetSystemLibrary::DrawDebugSphere(this, GetWorldLocationFromXY(Tile.GridX, Tile.GridY), 100.f, 12,
		                                      FLinearColor::Blue, 2.f, 0.f);
	}
	StartTileIndex = -1;
	EndTileIndex = -1;
}

TArray<int32> AFGGridActor::GetTileNeighbours(const FVector WorldLocation)
{
	TArray<int32> Neighbours;
	int32 CurrentTile = GetTileIndexFromWorldLocation(WorldLocation);
	for (int x = -1; x <= 1; x++)
	{
		for (int y = -1; y <= 1; y++)
		{
			if (x == 0 && y == 0)
				continue;

			int32 CheckX = TileList[CurrentTile].GridX + x;
			int32 CheckY = TileList[CurrentTile].GridY + y;

			int32 Out;
			if (CheckX >= 0 && CheckX < Width && CheckY >= 0 && CheckY < Height)
			{
				Neighbours.Add(GetTileIndexFromXY(CheckX, CheckY, Out));
			}
		}
	}
	return Neighbours;
}

void AFGGridActor::GetOverlappingTiles(const FVector& Origin, const FVector& Extent,
                                       TArray<int32>& OutOverlappingTiles) const
{
	const FBox BlockBox = FBox::BuildAABB(Origin, Extent);

	const FVector TileExtent(GetTileSizeHalf(), GetTileSizeHalf(), GetTileSizeHalf());

	FBox TileBox;

	for (int32 Y = Height - 1; Y >= 0; --Y)
	{
		for (int32 X = 0; X < Width; ++X)
		{
			const FVector TileWorldLocation = GetWorldLocationFromXY(X, Y);

			TileBox = FBox::BuildAABB(TileWorldLocation, TileExtent);
			if (TileBox.IntersectXY(BlockBox))
			{
				int32 Out;
				const int32 ArrayIndex = GetTileIndexFromXY(X, Y, Out);
				OutOverlappingTiles.Add(Out);
			}
		}
	}
}

void AFGGridActor::DrawBlocks()
{
	const int32 NumBlocks = TileList.Num();

	if (NumBlocks == 0)
		return;

	if (BlockMeshDescription == nullptr)
		BlockMeshDescription = UStaticMesh::CreateStaticMeshDescription(this);

	if (BlockMesh == nullptr)
		BlockMesh = NewObject<UStaticMesh>(this, UStaticMesh::StaticClass());

	BlockMeshDescription->Empty();
	BlockStaticMeshComponent->SetStaticMesh(nullptr);

	FPolygonGroupID BlockPGID = BlockMeshDescription->CreatePolygonGroup();
	FPolygonID PID;

	const float BlockSize = TileSize * 0.25f;
	const FVector BlockExtent = FVector(BlockSize, BlockSize, BlockSize * 0.25f);

	for (int32 Y = Height - 1; Y >= 0; --Y)
	{
		for (int32 X = 0; X < Width; ++X)
		{
			const FVector TileRelativeLocation = GetActorTransform().InverseTransformPositionNoScale(
				GetWorldLocationFromXY(X, Y));
			int32 Out;
			const int32 ArrayIndex = GetTileIndexFromXY(X, Y, Out);
			const bool bIsBlocked = TileList[Out].bBlock;
			TileList[Out].Index = ArrayIndex;
			if (bIsBlocked)
			{
				BlockMeshDescription->CreateCube(TileRelativeLocation, BlockExtent, BlockPGID, PID, PID, PID, PID, PID,
				                                 PID);
			}
		}
	}

	if (!BlockMeshDescription->IsEmpty())
	{
		TArray<UStaticMeshDescription*> BlockMeshDescriptionList;
		BlockMeshDescriptionList.Add(BlockMeshDescription);
		BlockMesh->BuildFromStaticMeshDescriptions(BlockMeshDescriptionList);
		BlockStaticMeshComponent->SetStaticMesh(BlockMesh);
	}
}

void AFGGridActor::UpdateBlockingTiles()
{
	TArray<UFGGridBlockComponent*> AllBlocks;
	GetComponents(AllBlocks);

	TileList.Empty();
	TileList.SetNum(GetNumTiles());

	TArray<int32> BlockIndices;

	for (const auto Block : AllBlocks)
	{
		const FVector Origin = Block->GetComponentLocation();
		const FVector Extents = Block->Extents * 0.5f;

		BlockIndices.Reset();
		GetOverlappingTiles(Origin, Extents, BlockIndices);

		for (int32 Index = 0, Num = BlockIndices.Num(); Index < Num; ++Index)
		{
			TileList[BlockIndices[Index]].bBlock = true;
		}
	}

	DrawBlocks();
}

void AFGGridActor::GenerateGrid()
{
	if (Width < 1 || Height < 1)
		return;

	if (MeshDescription == nullptr)
		MeshDescription = UStaticMesh::CreateStaticMeshDescription(this);

	if (GridMesh == nullptr)
		GridMesh = NewObject<UStaticMesh>(this, UStaticMesh::StaticClass());

	MeshDescription->Empty();

	FPolygonGroupID PGID = MeshDescription->CreatePolygonGroup();
	FPolygonID PID;

	float Location_X = -((Width * TileSize) * 0.5f);
	float Location_Y = -((Height * TileSize) * 0.5f);

	for (int X = 0; X < Width + 1; ++X)
	{
		float LocationOffset = X * TileSize;
		FVector Center = FVector(Location_X + LocationOffset, 0.0f, 0.0f);
		FVector Test1 = FVector(BorderSize, GetHeightSize(), BorderSize);
		MeshDescription->CreateCube(Center, GetWidthExtends(), PGID, PID, PID, PID, PID, PID, PID);
	}

	for (int Y = 0; Y < Height + 1; ++Y)
	{
		float LocationOffset = Y * TileSize;
		FVector Center = FVector(0.0f, Location_Y + LocationOffset, BorderSize);
		FVector Test = FVector(GetWidthSize(), BorderSize, BorderSize);
		MeshDescription->CreateCube(Center, GetHeightExtends(), PGID, PID, PID, PID, PID, PID, PID);
	}

	TArray<UStaticMeshDescription*> MeshDescriptionList;
	MeshDescriptionList.Add(MeshDescription);
	GridMesh->BuildFromStaticMeshDescriptions(MeshDescriptionList);
	StaticMeshComponent->SetStaticMesh(GridMesh);
}

bool AFGGridActor::IsWorldLocationInsideGrid(const FVector& WorldLocation) const
{
	const FVector RelativeGridLocation = GetActorTransform().InverseTransformPositionNoScale(WorldLocation);

	if (RelativeGridLocation.X < -GetWidthSize())
		return false;
	else if (RelativeGridLocation.X > GetWidthSize())
		return false;
	else if (RelativeGridLocation.Y < -GetHeightSize())
		return false;
	else if (RelativeGridLocation.Y > GetHeightSize())
		return false;

	return true;
}

int32 AFGGridActor::GetTileIndexFromXY(int32 TileX, int32 TileY, int32& OutTileIndex) const
{
	if (TileX < 0 || TileX >= Width)
		return false;

	if (TileY < 0 || TileY >= Height)
		return false;

	const int32 TileIndex = (TileY * Width) + TileX;


	if (!IsTileIndexValid(TileIndex))
	{
		OutTileIndex = -1;
		return false;
	}
	OutTileIndex = TileIndex;
	return TileIndex;
}

bool AFGGridActor::IsTileIndexValid(int32 TileIndex) const
{
	const int32 NumTiles = TileList.Num();

	if (TileIndex < 0 || TileIndex >= NumTiles)
	{
		return false;
	}
	return true;
}

#if WITH_EDITOR
void AFGGridActor::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);

	UpdateBlockingTiles();
}
#endif // WITH_EDITOR

//Används för att välja start och slut på pathen
//resetas auto i slutet av retrace path
void AFGGridActor::SelectTile(FVector WorldPos)
{
	if (StartTileIndex < 0)
	{
		StartTileIndex = GetTileIndexFromWorldLocation(WorldPos);
		UE_LOG(LogTemp, Log, TEXT("STARTTILEINDEX IS %d"), StartTileIndex);
	}
	else if (EndTileIndex < 0)
	{
		EndTileIndex = GetTileIndexFromWorldLocation(WorldPos);
		UE_LOG(LogTemp, Log, TEXT("ENDTILEINDEX IS %d"), EndTileIndex);
		Pathfinding(GetWorldLocationFromXY(TileList[StartTileIndex].GridX, TileList[StartTileIndex].GridY),
		            GetWorldLocationFromXY(TileList[EndTileIndex].GridX, TileList[EndTileIndex].GridY));
	}
}

void AFGGridActor::SetTileWalkable(int Index)
{
	TileList[Index].bWalkable = !TileList[Index].bWalkable;
}