// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TowerDefense/WorldGrid.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldGrid() {}
// Cross Module References
	TOWERDEFENSE_API UClass* Z_Construct_UClass_AWorldGrid_NoRegister();
	TOWERDEFENSE_API UClass* Z_Construct_UClass_AWorldGrid();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TowerDefense();
// End Cross Module References
	void AWorldGrid::StaticRegisterNativesAWorldGrid()
	{
	}
	UClass* Z_Construct_UClass_AWorldGrid_NoRegister()
	{
		return AWorldGrid::StaticClass();
	}
	struct Z_Construct_UClass_AWorldGrid_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWorldGrid_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TowerDefense,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldGrid_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WorldGrid.h" },
		{ "ModuleRelativePath", "WorldGrid.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWorldGrid_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWorldGrid>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWorldGrid_Statics::ClassParams = {
		&AWorldGrid::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AWorldGrid_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldGrid_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWorldGrid()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWorldGrid_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWorldGrid, 2727609243);
	template<> TOWERDEFENSE_API UClass* StaticClass<AWorldGrid>()
	{
		return AWorldGrid::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWorldGrid(Z_Construct_UClass_AWorldGrid, &AWorldGrid::StaticClass, TEXT("/Script/TowerDefense"), TEXT("AWorldGrid"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWorldGrid);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
