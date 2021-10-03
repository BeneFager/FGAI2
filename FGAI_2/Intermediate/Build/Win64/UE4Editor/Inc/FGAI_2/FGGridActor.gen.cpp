// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FGAI_2/Grid/FGGridActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGGridActor() {}
// Cross Module References
	FGAI_2_API UScriptStruct* Z_Construct_UScriptStruct_FFGTileinfo();
	UPackage* Z_Construct_UPackage__Script_FGAI_2();
	FGAI_2_API UClass* Z_Construct_UClass_AFGGridActor_NoRegister();
	FGAI_2_API UClass* Z_Construct_UClass_AFGGridActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	STATICMESHDESCRIPTION_API UClass* Z_Construct_UClass_UStaticMeshDescription_NoRegister();
// End Cross Module References
class UScriptStruct* FFGTileinfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FGAI_2_API uint32 Get_Z_Construct_UScriptStruct_FFGTileinfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFGTileinfo, Z_Construct_UPackage__Script_FGAI_2(), TEXT("FGTileinfo"), sizeof(FFGTileinfo), Get_Z_Construct_UScriptStruct_FFGTileinfo_Hash());
	}
	return Singleton;
}
template<> FGAI_2_API UScriptStruct* StaticStruct<FFGTileinfo>()
{
	return FFGTileinfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFGTileinfo(FFGTileinfo::StaticStruct, TEXT("/Script/FGAI_2"), TEXT("FGTileinfo"), false, nullptr, nullptr);
static struct FScriptStruct_FGAI_2_StaticRegisterNativesFFGTileinfo
{
	FScriptStruct_FGAI_2_StaticRegisterNativesFFGTileinfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FGTileinfo")),new UScriptStruct::TCppStructOps<FFGTileinfo>);
	}
} ScriptStruct_FGAI_2_StaticRegisterNativesFFGTileinfo;
	struct Z_Construct_UScriptStruct_FFGTileinfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBlock_MetaData[];
#endif
		static void NewProp_bBlock_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBlock;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFGTileinfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Grid/FGGridActor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFGTileinfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFGTileinfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFGTileinfo_Statics::NewProp_bBlock_MetaData[] = {
		{ "Category", "Tile" },
		{ "ModuleRelativePath", "Grid/FGGridActor.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FFGTileinfo_Statics::NewProp_bBlock_SetBit(void* Obj)
	{
		((FFGTileinfo*)Obj)->bBlock = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFGTileinfo_Statics::NewProp_bBlock = { "bBlock", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FFGTileinfo), &Z_Construct_UScriptStruct_FFGTileinfo_Statics::NewProp_bBlock_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFGTileinfo_Statics::NewProp_bBlock_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFGTileinfo_Statics::NewProp_bBlock_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFGTileinfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFGTileinfo_Statics::NewProp_bBlock,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFGTileinfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FGAI_2,
		nullptr,
		&NewStructOps,
		"FGTileinfo",
		sizeof(FFGTileinfo),
		alignof(FFGTileinfo),
		Z_Construct_UScriptStruct_FFGTileinfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFGTileinfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFGTileinfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFGTileinfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFGTileinfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFGTileinfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FGAI_2();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FGTileinfo"), sizeof(FFGTileinfo), Get_Z_Construct_UScriptStruct_FFGTileinfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFGTileinfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFGTileinfo_Hash() { return 4158290737U; }
	DEFINE_FUNCTION(AFGGridActor::execSelectTile)
	{
		P_GET_STRUCT(FVector,Z_Param_WorldPos);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SelectTile(Z_Param_WorldPos);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFGGridActor::execGetHeightExtends)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetHeightExtends();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFGGridActor::execGetWidthExtends)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetWidthExtends();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFGGridActor::execGetHeightSize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetHeightSize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFGGridActor::execGetWidthSize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetWidthSize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFGGridActor::execGetHalfHeight)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetHalfHeight();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFGGridActor::execGetHalfWidth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetHalfWidth();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFGGridActor::execGetGridSize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetGridSize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFGGridActor::execGetNumTiles)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumTiles();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFGGridActor::execGetTileSizeHalf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetTileSizeHalf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFGGridActor::execGetTileIndexFromXY)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_TileX);
		P_GET_PROPERTY(FIntProperty,Z_Param_TileY);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutTileIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetTileIndexFromXY(Z_Param_TileX,Z_Param_TileY,Z_Param_Out_OutTileIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFGGridActor::execSetTileWalkable)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTileWalkable(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFGGridActor::execGetTileNeighbours)
	{
		P_GET_STRUCT(FVector,Z_Param_WorldLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<int32>*)Z_Param__Result=P_THIS->GetTileNeighbours(Z_Param_WorldLocation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFGGridActor::execRetracePath)
	{
		P_GET_STRUCT(FFGTileinfo,Z_Param_StartTile);
		P_GET_STRUCT(FFGTileinfo,Z_Param_EndTile);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RetracePath(Z_Param_StartTile,Z_Param_EndTile);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFGGridActor::execPathfinding)
	{
		P_GET_STRUCT(FVector,Z_Param_StartPos);
		P_GET_STRUCT(FVector,Z_Param_EndPos);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Pathfinding(Z_Param_StartPos,Z_Param_EndPos);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFGGridActor::execGetDistance)
	{
		P_GET_STRUCT(FFGTileinfo,Z_Param_TileA);
		P_GET_STRUCT(FFGTileinfo,Z_Param_TileB);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetDistance(Z_Param_TileA,Z_Param_TileB);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFGGridActor::execTransformWorldLocationToTileLocation)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InWorldLocation);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutTileWorldLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TransformWorldLocationToTileLocation(Z_Param_Out_InWorldLocation,Z_Param_Out_OutTileWorldLocation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFGGridActor::execGetTileIndexFromWorldLocation)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetTileIndexFromWorldLocation(Z_Param_Out_WorldLocation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFGGridActor::execGetXYFromWorldLocation)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldLocation);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_TileX);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_TileY);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetXYFromWorldLocation(Z_Param_Out_WorldLocation,Z_Param_Out_TileX,Z_Param_Out_TileY);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFGGridActor::execGetWorldLocationFromXY)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_TileX);
		P_GET_PROPERTY(FIntProperty,Z_Param_TileY);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetWorldLocationFromXY(Z_Param_TileX,Z_Param_TileY);
		P_NATIVE_END;
	}
	void AFGGridActor::StaticRegisterNativesAFGGridActor()
	{
		UClass* Class = AFGGridActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDistance", &AFGGridActor::execGetDistance },
			{ "GetGridSize", &AFGGridActor::execGetGridSize },
			{ "GetHalfHeight", &AFGGridActor::execGetHalfHeight },
			{ "GetHalfWidth", &AFGGridActor::execGetHalfWidth },
			{ "GetHeightExtends", &AFGGridActor::execGetHeightExtends },
			{ "GetHeightSize", &AFGGridActor::execGetHeightSize },
			{ "GetNumTiles", &AFGGridActor::execGetNumTiles },
			{ "GetTileIndexFromWorldLocation", &AFGGridActor::execGetTileIndexFromWorldLocation },
			{ "GetTileIndexFromXY", &AFGGridActor::execGetTileIndexFromXY },
			{ "GetTileNeighbours", &AFGGridActor::execGetTileNeighbours },
			{ "GetTileSizeHalf", &AFGGridActor::execGetTileSizeHalf },
			{ "GetWidthExtends", &AFGGridActor::execGetWidthExtends },
			{ "GetWidthSize", &AFGGridActor::execGetWidthSize },
			{ "GetWorldLocationFromXY", &AFGGridActor::execGetWorldLocationFromXY },
			{ "GetXYFromWorldLocation", &AFGGridActor::execGetXYFromWorldLocation },
			{ "Pathfinding", &AFGGridActor::execPathfinding },
			{ "RetracePath", &AFGGridActor::execRetracePath },
			{ "SelectTile", &AFGGridActor::execSelectTile },
			{ "SetTileWalkable", &AFGGridActor::execSetTileWalkable },
			{ "TransformWorldLocationToTileLocation", &AFGGridActor::execTransformWorldLocationToTileLocation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFGGridActor_GetDistance_Statics
	{
		struct FGGridActor_eventGetDistance_Parms
		{
			FFGTileinfo TileA;
			FFGTileinfo TileB;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TileA;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TileB;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGGridActor_GetDistance_Statics::NewProp_TileA = { "TileA", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGGridActor_eventGetDistance_Parms, TileA), Z_Construct_UScriptStruct_FFGTileinfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGGridActor_GetDistance_Statics::NewProp_TileB = { "TileB", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGGridActor_eventGetDistance_Parms, TileB), Z_Construct_UScriptStruct_FFGTileinfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AFGGridActor_GetDistance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGGridActor_eventGetDistance_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGGridActor_GetDistance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGGridActor_GetDistance_Statics::NewProp_TileA,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGGridActor_GetDistance_Statics::NewProp_TileB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGGridActor_GetDistance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGGridActor_GetDistance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Grid/FGGridActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGGridActor_GetDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGGridActor, nullptr, "GetDistance", nullptr, nullptr, sizeof(FGGridActor_eventGetDistance_Parms), Z_Construct_UFunction_AFGGridActor_GetDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGGridActor_GetDistance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGGridActor_GetDistance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGGridActor_GetDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGGridActor_GetDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGGridActor_GetDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGGridActor_GetGridSize_Statics
	{
		struct FGGridActor_eventGetGridSize_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGGridActor_GetGridSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGGridActor_eventGetGridSize_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGGridActor_GetGridSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGGridActor_GetGridSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGGridActor_GetGridSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Grid/FGGridActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGGridActor_GetGridSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGGridActor, nullptr, "GetGridSize", nullptr, nullptr, sizeof(FGGridActor_eventGetGridSize_Parms), Z_Construct_UFunction_AFGGridActor_GetGridSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGGridActor_GetGridSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGGridActor_GetGridSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGGridActor_GetGridSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGGridActor_GetGridSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGGridActor_GetGridSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGGridActor_GetHalfHeight_Statics
	{
		struct FGGridActor_eventGetHalfHeight_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGGridActor_GetHalfHeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGGridActor_eventGetHalfHeight_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGGridActor_GetHalfHeight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGGridActor_GetHalfHeight_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGGridActor_GetHalfHeight_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Grid/FGGridActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGGridActor_GetHalfHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGGridActor, nullptr, "GetHalfHeight", nullptr, nullptr, sizeof(FGGridActor_eventGetHalfHeight_Parms), Z_Construct_UFunction_AFGGridActor_GetHalfHeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGGridActor_GetHalfHeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGGridActor_GetHalfHeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGGridActor_GetHalfHeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGGridActor_GetHalfHeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGGridActor_GetHalfHeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGGridActor_GetHalfWidth_Statics
	{
		struct FGGridActor_eventGetHalfWidth_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGGridActor_GetHalfWidth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGGridActor_eventGetHalfWidth_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGGridActor_GetHalfWidth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGGridActor_GetHalfWidth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGGridActor_GetHalfWidth_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Grid/FGGridActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGGridActor_GetHalfWidth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGGridActor, nullptr, "GetHalfWidth", nullptr, nullptr, sizeof(FGGridActor_eventGetHalfWidth_Parms), Z_Construct_UFunction_AFGGridActor_GetHalfWidth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGGridActor_GetHalfWidth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGGridActor_GetHalfWidth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGGridActor_GetHalfWidth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGGridActor_GetHalfWidth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGGridActor_GetHalfWidth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGGridActor_GetHeightExtends_Statics
	{
		struct FGGridActor_eventGetHeightExtends_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGGridActor_GetHeightExtends_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGGridActor_eventGetHeightExtends_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGGridActor_GetHeightExtends_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGGridActor_GetHeightExtends_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGGridActor_GetHeightExtends_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Grid/FGGridActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGGridActor_GetHeightExtends_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGGridActor, nullptr, "GetHeightExtends", nullptr, nullptr, sizeof(FGGridActor_eventGetHeightExtends_Parms), Z_Construct_UFunction_AFGGridActor_GetHeightExtends_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGGridActor_GetHeightExtends_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGGridActor_GetHeightExtends_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGGridActor_GetHeightExtends_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGGridActor_GetHeightExtends()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGGridActor_GetHeightExtends_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGGridActor_GetHeightSize_Statics
	{
		struct FGGridActor_eventGetHeightSize_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGGridActor_GetHeightSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGGridActor_eventGetHeightSize_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGGridActor_GetHeightSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGGridActor_GetHeightSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGGridActor_GetHeightSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Grid/FGGridActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGGridActor_GetHeightSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGGridActor, nullptr, "GetHeightSize", nullptr, nullptr, sizeof(FGGridActor_eventGetHeightSize_Parms), Z_Construct_UFunction_AFGGridActor_GetHeightSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGGridActor_GetHeightSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGGridActor_GetHeightSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGGridActor_GetHeightSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGGridActor_GetHeightSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGGridActor_GetHeightSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGGridActor_GetNumTiles_Statics
	{
		struct FGGridActor_eventGetNumTiles_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGGridActor_GetNumTiles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGGridActor_eventGetNumTiles_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGGridActor_GetNumTiles_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGGridActor_GetNumTiles_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGGridActor_GetNumTiles_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Grid/FGGridActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGGridActor_GetNumTiles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGGridActor, nullptr, "GetNumTiles", nullptr, nullptr, sizeof(FGGridActor_eventGetNumTiles_Parms), Z_Construct_UFunction_AFGGridActor_GetNumTiles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGGridActor_GetNumTiles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGGridActor_GetNumTiles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGGridActor_GetNumTiles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGGridActor_GetNumTiles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGGridActor_GetNumTiles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGGridActor_GetTileIndexFromWorldLocation_Statics
	{
		struct FGGridActor_eventGetTileIndexFromWorldLocation_Parms
		{
			FVector WorldLocation;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldLocation;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGGridActor_GetTileIndexFromWorldLocation_Statics::NewProp_WorldLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGGridActor_GetTileIndexFromWorldLocation_Statics::NewProp_WorldLocation = { "WorldLocation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGGridActor_eventGetTileIndexFromWorldLocation_Parms, WorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AFGGridActor_GetTileIndexFromWorldLocation_Statics::NewProp_WorldLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGGridActor_GetTileIndexFromWorldLocation_Statics::NewProp_WorldLocation_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGGridActor_GetTileIndexFromWorldLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGGridActor_eventGetTileIndexFromWorldLocation_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGGridActor_GetTileIndexFromWorldLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGGridActor_GetTileIndexFromWorldLocation_Statics::NewProp_WorldLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGGridActor_GetTileIndexFromWorldLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGGridActor_GetTileIndexFromWorldLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Grid/FGGridActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGGridActor_GetTileIndexFromWorldLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGGridActor, nullptr, "GetTileIndexFromWorldLocation", nullptr, nullptr, sizeof(FGGridActor_eventGetTileIndexFromWorldLocation_Parms), Z_Construct_UFunction_AFGGridActor_GetTileIndexFromWorldLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGGridActor_GetTileIndexFromWorldLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGGridActor_GetTileIndexFromWorldLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGGridActor_GetTileIndexFromWorldLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGGridActor_GetTileIndexFromWorldLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGGridActor_GetTileIndexFromWorldLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGGridActor_GetTileIndexFromXY_Statics
	{
		struct FGGridActor_eventGetTileIndexFromXY_Parms
		{
			int32 TileX;
			int32 TileY;
			int32 OutTileIndex;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TileX;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TileY;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OutTileIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGGridActor_GetTileIndexFromXY_Statics::NewProp_TileX = { "TileX", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGGridActor_eventGetTileIndexFromXY_Parms, TileX), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGGridActor_GetTileIndexFromXY_Statics::NewProp_TileY = { "TileY", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGGridActor_eventGetTileIndexFromXY_Parms, TileY), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGGridActor_GetTileIndexFromXY_Statics::NewProp_OutTileIndex = { "OutTileIndex", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGGridActor_eventGetTileIndexFromXY_Parms, OutTileIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGGridActor_GetTileIndexFromXY_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGGridActor_eventGetTileIndexFromXY_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGGridActor_GetTileIndexFromXY_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGGridActor_GetTileIndexFromXY_Statics::NewProp_TileX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGGridActor_GetTileIndexFromXY_Statics::NewProp_TileY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGGridActor_GetTileIndexFromXY_Statics::NewProp_OutTileIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGGridActor_GetTileIndexFromXY_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGGridActor_GetTileIndexFromXY_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Grid/FGGridActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGGridActor_GetTileIndexFromXY_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGGridActor, nullptr, "GetTileIndexFromXY", nullptr, nullptr, sizeof(FGGridActor_eventGetTileIndexFromXY_Parms), Z_Construct_UFunction_AFGGridActor_GetTileIndexFromXY_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGGridActor_GetTileIndexFromXY_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGGridActor_GetTileIndexFromXY_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGGridActor_GetTileIndexFromXY_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGGridActor_GetTileIndexFromXY()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGGridActor_GetTileIndexFromXY_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGGridActor_GetTileNeighbours_Statics
	{
		struct FGGridActor_eventGetTileNeighbours_Parms
		{
			FVector WorldLocation;
			TArray<int32> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldLocation;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGGridActor_GetTileNeighbours_Statics::NewProp_WorldLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGGridActor_GetTileNeighbours_Statics::NewProp_WorldLocation = { "WorldLocation", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGGridActor_eventGetTileNeighbours_Parms, WorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AFGGridActor_GetTileNeighbours_Statics::NewProp_WorldLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGGridActor_GetTileNeighbours_Statics::NewProp_WorldLocation_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGGridActor_GetTileNeighbours_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AFGGridActor_GetTileNeighbours_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGGridActor_eventGetTileNeighbours_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGGridActor_GetTileNeighbours_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGGridActor_GetTileNeighbours_Statics::NewProp_WorldLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGGridActor_GetTileNeighbours_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGGridActor_GetTileNeighbours_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGGridActor_GetTileNeighbours_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Grid/FGGridActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGGridActor_GetTileNeighbours_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGGridActor, nullptr, "GetTileNeighbours", nullptr, nullptr, sizeof(FGGridActor_eventGetTileNeighbours_Parms), Z_Construct_UFunction_AFGGridActor_GetTileNeighbours_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGGridActor_GetTileNeighbours_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGGridActor_GetTileNeighbours_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGGridActor_GetTileNeighbours_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGGridActor_GetTileNeighbours()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGGridActor_GetTileNeighbours_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGGridActor_GetTileSizeHalf_Statics
	{
		struct FGGridActor_eventGetTileSizeHalf_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGGridActor_GetTileSizeHalf_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGGridActor_eventGetTileSizeHalf_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGGridActor_GetTileSizeHalf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGGridActor_GetTileSizeHalf_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGGridActor_GetTileSizeHalf_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Grid/FGGridActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGGridActor_GetTileSizeHalf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGGridActor, nullptr, "GetTileSizeHalf", nullptr, nullptr, sizeof(FGGridActor_eventGetTileSizeHalf_Parms), Z_Construct_UFunction_AFGGridActor_GetTileSizeHalf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGGridActor_GetTileSizeHalf_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGGridActor_GetTileSizeHalf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGGridActor_GetTileSizeHalf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGGridActor_GetTileSizeHalf()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGGridActor_GetTileSizeHalf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGGridActor_GetWidthExtends_Statics
	{
		struct FGGridActor_eventGetWidthExtends_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGGridActor_GetWidthExtends_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGGridActor_eventGetWidthExtends_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGGridActor_GetWidthExtends_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGGridActor_GetWidthExtends_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGGridActor_GetWidthExtends_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Grid/FGGridActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGGridActor_GetWidthExtends_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGGridActor, nullptr, "GetWidthExtends", nullptr, nullptr, sizeof(FGGridActor_eventGetWidthExtends_Parms), Z_Construct_UFunction_AFGGridActor_GetWidthExtends_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGGridActor_GetWidthExtends_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGGridActor_GetWidthExtends_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGGridActor_GetWidthExtends_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGGridActor_GetWidthExtends()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGGridActor_GetWidthExtends_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGGridActor_GetWidthSize_Statics
	{
		struct FGGridActor_eventGetWidthSize_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGGridActor_GetWidthSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGGridActor_eventGetWidthSize_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGGridActor_GetWidthSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGGridActor_GetWidthSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGGridActor_GetWidthSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Grid/FGGridActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGGridActor_GetWidthSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGGridActor, nullptr, "GetWidthSize", nullptr, nullptr, sizeof(FGGridActor_eventGetWidthSize_Parms), Z_Construct_UFunction_AFGGridActor_GetWidthSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGGridActor_GetWidthSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGGridActor_GetWidthSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGGridActor_GetWidthSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGGridActor_GetWidthSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGGridActor_GetWidthSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGGridActor_GetWorldLocationFromXY_Statics
	{
		struct FGGridActor_eventGetWorldLocationFromXY_Parms
		{
			int32 TileX;
			int32 TileY;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TileX;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TileY;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGGridActor_GetWorldLocationFromXY_Statics::NewProp_TileX = { "TileX", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGGridActor_eventGetWorldLocationFromXY_Parms, TileX), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGGridActor_GetWorldLocationFromXY_Statics::NewProp_TileY = { "TileY", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGGridActor_eventGetWorldLocationFromXY_Parms, TileY), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGGridActor_GetWorldLocationFromXY_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGGridActor_eventGetWorldLocationFromXY_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGGridActor_GetWorldLocationFromXY_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGGridActor_GetWorldLocationFromXY_Statics::NewProp_TileX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGGridActor_GetWorldLocationFromXY_Statics::NewProp_TileY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGGridActor_GetWorldLocationFromXY_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGGridActor_GetWorldLocationFromXY_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Grid/FGGridActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGGridActor_GetWorldLocationFromXY_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGGridActor, nullptr, "GetWorldLocationFromXY", nullptr, nullptr, sizeof(FGGridActor_eventGetWorldLocationFromXY_Parms), Z_Construct_UFunction_AFGGridActor_GetWorldLocationFromXY_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGGridActor_GetWorldLocationFromXY_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGGridActor_GetWorldLocationFromXY_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGGridActor_GetWorldLocationFromXY_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGGridActor_GetWorldLocationFromXY()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGGridActor_GetWorldLocationFromXY_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGGridActor_GetXYFromWorldLocation_Statics
	{
		struct FGGridActor_eventGetXYFromWorldLocation_Parms
		{
			FVector WorldLocation;
			int32 TileX;
			int32 TileY;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldLocation;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TileX;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TileY;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGGridActor_GetXYFromWorldLocation_Statics::NewProp_WorldLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGGridActor_GetXYFromWorldLocation_Statics::NewProp_WorldLocation = { "WorldLocation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGGridActor_eventGetXYFromWorldLocation_Parms, WorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AFGGridActor_GetXYFromWorldLocation_Statics::NewProp_WorldLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGGridActor_GetXYFromWorldLocation_Statics::NewProp_WorldLocation_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGGridActor_GetXYFromWorldLocation_Statics::NewProp_TileX = { "TileX", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGGridActor_eventGetXYFromWorldLocation_Parms, TileX), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGGridActor_GetXYFromWorldLocation_Statics::NewProp_TileY = { "TileY", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGGridActor_eventGetXYFromWorldLocation_Parms, TileY), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AFGGridActor_GetXYFromWorldLocation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGGridActor_eventGetXYFromWorldLocation_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGGridActor_GetXYFromWorldLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGGridActor_eventGetXYFromWorldLocation_Parms), &Z_Construct_UFunction_AFGGridActor_GetXYFromWorldLocation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGGridActor_GetXYFromWorldLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGGridActor_GetXYFromWorldLocation_Statics::NewProp_WorldLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGGridActor_GetXYFromWorldLocation_Statics::NewProp_TileX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGGridActor_GetXYFromWorldLocation_Statics::NewProp_TileY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGGridActor_GetXYFromWorldLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGGridActor_GetXYFromWorldLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Grid/FGGridActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGGridActor_GetXYFromWorldLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGGridActor, nullptr, "GetXYFromWorldLocation", nullptr, nullptr, sizeof(FGGridActor_eventGetXYFromWorldLocation_Parms), Z_Construct_UFunction_AFGGridActor_GetXYFromWorldLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGGridActor_GetXYFromWorldLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGGridActor_GetXYFromWorldLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGGridActor_GetXYFromWorldLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGGridActor_GetXYFromWorldLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGGridActor_GetXYFromWorldLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGGridActor_Pathfinding_Statics
	{
		struct FGGridActor_eventPathfinding_Parms
		{
			FVector StartPos;
			FVector EndPos;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartPos;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EndPos;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGGridActor_Pathfinding_Statics::NewProp_StartPos = { "StartPos", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGGridActor_eventPathfinding_Parms, StartPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGGridActor_Pathfinding_Statics::NewProp_EndPos = { "EndPos", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGGridActor_eventPathfinding_Parms, EndPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGGridActor_Pathfinding_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGGridActor_Pathfinding_Statics::NewProp_StartPos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGGridActor_Pathfinding_Statics::NewProp_EndPos,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGGridActor_Pathfinding_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Grid/FGGridActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGGridActor_Pathfinding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGGridActor, nullptr, "Pathfinding", nullptr, nullptr, sizeof(FGGridActor_eventPathfinding_Parms), Z_Construct_UFunction_AFGGridActor_Pathfinding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGGridActor_Pathfinding_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGGridActor_Pathfinding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGGridActor_Pathfinding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGGridActor_Pathfinding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGGridActor_Pathfinding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGGridActor_RetracePath_Statics
	{
		struct FGGridActor_eventRetracePath_Parms
		{
			FFGTileinfo StartTile;
			FFGTileinfo EndTile;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartTile;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EndTile;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGGridActor_RetracePath_Statics::NewProp_StartTile = { "StartTile", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGGridActor_eventRetracePath_Parms, StartTile), Z_Construct_UScriptStruct_FFGTileinfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGGridActor_RetracePath_Statics::NewProp_EndTile = { "EndTile", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGGridActor_eventRetracePath_Parms, EndTile), Z_Construct_UScriptStruct_FFGTileinfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGGridActor_RetracePath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGGridActor_RetracePath_Statics::NewProp_StartTile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGGridActor_RetracePath_Statics::NewProp_EndTile,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGGridActor_RetracePath_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Grid/FGGridActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGGridActor_RetracePath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGGridActor, nullptr, "RetracePath", nullptr, nullptr, sizeof(FGGridActor_eventRetracePath_Parms), Z_Construct_UFunction_AFGGridActor_RetracePath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGGridActor_RetracePath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGGridActor_RetracePath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGGridActor_RetracePath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGGridActor_RetracePath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGGridActor_RetracePath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGGridActor_SelectTile_Statics
	{
		struct FGGridActor_eventSelectTile_Parms
		{
			FVector WorldPos;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldPos;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGGridActor_SelectTile_Statics::NewProp_WorldPos = { "WorldPos", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGGridActor_eventSelectTile_Parms, WorldPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGGridActor_SelectTile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGGridActor_SelectTile_Statics::NewProp_WorldPos,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGGridActor_SelectTile_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Grid/FGGridActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGGridActor_SelectTile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGGridActor, nullptr, "SelectTile", nullptr, nullptr, sizeof(FGGridActor_eventSelectTile_Parms), Z_Construct_UFunction_AFGGridActor_SelectTile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGGridActor_SelectTile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGGridActor_SelectTile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGGridActor_SelectTile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGGridActor_SelectTile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGGridActor_SelectTile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGGridActor_SetTileWalkable_Statics
	{
		struct FGGridActor_eventSetTileWalkable_Parms
		{
			int32 Index;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AFGGridActor_SetTileWalkable_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGGridActor_eventSetTileWalkable_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGGridActor_SetTileWalkable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGGridActor_SetTileWalkable_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGGridActor_SetTileWalkable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Grid/FGGridActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGGridActor_SetTileWalkable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGGridActor, nullptr, "SetTileWalkable", nullptr, nullptr, sizeof(FGGridActor_eventSetTileWalkable_Parms), Z_Construct_UFunction_AFGGridActor_SetTileWalkable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGGridActor_SetTileWalkable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGGridActor_SetTileWalkable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGGridActor_SetTileWalkable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGGridActor_SetTileWalkable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGGridActor_SetTileWalkable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGGridActor_TransformWorldLocationToTileLocation_Statics
	{
		struct FGGridActor_eventTransformWorldLocationToTileLocation_Parms
		{
			FVector InWorldLocation;
			FVector OutTileWorldLocation;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InWorldLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InWorldLocation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutTileWorldLocation;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGGridActor_TransformWorldLocationToTileLocation_Statics::NewProp_InWorldLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGGridActor_TransformWorldLocationToTileLocation_Statics::NewProp_InWorldLocation = { "InWorldLocation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGGridActor_eventTransformWorldLocationToTileLocation_Parms, InWorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AFGGridActor_TransformWorldLocationToTileLocation_Statics::NewProp_InWorldLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGGridActor_TransformWorldLocationToTileLocation_Statics::NewProp_InWorldLocation_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGGridActor_TransformWorldLocationToTileLocation_Statics::NewProp_OutTileWorldLocation = { "OutTileWorldLocation", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGGridActor_eventTransformWorldLocationToTileLocation_Parms, OutTileWorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AFGGridActor_TransformWorldLocationToTileLocation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGGridActor_eventTransformWorldLocationToTileLocation_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGGridActor_TransformWorldLocationToTileLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGGridActor_eventTransformWorldLocationToTileLocation_Parms), &Z_Construct_UFunction_AFGGridActor_TransformWorldLocationToTileLocation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGGridActor_TransformWorldLocationToTileLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGGridActor_TransformWorldLocationToTileLocation_Statics::NewProp_InWorldLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGGridActor_TransformWorldLocationToTileLocation_Statics::NewProp_OutTileWorldLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGGridActor_TransformWorldLocationToTileLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGGridActor_TransformWorldLocationToTileLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Grid/FGGridActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGGridActor_TransformWorldLocationToTileLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGGridActor, nullptr, "TransformWorldLocationToTileLocation", nullptr, nullptr, sizeof(FGGridActor_eventTransformWorldLocationToTileLocation_Parms), Z_Construct_UFunction_AFGGridActor_TransformWorldLocationToTileLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGGridActor_TransformWorldLocationToTileLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGGridActor_TransformWorldLocationToTileLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGGridActor_TransformWorldLocationToTileLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGGridActor_TransformWorldLocationToTileLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGGridActor_TransformWorldLocationToTileLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFGGridActor_NoRegister()
	{
		return AFGGridActor::StaticClass();
	}
	struct Z_Construct_UClass_AFGGridActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlockStaticMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlockStaticMeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GridMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GridMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlockMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlockMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshDescription_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshDescription;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlockMeshDescription_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlockMeshDescription;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TileList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TileList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TileList;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartTileIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StartTileIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndTileIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EndTileIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Width;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Height;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BorderSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BorderSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TileSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TileSize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGGridActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FGAI_2,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGGridActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGGridActor_GetDistance, "GetDistance" }, // 86231093
		{ &Z_Construct_UFunction_AFGGridActor_GetGridSize, "GetGridSize" }, // 2307445230
		{ &Z_Construct_UFunction_AFGGridActor_GetHalfHeight, "GetHalfHeight" }, // 253618382
		{ &Z_Construct_UFunction_AFGGridActor_GetHalfWidth, "GetHalfWidth" }, // 3872700224
		{ &Z_Construct_UFunction_AFGGridActor_GetHeightExtends, "GetHeightExtends" }, // 1236244370
		{ &Z_Construct_UFunction_AFGGridActor_GetHeightSize, "GetHeightSize" }, // 2721093084
		{ &Z_Construct_UFunction_AFGGridActor_GetNumTiles, "GetNumTiles" }, // 2348894125
		{ &Z_Construct_UFunction_AFGGridActor_GetTileIndexFromWorldLocation, "GetTileIndexFromWorldLocation" }, // 869475791
		{ &Z_Construct_UFunction_AFGGridActor_GetTileIndexFromXY, "GetTileIndexFromXY" }, // 290301691
		{ &Z_Construct_UFunction_AFGGridActor_GetTileNeighbours, "GetTileNeighbours" }, // 472031116
		{ &Z_Construct_UFunction_AFGGridActor_GetTileSizeHalf, "GetTileSizeHalf" }, // 3134275453
		{ &Z_Construct_UFunction_AFGGridActor_GetWidthExtends, "GetWidthExtends" }, // 3252175490
		{ &Z_Construct_UFunction_AFGGridActor_GetWidthSize, "GetWidthSize" }, // 967772472
		{ &Z_Construct_UFunction_AFGGridActor_GetWorldLocationFromXY, "GetWorldLocationFromXY" }, // 3077897216
		{ &Z_Construct_UFunction_AFGGridActor_GetXYFromWorldLocation, "GetXYFromWorldLocation" }, // 3875782800
		{ &Z_Construct_UFunction_AFGGridActor_Pathfinding, "Pathfinding" }, // 817516394
		{ &Z_Construct_UFunction_AFGGridActor_RetracePath, "RetracePath" }, // 2978223732
		{ &Z_Construct_UFunction_AFGGridActor_SelectTile, "SelectTile" }, // 615971360
		{ &Z_Construct_UFunction_AFGGridActor_SetTileWalkable, "SetTileWalkable" }, // 3095884668
		{ &Z_Construct_UFunction_AFGGridActor_TransformWorldLocationToTileLocation, "TransformWorldLocationToTileLocation" }, // 3121063452
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGGridActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Grid/FGGridActor.h" },
		{ "ModuleRelativePath", "Grid/FGGridActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGGridActor_Statics::NewProp_StaticMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Grid/FGGridActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGGridActor_Statics::NewProp_StaticMeshComponent = { "StaticMeshComponent", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGGridActor, StaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGGridActor_Statics::NewProp_StaticMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFGGridActor_Statics::NewProp_StaticMeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGGridActor_Statics::NewProp_BlockStaticMeshComponent_MetaData[] = {
		{ "Category", "FGGridActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Grid/FGGridActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGGridActor_Statics::NewProp_BlockStaticMeshComponent = { "BlockStaticMeshComponent", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGGridActor, BlockStaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGGridActor_Statics::NewProp_BlockStaticMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFGGridActor_Statics::NewProp_BlockStaticMeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGGridActor_Statics::NewProp_GridMesh_MetaData[] = {
		{ "ModuleRelativePath", "Grid/FGGridActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGGridActor_Statics::NewProp_GridMesh = { "GridMesh", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGGridActor, GridMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGGridActor_Statics::NewProp_GridMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFGGridActor_Statics::NewProp_GridMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGGridActor_Statics::NewProp_BlockMesh_MetaData[] = {
		{ "ModuleRelativePath", "Grid/FGGridActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGGridActor_Statics::NewProp_BlockMesh = { "BlockMesh", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGGridActor, BlockMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGGridActor_Statics::NewProp_BlockMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFGGridActor_Statics::NewProp_BlockMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGGridActor_Statics::NewProp_MeshDescription_MetaData[] = {
		{ "ModuleRelativePath", "Grid/FGGridActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGGridActor_Statics::NewProp_MeshDescription = { "MeshDescription", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGGridActor, MeshDescription), Z_Construct_UClass_UStaticMeshDescription_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGGridActor_Statics::NewProp_MeshDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFGGridActor_Statics::NewProp_MeshDescription_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGGridActor_Statics::NewProp_BlockMeshDescription_MetaData[] = {
		{ "ModuleRelativePath", "Grid/FGGridActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGGridActor_Statics::NewProp_BlockMeshDescription = { "BlockMeshDescription", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGGridActor, BlockMeshDescription), Z_Construct_UClass_UStaticMeshDescription_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGGridActor_Statics::NewProp_BlockMeshDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFGGridActor_Statics::NewProp_BlockMeshDescription_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGGridActor_Statics::NewProp_TileList_Inner = { "TileList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FFGTileinfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGGridActor_Statics::NewProp_TileList_MetaData[] = {
		{ "Category", "Grid" },
		{ "Comment", "/*\n\x09* Initializes to the size of the number of tiles in the grid. \n\x09*/" },
		{ "ModuleRelativePath", "Grid/FGGridActor.h" },
		{ "ToolTip", "* Initializes to the size of the number of tiles in the grid." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGGridActor_Statics::NewProp_TileList = { "TileList", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGGridActor, TileList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AFGGridActor_Statics::NewProp_TileList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFGGridActor_Statics::NewProp_TileList_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGGridActor_Statics::NewProp_StartTileIndex_MetaData[] = {
		{ "ModuleRelativePath", "Grid/FGGridActor.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFGGridActor_Statics::NewProp_StartTileIndex = { "StartTileIndex", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGGridActor, StartTileIndex), METADATA_PARAMS(Z_Construct_UClass_AFGGridActor_Statics::NewProp_StartTileIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFGGridActor_Statics::NewProp_StartTileIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGGridActor_Statics::NewProp_EndTileIndex_MetaData[] = {
		{ "ModuleRelativePath", "Grid/FGGridActor.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFGGridActor_Statics::NewProp_EndTileIndex = { "EndTileIndex", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGGridActor, EndTileIndex), METADATA_PARAMS(Z_Construct_UClass_AFGGridActor_Statics::NewProp_EndTileIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFGGridActor_Statics::NewProp_EndTileIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGGridActor_Statics::NewProp_Width_MetaData[] = {
		{ "Category", "Grid" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Grid/FGGridActor.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AFGGridActor_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGGridActor, Width), METADATA_PARAMS(Z_Construct_UClass_AFGGridActor_Statics::NewProp_Width_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFGGridActor_Statics::NewProp_Width_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGGridActor_Statics::NewProp_Height_MetaData[] = {
		{ "Category", "Grid" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Grid/FGGridActor.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AFGGridActor_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGGridActor, Height), METADATA_PARAMS(Z_Construct_UClass_AFGGridActor_Statics::NewProp_Height_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFGGridActor_Statics::NewProp_Height_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGGridActor_Statics::NewProp_BorderSize_MetaData[] = {
		{ "Category", "Grid" },
		{ "ClampMin", "0.100000" },
		{ "ModuleRelativePath", "Grid/FGGridActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGGridActor_Statics::NewProp_BorderSize = { "BorderSize", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGGridActor, BorderSize), METADATA_PARAMS(Z_Construct_UClass_AFGGridActor_Statics::NewProp_BorderSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFGGridActor_Statics::NewProp_BorderSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGGridActor_Statics::NewProp_TileSize_MetaData[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Grid/FGGridActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGGridActor_Statics::NewProp_TileSize = { "TileSize", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGGridActor, TileSize), METADATA_PARAMS(Z_Construct_UClass_AFGGridActor_Statics::NewProp_TileSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFGGridActor_Statics::NewProp_TileSize_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGGridActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGGridActor_Statics::NewProp_StaticMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGGridActor_Statics::NewProp_BlockStaticMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGGridActor_Statics::NewProp_GridMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGGridActor_Statics::NewProp_BlockMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGGridActor_Statics::NewProp_MeshDescription,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGGridActor_Statics::NewProp_BlockMeshDescription,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGGridActor_Statics::NewProp_TileList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGGridActor_Statics::NewProp_TileList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGGridActor_Statics::NewProp_StartTileIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGGridActor_Statics::NewProp_EndTileIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGGridActor_Statics::NewProp_Width,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGGridActor_Statics::NewProp_Height,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGGridActor_Statics::NewProp_BorderSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGGridActor_Statics::NewProp_TileSize,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGGridActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGGridActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGGridActor_Statics::ClassParams = {
		&AFGGridActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFGGridActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AFGGridActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFGGridActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFGGridActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGGridActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGGridActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGGridActor, 54926207);
	template<> FGAI_2_API UClass* StaticClass<AFGGridActor>()
	{
		return AFGGridActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGGridActor(Z_Construct_UClass_AFGGridActor, &AFGGridActor::StaticClass, TEXT("/Script/FGAI_2"), TEXT("AFGGridActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGGridActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
