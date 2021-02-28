// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TowerDefense/TowerDefenseGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTowerDefenseGameMode() {}
// Cross Module References
	TOWERDEFENSE_API UClass* Z_Construct_UClass_ATowerDefenseGameMode_NoRegister();
	TOWERDEFENSE_API UClass* Z_Construct_UClass_ATowerDefenseGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_TowerDefense();
// End Cross Module References
	void ATowerDefenseGameMode::StaticRegisterNativesATowerDefenseGameMode()
	{
	}
	UClass* Z_Construct_UClass_ATowerDefenseGameMode_NoRegister()
	{
		return ATowerDefenseGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ATowerDefenseGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATowerDefenseGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TowerDefense,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATowerDefenseGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "TowerDefenseGameMode.h" },
		{ "ModuleRelativePath", "TowerDefenseGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATowerDefenseGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATowerDefenseGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATowerDefenseGameMode_Statics::ClassParams = {
		&ATowerDefenseGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ATowerDefenseGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATowerDefenseGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATowerDefenseGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATowerDefenseGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATowerDefenseGameMode, 4014826186);
	template<> TOWERDEFENSE_API UClass* StaticClass<ATowerDefenseGameMode>()
	{
		return ATowerDefenseGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATowerDefenseGameMode(Z_Construct_UClass_ATowerDefenseGameMode, &ATowerDefenseGameMode::StaticClass, TEXT("/Script/TowerDefense"), TEXT("ATowerDefenseGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATowerDefenseGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
