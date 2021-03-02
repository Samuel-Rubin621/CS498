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
	TOWERDEFENSE_API UScriptStruct* Z_Construct_UScriptStruct_FEnemyData();
	UPackage* Z_Construct_UPackage__Script_TowerDefense();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	TOWERDEFENSE_API UClass* Z_Construct_UClass_ADefaultEnemy_NoRegister();
	TOWERDEFENSE_API UScriptStruct* Z_Construct_UScriptStruct_FRoundInformation();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	TOWERDEFENSE_API UClass* Z_Construct_UClass_ADefaultStartEnd_NoRegister();
	TOWERDEFENSE_API UClass* Z_Construct_UClass_ADefaultStartEnd();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClassToSpawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ClassToSpawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnemyData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//Struct to store the number of enemies to spawn and which enemy to spawn\n" },
		{ "ModuleRelativePath", "DefaultStartEnd.h" },
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
		{ "ModuleRelativePath", "DefaultStartEnd.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEnemyData_Statics::NewProp_AmountToSpawn = { "AmountToSpawn", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEnemyData, AmountToSpawn), METADATA_PARAMS(Z_Construct_UScriptStruct_FEnemyData_Statics::NewProp_AmountToSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyData_Statics::NewProp_AmountToSpawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnemyData_Statics::NewProp_ClassToSpawn_MetaData[] = {
		{ "Category", "EnemyData" },
		{ "ModuleRelativePath", "DefaultStartEnd.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FEnemyData_Statics::NewProp_ClassToSpawn = { "ClassToSpawn", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEnemyData, ClassToSpawn), Z_Construct_UClass_ADefaultEnemy_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FEnemyData_Statics::NewProp_ClassToSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyData_Statics::NewProp_ClassToSpawn_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEnemyData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnemyData_Statics::NewProp_AmountToSpawn,
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
	uint32 Get_Z_Construct_UScriptStruct_FEnemyData_Hash() { return 3064143568U; }

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
		{ "Comment", "//Struct to get data from a table to fill values for waves\n" },
		{ "ModuleRelativePath", "DefaultStartEnd.h" },
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
		{ "ModuleRelativePath", "DefaultStartEnd.h" },
		{ "ToolTip", "Amount of enemies to spawn based on round" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRoundInformation_Statics::NewProp_Enemy1 = { "Enemy1", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRoundInformation, Enemy1), METADATA_PARAMS(Z_Construct_UScriptStruct_FRoundInformation_Statics::NewProp_Enemy1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRoundInformation_Statics::NewProp_Enemy1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRoundInformation_Statics::NewProp_Enemy2_MetaData[] = {
		{ "Category", "RoundInformation" },
		{ "ModuleRelativePath", "DefaultStartEnd.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRoundInformation_Statics::NewProp_Enemy2 = { "Enemy2", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRoundInformation, Enemy2), METADATA_PARAMS(Z_Construct_UScriptStruct_FRoundInformation_Statics::NewProp_Enemy2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRoundInformation_Statics::NewProp_Enemy2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRoundInformation_Statics::NewProp_Enemy3_MetaData[] = {
		{ "Category", "RoundInformation" },
		{ "ModuleRelativePath", "DefaultStartEnd.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRoundInformation_Statics::NewProp_Enemy3 = { "Enemy3", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRoundInformation, Enemy3), METADATA_PARAMS(Z_Construct_UScriptStruct_FRoundInformation_Statics::NewProp_Enemy3_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRoundInformation_Statics::NewProp_Enemy3_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRoundInformation_Statics::NewProp_Enemy4_MetaData[] = {
		{ "Category", "RoundInformation" },
		{ "ModuleRelativePath", "DefaultStartEnd.h" },
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
	uint32 Get_Z_Construct_UScriptStruct_FRoundInformation_Hash() { return 3591039324U; }
	DEFINE_FUNCTION(ADefaultStartEnd::execSpawnEnemy)
	{
		P_GET_STRUCT(FEnemyData,Z_Param_EnemySpawningData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnEnemy(Z_Param_EnemySpawningData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADefaultStartEnd::execCallSpawner)
	{
		P_GET_STRUCT(FEnemyData,Z_Param_EnemySpawningData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CallSpawner(Z_Param_EnemySpawningData);
		P_NATIVE_END;
	}
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
			{ "CallSpawner", &ADefaultStartEnd::execCallSpawner },
			{ "PreloadNextRound", &ADefaultStartEnd::execPreloadNextRound },
			{ "SpawnEnemy", &ADefaultStartEnd::execSpawnEnemy },
			{ "StartRound", &ADefaultStartEnd::execStartRound },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADefaultStartEnd_CallSpawner_Statics
	{
		struct DefaultStartEnd_eventCallSpawner_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADefaultStartEnd_CallSpawner_Statics::NewProp_EnemySpawningData = { "EnemySpawningData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DefaultStartEnd_eventCallSpawner_Parms, EnemySpawningData), Z_Construct_UScriptStruct_FEnemyData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADefaultStartEnd_CallSpawner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADefaultStartEnd_CallSpawner_Statics::NewProp_EnemySpawningData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADefaultStartEnd_CallSpawner_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DefaultStartEnd.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADefaultStartEnd_CallSpawner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADefaultStartEnd, nullptr, "CallSpawner", nullptr, nullptr, sizeof(DefaultStartEnd_eventCallSpawner_Parms), Z_Construct_UFunction_ADefaultStartEnd_CallSpawner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADefaultStartEnd_CallSpawner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADefaultStartEnd_CallSpawner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADefaultStartEnd_CallSpawner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADefaultStartEnd_CallSpawner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADefaultStartEnd_CallSpawner_Statics::FuncParams);
		}
		return ReturnFunction;
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
	struct Z_Construct_UFunction_ADefaultStartEnd_SpawnEnemy_Statics
	{
		struct DefaultStartEnd_eventSpawnEnemy_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADefaultStartEnd_SpawnEnemy_Statics::NewProp_EnemySpawningData = { "EnemySpawningData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DefaultStartEnd_eventSpawnEnemy_Parms, EnemySpawningData), Z_Construct_UScriptStruct_FEnemyData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADefaultStartEnd_SpawnEnemy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADefaultStartEnd_SpawnEnemy_Statics::NewProp_EnemySpawningData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADefaultStartEnd_SpawnEnemy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DefaultStartEnd.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADefaultStartEnd_SpawnEnemy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADefaultStartEnd, nullptr, "SpawnEnemy", nullptr, nullptr, sizeof(DefaultStartEnd_eventSpawnEnemy_Parms), Z_Construct_UFunction_ADefaultStartEnd_SpawnEnemy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADefaultStartEnd_SpawnEnemy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADefaultStartEnd_SpawnEnemy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADefaultStartEnd_SpawnEnemy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADefaultStartEnd_SpawnEnemy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADefaultStartEnd_SpawnEnemy_Statics::FuncParams);
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
	UObject* (*const Z_Construct_UClass_ADefaultStartEnd_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TowerDefense,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ADefaultStartEnd_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADefaultStartEnd_CallSpawner, "CallSpawner" }, // 1509770045
		{ &Z_Construct_UFunction_ADefaultStartEnd_PreloadNextRound, "PreloadNextRound" }, // 2270319292
		{ &Z_Construct_UFunction_ADefaultStartEnd_SpawnEnemy, "SpawnEnemy" }, // 4176878852
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADefaultStartEnd_Statics::NewProp_Enemy1 = { "Enemy1", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADefaultStartEnd, Enemy1), Z_Construct_UScriptStruct_FEnemyData, METADATA_PARAMS(Z_Construct_UClass_ADefaultStartEnd_Statics::NewProp_Enemy1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultStartEnd_Statics::NewProp_Enemy1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefaultStartEnd_Statics::NewProp_Enemy2_MetaData[] = {
		{ "Category", "DefaultStartEnd" },
		{ "ModuleRelativePath", "DefaultStartEnd.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADefaultStartEnd_Statics::NewProp_Enemy2 = { "Enemy2", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADefaultStartEnd, Enemy2), Z_Construct_UScriptStruct_FEnemyData, METADATA_PARAMS(Z_Construct_UClass_ADefaultStartEnd_Statics::NewProp_Enemy2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultStartEnd_Statics::NewProp_Enemy2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefaultStartEnd_Statics::NewProp_Enemy3_MetaData[] = {
		{ "Category", "DefaultStartEnd" },
		{ "ModuleRelativePath", "DefaultStartEnd.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADefaultStartEnd_Statics::NewProp_Enemy3 = { "Enemy3", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADefaultStartEnd, Enemy3), Z_Construct_UScriptStruct_FEnemyData, METADATA_PARAMS(Z_Construct_UClass_ADefaultStartEnd_Statics::NewProp_Enemy3_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultStartEnd_Statics::NewProp_Enemy3_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefaultStartEnd_Statics::NewProp_Enemy4_MetaData[] = {
		{ "Category", "DefaultStartEnd" },
		{ "ModuleRelativePath", "DefaultStartEnd.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADefaultStartEnd_Statics::NewProp_Enemy4 = { "Enemy4", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADefaultStartEnd, Enemy4), Z_Construct_UScriptStruct_FEnemyData, METADATA_PARAMS(Z_Construct_UClass_ADefaultStartEnd_Statics::NewProp_Enemy4_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultStartEnd_Statics::NewProp_Enemy4_MetaData)) };
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
	IMPLEMENT_CLASS(ADefaultStartEnd, 241653812);
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
