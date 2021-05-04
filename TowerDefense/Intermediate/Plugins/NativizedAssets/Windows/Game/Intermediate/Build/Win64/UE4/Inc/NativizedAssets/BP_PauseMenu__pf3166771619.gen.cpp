// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/BP_PauseMenu__pf3166771619.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBP_PauseMenu__pf3166771619() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UBP_PauseMenu_C__pf3166771619_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UBP_PauseMenu_C__pf3166771619();
	TOWERDEFENSE_API UClass* Z_Construct_UClass_UPauseMenu();
// End Cross Module References
	void UBP_PauseMenu_C__pf3166771619::StaticRegisterNativesUBP_PauseMenu_C__pf3166771619()
	{
	}
	UClass* Z_Construct_UClass_UBP_PauseMenu_C__pf3166771619_NoRegister()
	{
		return UBP_PauseMenu_C__pf3166771619::StaticClass();
	}
	struct Z_Construct_UClass_UBP_PauseMenu_C__pf3166771619_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBP_PauseMenu_C__pf3166771619_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPauseMenu,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBP_PauseMenu_C__pf3166771619_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "BP_PauseMenu__pf3166771619.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BP_PauseMenu__pf3166771619.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "BP_PauseMenu_C" },
		{ "ReplaceConverted", "/Game/UserInterface/BP_PauseMenu.BP_PauseMenu_C" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBP_PauseMenu_C__pf3166771619_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBP_PauseMenu_C__pf3166771619>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBP_PauseMenu_C__pf3166771619_Statics::ClassParams = {
		&UBP_PauseMenu_C__pf3166771619::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBP_PauseMenu_C__pf3166771619_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBP_PauseMenu_C__pf3166771619_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBP_PauseMenu_C__pf3166771619()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/UserInterface/BP_PauseMenu"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("BP_PauseMenu_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBP_PauseMenu_C__pf3166771619_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(UBP_PauseMenu_C__pf3166771619, TEXT("BP_PauseMenu_C"), 2156939885);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<UBP_PauseMenu_C__pf3166771619>()
	{
		return UBP_PauseMenu_C__pf3166771619::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBP_PauseMenu_C__pf3166771619(Z_Construct_UClass_UBP_PauseMenu_C__pf3166771619, &UBP_PauseMenu_C__pf3166771619::StaticClass, TEXT("/Game/UserInterface/BP_PauseMenu"), TEXT("BP_PauseMenu_C"), true, TEXT("/Game/UserInterface/BP_PauseMenu"), TEXT("/Game/UserInterface/BP_PauseMenu.BP_PauseMenu_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBP_PauseMenu_C__pf3166771619);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
