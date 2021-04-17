// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TowerDefense/Path.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePath() {}
// Cross Module References
	TOWERDEFENSE_API UScriptStruct* Z_Construct_UScriptStruct_FEnemyData();
	UPackage* Z_Construct_UPackage__Script_TowerDefense();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	TOWERDEFENSE_API UClass* Z_Construct_UClass_ADefaultEnemy_NoRegister();
	TOWERDEFENSE_API UScriptStruct* Z_Construct_UScriptStruct_FRoundInformation();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	TOWERDEFENSE_API UClass* Z_Construct_UClass_APath_NoRegister();
	TOWERDEFENSE_API UClass* Z_Construct_UClass_APath();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
	TOWERDEFENSE_API UClass* Z_Construct_UClass_ATowerDefenseGameMode_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
// End Cross Module References
class UScriptStruct* FEnemyData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TOWERDEFENSE_API uint32 Get_Z_Construct_UScriptStruct_FEnemyData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEnemyData, Z_Construct_UPackage__Script_TowerDefense(), TEXT("EnemyData"), sizeof(FEnemyData), Get_Z_Construct_UScriptStruct_FEnemyData_Hash());
	}
	return Singleton;
}
template<> TOWERDEFENSE_API UScriptStruct* StaticStruct<FEnemyData>()
{
	return FEnemyData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEnemyData(FEnemyData::StaticStruct, TEXT("/Script/TowerDefense"), TEXT("EnemyData"), false, nullptr, nullptr);
static struct FScriptStruct_TowerDefense_StaticRegisterNativesFEnemyData
{
	FScriptStruct_TowerDefense_StaticRegisterNativesFEnemyData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EnemyData")),new UScriptStruct::TCppStructOps<FEnemyData>);
	}
} ScriptStruct_TowerDefense_StaticRegisterNativesFEnemyData;
	struct Z_Construct_UScriptStruct_FEnemyData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmountToSpawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AmountToSpawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpawnDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClassToSpawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ClassToSpawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnemyData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Struct to store the number of enemies to spawn and which enemy to spawn\n" },
		{ "ModuleRelativePath", "Path.h" },
		{ "ToolTip", "Struct to store the number of enemies to spawn and which enemy to spawn" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEnemyData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEnemyData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnemyData_Statics::NewProp_AmountToSpawn_MetaData[] = {
		{ "Category", "EnemyData" },
		{ "ModuleRelativePath", "Path.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEnemyData_Statics::NewProp_AmountToSpawn = { "AmountToSpawn", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEnemyData, AmountToSpawn), METADATA_PARAMS(Z_Construct_UScriptStruct_FEnemyData_Statics::NewProp_AmountToSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyData_Statics::NewProp_AmountToSpawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnemyData_Statics::NewProp_SpawnDelay_MetaData[] = {
		{ "Category", "EnemyData" },
		{ "ModuleRelativePath", "Path.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEnemyData_Statics::NewProp_SpawnDelay = { "SpawnDelay", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEnemyData, SpawnDelay), METADATA_PARAMS(Z_Construct_UScriptStruct_FEnemyData_Statics::NewProp_SpawnDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyData_Statics::NewProp_SpawnDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnemyData_Statics::NewProp_ClassToSpawn_MetaData[] = {
		{ "Category", "EnemyData" },
		{ "ModuleRelativePath", "Path.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FEnemyData_Statics::NewProp_ClassToSpawn = { "ClassToSpawn", nullptr, (EPropertyFlags)0x0014000000010005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEnemyData, ClassToSpawn), Z_Construct_UClass_ADefaultEnemy_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FEnemyData_Statics::NewProp_ClassToSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyData_Statics::NewProp_ClassToSpawn_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEnemyData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnemyData_Statics::NewProp_AmountToSpawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnemyData_Statics::NewProp_SpawnDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnemyData_Statics::NewProp_ClassToSpawn,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEnemyData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TowerDefense,
		nullptr,
		&NewStructOps,
		"EnemyData",
		sizeof(FEnemyData),
		alignof(FEnemyData),
		Z_Construct_UScriptStruct_FEnemyData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEnemyData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEnemyData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEnemyData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TowerDefense();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EnemyData"), sizeof(FEnemyData), Get_Z_Construct_UScriptStruct_FEnemyData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEnemyData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEnemyData_Hash() { return 3342973332U; }

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
		{ "Comment", "// Struct to get data from a table to fill values for waves\n" },
		{ "ModuleRelativePath", "Path.h" },
		{ "ToolTip", "Struct to get data from a table to fill values for waves" },
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
		{ "ModuleRelativePath", "Path.h" },
		{ "ToolTip", "Amount of enemies to spawn based on round" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRoundInformation_Statics::NewProp_Enemy1 = { "Enemy1", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRoundInformation, Enemy1), METADATA_PARAMS(Z_Construct_UScriptStruct_FRoundInformation_Statics::NewProp_Enemy1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRoundInformation_Statics::NewProp_Enemy1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRoundInformation_Statics::NewProp_Enemy2_MetaData[] = {
		{ "Category", "RoundInformation" },
		{ "ModuleRelativePath", "Path.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRoundInformation_Statics::NewProp_Enemy2 = { "Enemy2", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRoundInformation, Enemy2), METADATA_PARAMS(Z_Construct_UScriptStruct_FRoundInformation_Statics::NewProp_Enemy2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRoundInformation_Statics::NewProp_Enemy2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRoundInformation_Statics::NewProp_Enemy3_MetaData[] = {
		{ "Category", "RoundInformation" },
		{ "ModuleRelativePath", "Path.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRoundInformation_Statics::NewProp_Enemy3 = { "Enemy3", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRoundInformation, Enemy3), METADATA_PARAMS(Z_Construct_UScriptStruct_FRoundInformation_Statics::NewProp_Enemy3_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRoundInformation_Statics::NewProp_Enemy3_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRoundInformation_Statics::NewProp_Enemy4_MetaData[] = {
		{ "Category", "RoundInformation" },
		{ "ModuleRelativePath", "Path.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRoundInformation_Statics::NewProp_Enemy4 = { "Enemy4", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRoundInformation, Enemy4), METADATA_PARAMS(Z_Construct_UScriptStruct_FRoundInformation_Statics::NewProp_Enemy4_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRoundInformation_Statics::NewProp_Enemy4_MetaData)) };
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
	uint32 Get_Z_Construct_UScriptStruct_FRoundInformation_Hash() { return 2213139759U; }
	DEFINE_FUNCTION(APath::execSpawnEnemy)
	{
		P_GET_STRUCT(FEnemyData,Z_Param_EnemySpawningData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnEnemy(Z_Param_EnemySpawningData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APath::execCallSpawner)
	{
		P_GET_STRUCT(FEnemyData,Z_Param_EnemySpawningData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CallSpawner(Z_Param_EnemySpawningData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APath::execStartRound)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartRound();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APath::execPreloadNextRound)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Round);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PreloadNextRound(Z_Param_Round);
		P_NATIVE_END;
	}
	void APath::StaticRegisterNativesAPath()
	{
		UClass* Class = APath::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CallSpawner", &APath::execCallSpawner },
			{ "PreloadNextRound", &APath::execPreloadNextRound },
			{ "SpawnEnemy", &APath::execSpawnEnemy },
			{ "StartRound", &APath::execStartRound },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APath_CallSpawner_Statics
	{
		struct Path_eventCallSpawner_Parms
		{
			FEnemyData EnemySpawningData;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EnemySpawningData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APath_CallSpawner_Statics::NewProp_EnemySpawningData = { "EnemySpawningData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Path_eventCallSpawner_Parms, EnemySpawningData), Z_Construct_UScriptStruct_FEnemyData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APath_CallSpawner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APath_CallSpawner_Statics::NewProp_EnemySpawningData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APath_CallSpawner_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Path.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APath_CallSpawner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APath, nullptr, "CallSpawner", nullptr, nullptr, sizeof(Path_eventCallSpawner_Parms), Z_Construct_UFunction_APath_CallSpawner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APath_CallSpawner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APath_CallSpawner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APath_CallSpawner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APath_CallSpawner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APath_CallSpawner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APath_PreloadNextRound_Statics
	{
		struct Path_eventPreloadNextRound_Parms
		{
			int32 Round;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Round;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APath_PreloadNextRound_Statics::NewProp_Round = { "Round", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Path_eventPreloadNextRound_Parms, Round), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APath_PreloadNextRound_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APath_PreloadNextRound_Statics::NewProp_Round,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APath_PreloadNextRound_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Path.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APath_PreloadNextRound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APath, nullptr, "PreloadNextRound", nullptr, nullptr, sizeof(Path_eventPreloadNextRound_Parms), Z_Construct_UFunction_APath_PreloadNextRound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APath_PreloadNextRound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APath_PreloadNextRound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APath_PreloadNextRound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APath_PreloadNextRound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APath_PreloadNextRound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APath_SpawnEnemy_Statics
	{
		struct Path_eventSpawnEnemy_Parms
		{
			FEnemyData EnemySpawningData;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EnemySpawningData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APath_SpawnEnemy_Statics::NewProp_EnemySpawningData = { "EnemySpawningData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Path_eventSpawnEnemy_Parms, EnemySpawningData), Z_Construct_UScriptStruct_FEnemyData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APath_SpawnEnemy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APath_SpawnEnemy_Statics::NewProp_EnemySpawningData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APath_SpawnEnemy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Path.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APath_SpawnEnemy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APath, nullptr, "SpawnEnemy", nullptr, nullptr, sizeof(Path_eventSpawnEnemy_Parms), Z_Construct_UFunction_APath_SpawnEnemy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APath_SpawnEnemy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APath_SpawnEnemy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APath_SpawnEnemy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APath_SpawnEnemy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APath_SpawnEnemy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APath_StartRound_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APath_StartRound_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Path.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APath_StartRound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APath, nullptr, "StartRound", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APath_StartRound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APath_StartRound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APath_StartRound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APath_StartRound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APath_NoRegister()
	{
		return APath::StaticClass();
	}
	struct Z_Construct_UClass_APath_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplinePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SplinePath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GameMode;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PathPoints_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PathPoints;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoundDataTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RoundDataTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalToSpawnThisRound_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TotalToSpawnThisRound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Enemy1_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Enemy1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Enemy2_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Enemy2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Enemy3_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Enemy3;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Enemy4_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Enemy4;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APath_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TowerDefense,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APath_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APath_CallSpawner, "CallSpawner" }, // 680489185
		{ &Z_Construct_UFunction_APath_PreloadNextRound, "PreloadNextRound" }, // 3725263682
		{ &Z_Construct_UFunction_APath_SpawnEnemy, "SpawnEnemy" }, // 2526470051
		{ &Z_Construct_UFunction_APath_StartRound, "StartRound" }, // 3569780175
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APath_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Path.h" },
		{ "ModuleRelativePath", "Path.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APath_Statics::NewProp_SplinePath_MetaData[] = {
		{ "Category", "Path" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Path.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APath_Statics::NewProp_SplinePath = { "SplinePath", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APath, SplinePath), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APath_Statics::NewProp_SplinePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APath_Statics::NewProp_SplinePath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APath_Statics::NewProp_GameMode_MetaData[] = {
		{ "Category", "References" },
		{ "ModuleRelativePath", "Path.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APath_Statics::NewProp_GameMode = { "GameMode", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APath, GameMode), Z_Construct_UClass_ATowerDefenseGameMode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APath_Statics::NewProp_GameMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APath_Statics::NewProp_GameMode_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_APath_Statics::NewProp_PathPoints_Inner = { "PathPoints", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APath_Statics::NewProp_PathPoints_MetaData[] = {
		{ "Category", "Path" },
		{ "ModuleRelativePath", "Path.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APath_Statics::NewProp_PathPoints = { "PathPoints", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APath, PathPoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_APath_Statics::NewProp_PathPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APath_Statics::NewProp_PathPoints_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APath_Statics::NewProp_RoundDataTable_MetaData[] = {
		{ "Category", "Wave | Spawning" },
		{ "ModuleRelativePath", "Path.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APath_Statics::NewProp_RoundDataTable = { "RoundDataTable", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APath, RoundDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APath_Statics::NewProp_RoundDataTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APath_Statics::NewProp_RoundDataTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APath_Statics::NewProp_TotalToSpawnThisRound_MetaData[] = {
		{ "Category", "Wave | Spawning" },
		{ "ModuleRelativePath", "Path.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_APath_Statics::NewProp_TotalToSpawnThisRound = { "TotalToSpawnThisRound", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APath, TotalToSpawnThisRound), METADATA_PARAMS(Z_Construct_UClass_APath_Statics::NewProp_TotalToSpawnThisRound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APath_Statics::NewProp_TotalToSpawnThisRound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APath_Statics::NewProp_Enemy1_MetaData[] = {
		{ "Category", "Path" },
		{ "Comment", "// Amount of enemies to spawn based on round\n" },
		{ "ModuleRelativePath", "Path.h" },
		{ "ToolTip", "Amount of enemies to spawn based on round" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_APath_Statics::NewProp_Enemy1 = { "Enemy1", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APath, Enemy1), Z_Construct_UScriptStruct_FEnemyData, METADATA_PARAMS(Z_Construct_UClass_APath_Statics::NewProp_Enemy1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APath_Statics::NewProp_Enemy1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APath_Statics::NewProp_Enemy2_MetaData[] = {
		{ "Category", "Path" },
		{ "ModuleRelativePath", "Path.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_APath_Statics::NewProp_Enemy2 = { "Enemy2", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APath, Enemy2), Z_Construct_UScriptStruct_FEnemyData, METADATA_PARAMS(Z_Construct_UClass_APath_Statics::NewProp_Enemy2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APath_Statics::NewProp_Enemy2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APath_Statics::NewProp_Enemy3_MetaData[] = {
		{ "Category", "Path" },
		{ "ModuleRelativePath", "Path.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_APath_Statics::NewProp_Enemy3 = { "Enemy3", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APath, Enemy3), Z_Construct_UScriptStruct_FEnemyData, METADATA_PARAMS(Z_Construct_UClass_APath_Statics::NewProp_Enemy3_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APath_Statics::NewProp_Enemy3_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APath_Statics::NewProp_Enemy4_MetaData[] = {
		{ "Category", "Path" },
		{ "ModuleRelativePath", "Path.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_APath_Statics::NewProp_Enemy4 = { "Enemy4", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APath, Enemy4), Z_Construct_UScriptStruct_FEnemyData, METADATA_PARAMS(Z_Construct_UClass_APath_Statics::NewProp_Enemy4_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APath_Statics::NewProp_Enemy4_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APath_Statics::NewProp_SplinePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APath_Statics::NewProp_GameMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APath_Statics::NewProp_PathPoints_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APath_Statics::NewProp_PathPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APath_Statics::NewProp_RoundDataTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APath_Statics::NewProp_TotalToSpawnThisRound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APath_Statics::NewProp_Enemy1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APath_Statics::NewProp_Enemy2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APath_Statics::NewProp_Enemy3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APath_Statics::NewProp_Enemy4,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APath_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APath>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APath_Statics::ClassParams = {
		&APath::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APath_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APath_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APath_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APath_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APath()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APath_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APath, 3625601566);
	template<> TOWERDEFENSE_API UClass* StaticClass<APath>()
	{
		return APath::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APath(Z_Construct_UClass_APath, &APath::StaticClass, TEXT("/Script/TowerDefense"), TEXT("APath"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APath);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
