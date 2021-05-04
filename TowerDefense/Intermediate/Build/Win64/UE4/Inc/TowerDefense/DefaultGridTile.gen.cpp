// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TowerDefense/DefaultGridTile.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDefaultGridTile() {}
// Cross Module References
	TOWERDEFENSE_API UClass* Z_Construct_UClass_ADefaultGridTile_NoRegister();
	TOWERDEFENSE_API UClass* Z_Construct_UClass_ADefaultGridTile();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TowerDefense();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	TOWERDEFENSE_API UClass* Z_Construct_UClass_ADefaultTower_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ADefaultGridTile::execSpawnTower)
	{
		P_GET_OBJECT(UClass,Z_Param_TowerToSpawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnTower(Z_Param_TowerToSpawn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADefaultGridTile::execTileSelected)
	{
		P_GET_OBJECT(AActor,Z_Param_TouchedActor);
		P_GET_STRUCT(FKey,Z_Param_ButtonPressed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TileSelected(Z_Param_TouchedActor,Z_Param_ButtonPressed);
		P_NATIVE_END;
	}
	void ADefaultGridTile::StaticRegisterNativesADefaultGridTile()
	{
		UClass* Class = ADefaultGridTile::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SpawnTower", &ADefaultGridTile::execSpawnTower },
			{ "TileSelected", &ADefaultGridTile::execTileSelected },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADefaultGridTile_SpawnTower_Statics
	{
		struct DefaultGridTile_eventSpawnTower_Parms
		{
			TSubclassOf<ADefaultTower>  TowerToSpawn;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_TowerToSpawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ADefaultGridTile_SpawnTower_Statics::NewProp_TowerToSpawn = { "TowerToSpawn", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DefaultGridTile_eventSpawnTower_Parms, TowerToSpawn), Z_Construct_UClass_ADefaultTower_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADefaultGridTile_SpawnTower_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADefaultGridTile_SpawnTower_Statics::NewProp_TowerToSpawn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADefaultGridTile_SpawnTower_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DefaultGridTile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADefaultGridTile_SpawnTower_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADefaultGridTile, nullptr, "SpawnTower", nullptr, nullptr, sizeof(DefaultGridTile_eventSpawnTower_Parms), Z_Construct_UFunction_ADefaultGridTile_SpawnTower_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADefaultGridTile_SpawnTower_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADefaultGridTile_SpawnTower_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADefaultGridTile_SpawnTower_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADefaultGridTile_SpawnTower()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADefaultGridTile_SpawnTower_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADefaultGridTile_TileSelected_Statics
	{
		struct DefaultGridTile_eventTileSelected_Parms
		{
			AActor* TouchedActor;
			FKey ButtonPressed;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TouchedActor;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ButtonPressed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADefaultGridTile_TileSelected_Statics::NewProp_TouchedActor = { "TouchedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DefaultGridTile_eventTileSelected_Parms, TouchedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADefaultGridTile_TileSelected_Statics::NewProp_ButtonPressed = { "ButtonPressed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DefaultGridTile_eventTileSelected_Parms, ButtonPressed), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADefaultGridTile_TileSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADefaultGridTile_TileSelected_Statics::NewProp_TouchedActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADefaultGridTile_TileSelected_Statics::NewProp_ButtonPressed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADefaultGridTile_TileSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DefaultGridTile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADefaultGridTile_TileSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADefaultGridTile, nullptr, "TileSelected", nullptr, nullptr, sizeof(DefaultGridTile_eventTileSelected_Parms), Z_Construct_UFunction_ADefaultGridTile_TileSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADefaultGridTile_TileSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADefaultGridTile_TileSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADefaultGridTile_TileSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADefaultGridTile_TileSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADefaultGridTile_TileSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ADefaultGridTile_NoRegister()
	{
		return ADefaultGridTile::StaticClass();
	}
	struct Z_Construct_UClass_ADefaultGridTile_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TileMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TileMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnedTower_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnedTower;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADefaultGridTile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TowerDefense,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ADefaultGridTile_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADefaultGridTile_SpawnTower, "SpawnTower" }, // 2876652116
		{ &Z_Construct_UFunction_ADefaultGridTile_TileSelected, "TileSelected" }, // 919116410
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefaultGridTile_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DefaultGridTile.h" },
		{ "ModuleRelativePath", "DefaultGridTile.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefaultGridTile_Statics::NewProp_TileMesh_MetaData[] = {
		{ "Category", "Tile | Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DefaultGridTile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADefaultGridTile_Statics::NewProp_TileMesh = { "TileMesh", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADefaultGridTile, TileMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADefaultGridTile_Statics::NewProp_TileMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultGridTile_Statics::NewProp_TileMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefaultGridTile_Statics::NewProp_SpawnedTower_MetaData[] = {
		{ "Category", "Tile | Tower" },
		{ "ModuleRelativePath", "DefaultGridTile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADefaultGridTile_Statics::NewProp_SpawnedTower = { "SpawnedTower", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADefaultGridTile, SpawnedTower), Z_Construct_UClass_ADefaultTower_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADefaultGridTile_Statics::NewProp_SpawnedTower_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultGridTile_Statics::NewProp_SpawnedTower_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADefaultGridTile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefaultGridTile_Statics::NewProp_TileMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefaultGridTile_Statics::NewProp_SpawnedTower,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADefaultGridTile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADefaultGridTile>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADefaultGridTile_Statics::ClassParams = {
		&ADefaultGridTile::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ADefaultGridTile_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultGridTile_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADefaultGridTile_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultGridTile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADefaultGridTile()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADefaultGridTile_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADefaultGridTile, 1272987317);
	template<> TOWERDEFENSE_API UClass* StaticClass<ADefaultGridTile>()
	{
		return ADefaultGridTile::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADefaultGridTile(Z_Construct_UClass_ADefaultGridTile, &ADefaultGridTile::StaticClass, TEXT("/Script/TowerDefense"), TEXT("ADefaultGridTile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADefaultGridTile);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
