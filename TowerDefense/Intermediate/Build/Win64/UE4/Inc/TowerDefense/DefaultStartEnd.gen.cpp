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
	TOWERDEFENSE_API UClass* Z_Construct_UClass_ADefaultStartEnd_NoRegister();
	TOWERDEFENSE_API UClass* Z_Construct_UClass_ADefaultStartEnd();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TowerDefense();
// End Cross Module References
	void ADefaultStartEnd::StaticRegisterNativesADefaultStartEnd()
	{
	}
	UClass* Z_Construct_UClass_ADefaultStartEnd_NoRegister()
	{
		return ADefaultStartEnd::StaticClass();
	}
	struct Z_Construct_UClass_ADefaultStartEnd_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADefaultStartEnd_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TowerDefense,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefaultStartEnd_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DefaultStartEnd.h" },
		{ "ModuleRelativePath", "DefaultStartEnd.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADefaultStartEnd_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADefaultStartEnd>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADefaultStartEnd_Statics::ClassParams = {
		&ADefaultStartEnd::StaticClass,
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
	IMPLEMENT_CLASS(ADefaultStartEnd, 4184578444);
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
