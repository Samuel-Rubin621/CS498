// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/BP_TowerPanel__pf3166771619.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBP_TowerPanel__pf3166771619() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UBP_TowerPanel_C__pf3166771619_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UBP_TowerPanel_C__pf3166771619();
	TOWERDEFENSE_API UClass* Z_Construct_UClass_UTowerPanel();
// End Cross Module References
	void UBP_TowerPanel_C__pf3166771619::StaticRegisterNativesUBP_TowerPanel_C__pf3166771619()
	{
	}
	UClass* Z_Construct_UClass_UBP_TowerPanel_C__pf3166771619_NoRegister()
	{
		return UBP_TowerPanel_C__pf3166771619::StaticClass();
	}
	struct Z_Construct_UClass_UBP_TowerPanel_C__pf3166771619_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBP_TowerPanel_C__pf3166771619_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTowerPanel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBP_TowerPanel_C__pf3166771619_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "BP_TowerPanel__pf3166771619.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BP_TowerPanel__pf3166771619.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "BP_TowerPanel_C" },
		{ "ReplaceConverted", "/Game/UserInterface/BP_TowerPanel.BP_TowerPanel_C" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBP_TowerPanel_C__pf3166771619_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBP_TowerPanel_C__pf3166771619>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBP_TowerPanel_C__pf3166771619_Statics::ClassParams = {
		&UBP_TowerPanel_C__pf3166771619::StaticClass,
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
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBP_TowerPanel_C__pf3166771619_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBP_TowerPanel_C__pf3166771619_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBP_TowerPanel_C__pf3166771619()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/UserInterface/BP_TowerPanel"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("BP_TowerPanel_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBP_TowerPanel_C__pf3166771619_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(UBP_TowerPanel_C__pf3166771619, TEXT("BP_TowerPanel_C"), 1959019105);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<UBP_TowerPanel_C__pf3166771619>()
	{
		return UBP_TowerPanel_C__pf3166771619::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBP_TowerPanel_C__pf3166771619(Z_Construct_UClass_UBP_TowerPanel_C__pf3166771619, &UBP_TowerPanel_C__pf3166771619::StaticClass, TEXT("/Game/UserInterface/BP_TowerPanel"), TEXT("BP_TowerPanel_C"), true, TEXT("/Game/UserInterface/BP_TowerPanel"), TEXT("/Game/UserInterface/BP_TowerPanel.BP_TowerPanel_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBP_TowerPanel_C__pf3166771619);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
