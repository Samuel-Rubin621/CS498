// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TowerDefense/TD_GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTD_GameInstance() {}
// Cross Module References
	TOWERDEFENSE_API UClass* Z_Construct_UClass_UTD_GameInstance_NoRegister();
	TOWERDEFENSE_API UClass* Z_Construct_UClass_UTD_GameInstance();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	UPackage* Z_Construct_UPackage__Script_TowerDefense();
// End Cross Module References
	void UTD_GameInstance::StaticRegisterNativesUTD_GameInstance()
	{
	}
	UClass* Z_Construct_UClass_UTD_GameInstance_NoRegister()
	{
		return UTD_GameInstance::StaticClass();
	}
	struct Z_Construct_UClass_UTD_GameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTD_GameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_TowerDefense,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTD_GameInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "TD_GameInstance.h" },
		{ "ModuleRelativePath", "TD_GameInstance.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTD_GameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTD_GameInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTD_GameInstance_Statics::ClassParams = {
		&UTD_GameInstance::StaticClass,
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
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UTD_GameInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTD_GameInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTD_GameInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTD_GameInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTD_GameInstance, 4158773159);
	template<> TOWERDEFENSE_API UClass* StaticClass<UTD_GameInstance>()
	{
		return UTD_GameInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTD_GameInstance(Z_Construct_UClass_UTD_GameInstance, &UTD_GameInstance::StaticClass, TEXT("/Script/TowerDefense"), TEXT("UTD_GameInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTD_GameInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
