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
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	TOWERDEFENSE_API UClass* Z_Construct_UClass_ADefaultTower_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ADefaultGridTile::execSpawnTower)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_TowerIntToBuild);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnTower(Z_Param_TowerIntToBuild);
		P_NATIVE_END;
	}
	void ADefaultGridTile::StaticRegisterNativesADefaultGridTile()
	{
		UClass* Class = ADefaultGridTile::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SpawnTower", &ADefaultGridTile::execSpawnTower },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADefaultGridTile_SpawnTower_Statics
	{
		struct DefaultGridTile_eventSpawnTower_Parms
		{
			int32 TowerIntToBuild;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_TowerIntToBuild;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ADefaultGridTile_SpawnTower_Statics::NewProp_TowerIntToBuild = { "TowerIntToBuild", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DefaultGridTile_eventSpawnTower_Parms, TowerIntToBuild), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADefaultGridTile_SpawnTower_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADefaultGridTile_SpawnTower_Statics::NewProp_TowerIntToBuild,
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
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_TowerList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TowerList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TowerList;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TowerSpawned_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TowerSpawned;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADefaultGridTile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TowerDefense,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ADefaultGridTile_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADefaultGridTile_SpawnTower, "SpawnTower" }, // 2040448517
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
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ADefaultGridTile_Statics::NewProp_TowerList_Inner = { "TowerList", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ADefaultTower_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefaultGridTile_Statics::NewProp_TowerList_MetaData[] = {
		{ "Category", "Tile | Tower" },
		{ "ModuleRelativePath", "DefaultGridTile.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADefaultGridTile_Statics::NewProp_TowerList = { "TowerList", nullptr, (EPropertyFlags)0x0014000000010015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADefaultGridTile, TowerList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ADefaultGridTile_Statics::NewProp_TowerList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultGridTile_Statics::NewProp_TowerList_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefaultGridTile_Statics::NewProp_TowerSpawned_MetaData[] = {
		{ "Category", "Tile | Tower" },
		{ "ModuleRelativePath", "DefaultGridTile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADefaultGridTile_Statics::NewProp_TowerSpawned = { "TowerSpawned", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADefaultGridTile, TowerSpawned), Z_Construct_UClass_ADefaultTower_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADefaultGridTile_Statics::NewProp_TowerSpawned_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultGridTile_Statics::NewProp_TowerSpawned_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADefaultGridTile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefaultGridTile_Statics::NewProp_TileMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefaultGridTile_Statics::NewProp_TowerList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefaultGridTile_Statics::NewProp_TowerList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefaultGridTile_Statics::NewProp_TowerSpawned,
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
	IMPLEMENT_CLASS(ADefaultGridTile, 4219016085);
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
