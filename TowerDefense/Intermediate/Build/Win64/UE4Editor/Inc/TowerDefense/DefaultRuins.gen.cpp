// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TowerDefense/DefaultRuins.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDefaultRuins() {}
// Cross Module References
	TOWERDEFENSE_API UClass* Z_Construct_UClass_ADefaultRuins_NoRegister();
	TOWERDEFENSE_API UClass* Z_Construct_UClass_ADefaultRuins();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TowerDefense();
// End Cross Module References
	void ADefaultRuins::StaticRegisterNativesADefaultRuins()
	{
	}
	UClass* Z_Construct_UClass_ADefaultRuins_NoRegister()
	{
		return ADefaultRuins::StaticClass();
	}
	struct Z_Construct_UClass_ADefaultRuins_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADefaultRuins_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TowerDefense,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefaultRuins_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DefaultRuins.h" },
		{ "ModuleRelativePath", "DefaultRuins.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADefaultRuins_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADefaultRuins>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADefaultRuins_Statics::ClassParams = {
		&ADefaultRuins::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ADefaultRuins_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultRuins_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADefaultRuins()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADefaultRuins_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADefaultRuins, 3347751484);
	template<> TOWERDEFENSE_API UClass* StaticClass<ADefaultRuins>()
	{
		return ADefaultRuins::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADefaultRuins(Z_Construct_UClass_ADefaultRuins, &ADefaultRuins::StaticClass, TEXT("/Script/TowerDefense"), TEXT("ADefaultRuins"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADefaultRuins);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
