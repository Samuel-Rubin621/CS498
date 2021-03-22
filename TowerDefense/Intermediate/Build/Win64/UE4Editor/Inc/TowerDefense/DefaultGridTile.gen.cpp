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
// End Cross Module References
	void ADefaultGridTile::StaticRegisterNativesADefaultGridTile()
	{
	}
	UClass* Z_Construct_UClass_ADefaultGridTile_NoRegister()
	{
		return ADefaultGridTile::StaticClass();
	}
	struct Z_Construct_UClass_ADefaultGridTile_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MainTileMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MainTileMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DetailTileMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DetailTileMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADefaultGridTile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TowerDefense,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefaultGridTile_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DefaultGridTile.h" },
		{ "ModuleRelativePath", "DefaultGridTile.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefaultGridTile_Statics::NewProp_MainTileMesh_MetaData[] = {
		{ "Category", "Tile | Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DefaultGridTile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADefaultGridTile_Statics::NewProp_MainTileMesh = { "MainTileMesh", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADefaultGridTile, MainTileMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADefaultGridTile_Statics::NewProp_MainTileMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultGridTile_Statics::NewProp_MainTileMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefaultGridTile_Statics::NewProp_DetailTileMesh_MetaData[] = {
		{ "Category", "Tile | Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DefaultGridTile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADefaultGridTile_Statics::NewProp_DetailTileMesh = { "DetailTileMesh", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADefaultGridTile, DetailTileMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADefaultGridTile_Statics::NewProp_DetailTileMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultGridTile_Statics::NewProp_DetailTileMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADefaultGridTile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefaultGridTile_Statics::NewProp_MainTileMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefaultGridTile_Statics::NewProp_DetailTileMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADefaultGridTile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADefaultGridTile>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADefaultGridTile_Statics::ClassParams = {
		&ADefaultGridTile::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ADefaultGridTile_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
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
	IMPLEMENT_CLASS(ADefaultGridTile, 1990996010);
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
