// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TowerDefense/TowerOverlay.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTowerOverlay() {}
// Cross Module References
	TOWERDEFENSE_API UClass* Z_Construct_UClass_UTowerOverlay_NoRegister();
	TOWERDEFENSE_API UClass* Z_Construct_UClass_UTowerOverlay();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_TowerDefense();
// End Cross Module References
	void UTowerOverlay::StaticRegisterNativesUTowerOverlay()
	{
	}
	UClass* Z_Construct_UClass_UTowerOverlay_NoRegister()
	{
		return UTowerOverlay::StaticClass();
	}
	struct Z_Construct_UClass_UTowerOverlay_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTowerOverlay_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_TowerDefense,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTowerOverlay_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "TowerOverlay.h" },
		{ "ModuleRelativePath", "TowerOverlay.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTowerOverlay_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTowerOverlay>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTowerOverlay_Statics::ClassParams = {
		&UTowerOverlay::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UTowerOverlay_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTowerOverlay_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTowerOverlay()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTowerOverlay_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTowerOverlay, 1466971473);
	template<> TOWERDEFENSE_API UClass* StaticClass<UTowerOverlay>()
	{
		return UTowerOverlay::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTowerOverlay(Z_Construct_UClass_UTowerOverlay, &UTowerOverlay::StaticClass, TEXT("/Script/TowerDefense"), TEXT("UTowerOverlay"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTowerOverlay);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
