// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TowerDefense/DefaultStartEnd.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDefaultStartEnd() {}
// Cross Module References
	TOWERDEFENSE_API UScriptStruct* Z_Construct_UScriptStruct_FRoundInformation();
	UPackage* Z_Construct_UPackage__Script_TowerDefense();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	TOWERDEFENSE_API UClass* Z_Construct_UClass_ADefaultStartEnd_NoRegister();
	TOWERDEFENSE_API UClass* Z_Construct_UClass_ADefaultStartEnd();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FRoundInformation>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FRoundInformation cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FRoundInformation::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TOWERDEFENSE_API uint32 Get_Z_Construct_UScriptStruct_FRoundInformation_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRoundInformation, Z_Construct_UPackage__Script_TowerDefense(), TEXT("RoundInformation"), sizeof(FRoundInformation), Get_Z_Construct_UScriptStruct_FRoundInformation_Hash());
	}
	return Singleton;
}
template<> TOWERDEFENSE_API UScriptStruct* StaticStruct<FRoundInformation>()
{
	return FRoundInformation::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRoundInformation(FRoundInformation::StaticStruct, TEXT("/Script/TowerDefense"), TEXT("RoundInformation"), false, nullptr, nullptr);
static struct FScriptStruct_TowerDefense_StaticRegisterNativesFRoundInformation
{
	FScriptStruct_TowerDefense_StaticRegisterNativesFRoundInformation()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RoundInformation")),new UScriptStruct::TCppStructOps<FRoundInformation>);
	}
} ScriptStruct_TowerDefense_StaticRegisterNativesFRoundInformation;
	struct Z_Construct_UScriptStruct_FRoundInformation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Enemy1_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Enemy1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Enemy2_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Enemy2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Enemy3_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Enemy3;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Enemy4_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Enemy4;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRoundInformation_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "DefaultStartEnd.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRoundInformation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRoundInformation>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRoundInformation_Statics::NewProp_Enemy1_MetaData[] = {
		{ "Category", "RoundInformation" },
		{ "Comment", "//Amount of enemies to spawn based on round\n" },
		{ "ModuleRelativePath", "DefaultStartEnd.h" },
		{ "ToolTip", "Amount of enemies to spawn based on round" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRoundInformation_Statics::NewProp_Enemy1 = { "Enemy1", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRoundInformation, Enemy1), METADATA_PARAMS(Z_Construct_UScriptStruct_FRoundInformation_Statics::NewProp_Enemy1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRoundInformation_Statics::NewProp_Enemy1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRoundInformation_Statics::NewProp_Enemy2_MetaData[] = {
		{ "Category", "RoundInformation" },
		{ "ModuleRelativePath", "DefaultStartEnd.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRoundInformation_Statics::NewProp_Enemy2 = { "Enemy2", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRoundInformation, Enemy2), METADATA_PARAMS(Z_Construct_UScriptStruct_FRoundInformation_Statics::NewProp_Enemy2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRoundInformation_Statics::NewProp_Enemy2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRoundInformation_Statics::NewProp_Enemy3_MetaData[] = {
		{ "Category", "RoundInformation" },
		{ "ModuleRelativePath", "DefaultStartEnd.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRoundInformation_Statics::NewProp_Enemy3 = { "Enemy3", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRoundInformation, Enemy3), METADATA_PARAMS(Z_Construct_UScriptStruct_FRoundInformation_Statics::NewProp_Enemy3_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRoundInformation_Statics::NewProp_Enemy3_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRoundInformation_Statics::NewProp_Enemy4_MetaData[] = {
		{ "Category", "RoundInformation" },
		{ "ModuleRelativePath", "DefaultStartEnd.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRoundInformation_Statics::NewProp_Enemy4 = { "Enemy4", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRoundInformation, Enemy4), METADATA_PARAMS(Z_Construct_UScriptStruct_FRoundInformation_Statics::NewProp_Enemy4_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRoundInformation_Statics::NewProp_Enemy4_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRoundInformation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRoundInformation_Statics::NewProp_Enemy1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRoundInformation_Statics::NewProp_Enemy2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRoundInformation_Statics::NewProp_Enemy3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRoundInformation_Statics::NewProp_Enemy4,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRoundInformation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TowerDefense,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"RoundInformation",
		sizeof(FRoundInformation),
		alignof(FRoundInformation),
		Z_Construct_UScriptStruct_FRoundInformation_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRoundInformation_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRoundInformation_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRoundInformation_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRoundInformation()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRoundInformation_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TowerDefense();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RoundInformation"), sizeof(FRoundInformation), Get_Z_Construct_UScriptStruct_FRoundInformation_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRoundInformation_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRoundInformation_Hash() { return 1112365191U; }
	DEFINE_FUNCTION(ADefaultStartEnd::execStartRound)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartRound();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADefaultStartEnd::execPreloadNextRound)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PreloadNextRound();
		P_NATIVE_END;
	}
	void ADefaultStartEnd::StaticRegisterNativesADefaultStartEnd()
	{
		UClass* Class = ADefaultStartEnd::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PreloadNextRound", &ADefaultStartEnd::execPreloadNextRound },
			{ "StartRound", &ADefaultStartEnd::execStartRound },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADefaultStartEnd_PreloadNextRound_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADefaultStartEnd_PreloadNextRound_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DefaultStartEnd.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADefaultStartEnd_PreloadNextRound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADefaultStartEnd, nullptr, "PreloadNextRound", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADefaultStartEnd_PreloadNextRound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADefaultStartEnd_PreloadNextRound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADefaultStartEnd_PreloadNextRound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADefaultStartEnd_PreloadNextRound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADefaultStartEnd_StartRound_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADefaultStartEnd_StartRound_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DefaultStartEnd.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADefaultStartEnd_StartRound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADefaultStartEnd, nullptr, "StartRound", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADefaultStartEnd_StartRound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADefaultStartEnd_StartRound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADefaultStartEnd_StartRound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADefaultStartEnd_StartRound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ADefaultStartEnd_NoRegister()
	{
		return ADefaultStartEnd::StaticClass();
	}
	struct Z_Construct_UClass_ADefaultStartEnd_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scene_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Scene;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StartPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EndPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoundDataTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RoundDataTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInRound_MetaData[];
#endif
		static void NewProp_bInRound_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInRound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Round_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Round;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Enemy1_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Enemy1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Enemy2_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Enemy2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Enemy3_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Enemy3;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Enemy4_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Enemy4;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADefaultStartEnd_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TowerDefense,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ADefaultStartEnd_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADefaultStartEnd_PreloadNextRound, "PreloadNextRound" }, // 2270319292
		{ &Z_Construct_UFunction_ADefaultStartEnd_StartRound, "StartRound" }, // 3025367646
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefaultStartEnd_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DefaultStartEnd.h" },
		{ "ModuleRelativePath", "DefaultStartEnd.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefaultStartEnd_Statics::NewProp_Scene_MetaData[] = {
		{ "Category", "DefaultStartEnd" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DefaultStartEnd.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADefaultStartEnd_Statics::NewProp_Scene = { "Scene", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADefaultStartEnd, Scene), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADefaultStartEnd_Statics::NewProp_Scene_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultStartEnd_Statics::NewProp_Scene_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefaultStartEnd_Statics::NewProp_StartPoint_MetaData[] = {
		{ "Category", "DefaultStartEnd" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DefaultStartEnd.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADefaultStartEnd_Statics::NewProp_StartPoint = { "StartPoint", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADefaultStartEnd, StartPoint), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADefaultStartEnd_Statics::NewProp_StartPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultStartEnd_Statics::NewProp_StartPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefaultStartEnd_Statics::NewProp_EndPoint_MetaData[] = {
		{ "Category", "DefaultStartEnd" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DefaultStartEnd.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADefaultStartEnd_Statics::NewProp_EndPoint = { "EndPoint", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADefaultStartEnd, EndPoint), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADefaultStartEnd_Statics::NewProp_EndPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultStartEnd_Statics::NewProp_EndPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefaultStartEnd_Statics::NewProp_RoundDataTable_MetaData[] = {
		{ "Category", "Wave | Spawning" },
		{ "ModuleRelativePath", "DefaultStartEnd.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADefaultStartEnd_Statics::NewProp_RoundDataTable = { "RoundDataTable", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADefaultStartEnd, RoundDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADefaultStartEnd_Statics::NewProp_RoundDataTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultStartEnd_Statics::NewProp_RoundDataTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefaultStartEnd_Statics::NewProp_bInRound_MetaData[] = {
		{ "Category", "Wave | Spawning" },
		{ "ModuleRelativePath", "DefaultStartEnd.h" },
	};
#endif
	void Z_Construct_UClass_ADefaultStartEnd_Statics::NewProp_bInRound_SetBit(void* Obj)
	{
		((ADefaultStartEnd*)Obj)->bInRound = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADefaultStartEnd_Statics::NewProp_bInRound = { "bInRound", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ADefaultStartEnd), &Z_Construct_UClass_ADefaultStartEnd_Statics::NewProp_bInRound_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADefaultStartEnd_Statics::NewProp_bInRound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultStartEnd_Statics::NewProp_bInRound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefaultStartEnd_Statics::NewProp_Round_MetaData[] = {
		{ "Category", "Wave | Spawning" },
		{ "ModuleRelativePath", "DefaultStartEnd.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADefaultStartEnd_Statics::NewProp_Round = { "Round", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADefaultStartEnd, Round), METADATA_PARAMS(Z_Construct_UClass_ADefaultStartEnd_Statics::NewProp_Round_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultStartEnd_Statics::NewProp_Round_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefaultStartEnd_Statics::NewProp_Enemy1_MetaData[] = {
		{ "Category", "DefaultStartEnd" },
		{ "Comment", "//Amount of enemies to spawn based on round\n" },
		{ "ModuleRelativePath", "DefaultStartEnd.h" },
		{ "ToolTip", "Amount of enemies to spawn based on round" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADefaultStartEnd_Statics::NewProp_Enemy1 = { "Enemy1", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADefaultStartEnd, Enemy1), METADATA_PARAMS(Z_Construct_UClass_ADefaultStartEnd_Statics::NewProp_Enemy1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultStartEnd_Statics::NewProp_Enemy1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefaultStartEnd_Statics::NewProp_Enemy2_MetaData[] = {
		{ "Category", "DefaultStartEnd" },
		{ "ModuleRelativePath", "DefaultStartEnd.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADefaultStartEnd_Statics::NewProp_Enemy2 = { "Enemy2", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADefaultStartEnd, Enemy2), METADATA_PARAMS(Z_Construct_UClass_ADefaultStartEnd_Statics::NewProp_Enemy2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultStartEnd_Statics::NewProp_Enemy2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefaultStartEnd_Statics::NewProp_Enemy3_MetaData[] = {
		{ "Category", "DefaultStartEnd" },
		{ "ModuleRelativePath", "DefaultStartEnd.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADefaultStartEnd_Statics::NewProp_Enemy3 = { "Enemy3", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADefaultStartEnd, Enemy3), METADATA_PARAMS(Z_Construct_UClass_ADefaultStartEnd_Statics::NewProp_Enemy3_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultStartEnd_Statics::NewProp_Enemy3_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefaultStartEnd_Statics::NewProp_Enemy4_MetaData[] = {
		{ "Category", "DefaultStartEnd" },
		{ "ModuleRelativePath", "DefaultStartEnd.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADefaultStartEnd_Statics::NewProp_Enemy4 = { "Enemy4", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADefaultStartEnd, Enemy4), METADATA_PARAMS(Z_Construct_UClass_ADefaultStartEnd_Statics::NewProp_Enemy4_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultStartEnd_Statics::NewProp_Enemy4_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADefaultStartEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefaultStartEnd_Statics::NewProp_Scene,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefaultStartEnd_Statics::NewProp_StartPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefaultStartEnd_Statics::NewProp_EndPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefaultStartEnd_Statics::NewProp_RoundDataTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefaultStartEnd_Statics::NewProp_bInRound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefaultStartEnd_Statics::NewProp_Round,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefaultStartEnd_Statics::NewProp_Enemy1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefaultStartEnd_Statics::NewProp_Enemy2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefaultStartEnd_Statics::NewProp_Enemy3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefaultStartEnd_Statics::NewProp_Enemy4,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADefaultStartEnd_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADefaultStartEnd>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADefaultStartEnd_Statics::ClassParams = {
		&ADefaultStartEnd::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ADefaultStartEnd_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultStartEnd_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADefaultStartEnd_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultStartEnd_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADefaultStartEnd()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADefaultStartEnd_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADefaultStartEnd, 379686137);
	template<> TOWERDEFENSE_API UClass* StaticClass<ADefaultStartEnd>()
	{
		return ADefaultStartEnd::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADefaultStartEnd(Z_Construct_UClass_ADefaultStartEnd, &ADefaultStartEnd::StaticClass, TEXT("/Script/TowerDefense"), TEXT("ADefaultStartEnd"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADefaultStartEnd);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
