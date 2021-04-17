// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TowerDefense/UI/ScreenOverlay.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScreenOverlay() {}
// Cross Module References
	TOWERDEFENSE_API UClass* Z_Construct_UClass_UScreenOverlay_NoRegister();
	TOWERDEFENSE_API UClass* Z_Construct_UClass_UScreenOverlay();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_TowerDefense();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	TOWERDEFENSE_API UClass* Z_Construct_UClass_ULives_NoRegister();
	TOWERDEFENSE_API UClass* Z_Construct_UClass_UMoney_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UScreenOverlay::execButtonClickTesting)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ButtonClickTesting();
		P_NATIVE_END;
	}
	void UScreenOverlay::StaticRegisterNativesUScreenOverlay()
	{
		UClass* Class = UScreenOverlay::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ButtonClickTesting", &UScreenOverlay::execButtonClickTesting },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UScreenOverlay_ButtonClickTesting_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScreenOverlay_ButtonClickTesting_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/ScreenOverlay.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UScreenOverlay_ButtonClickTesting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScreenOverlay, nullptr, "ButtonClickTesting", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScreenOverlay_ButtonClickTesting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScreenOverlay_ButtonClickTesting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScreenOverlay_ButtonClickTesting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UScreenOverlay_ButtonClickTesting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UScreenOverlay_NoRegister()
	{
		return UScreenOverlay::StaticClass();
	}
	struct Z_Construct_UClass_UScreenOverlay_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartRoundButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StartRoundButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LivesWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LivesWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoneyWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MoneyWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UScreenOverlay_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_TowerDefense,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UScreenOverlay_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UScreenOverlay_ButtonClickTesting, "ButtonClickTesting" }, // 1652565043
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScreenOverlay_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/ScreenOverlay.h" },
		{ "ModuleRelativePath", "UI/ScreenOverlay.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScreenOverlay_Statics::NewProp_StartRoundButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ScreenOverlay" },
		{ "Comment", "/** All variables below this point! */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/ScreenOverlay.h" },
		{ "ToolTip", "All variables below this point!" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UScreenOverlay_Statics::NewProp_StartRoundButton = { "StartRoundButton", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UScreenOverlay, StartRoundButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UScreenOverlay_Statics::NewProp_StartRoundButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScreenOverlay_Statics::NewProp_StartRoundButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScreenOverlay_Statics::NewProp_LivesWidget_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ScreenOverlay" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/ScreenOverlay.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UScreenOverlay_Statics::NewProp_LivesWidget = { "LivesWidget", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UScreenOverlay, LivesWidget), Z_Construct_UClass_ULives_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UScreenOverlay_Statics::NewProp_LivesWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScreenOverlay_Statics::NewProp_LivesWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScreenOverlay_Statics::NewProp_MoneyWidget_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ScreenOverlay" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/ScreenOverlay.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UScreenOverlay_Statics::NewProp_MoneyWidget = { "MoneyWidget", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UScreenOverlay, MoneyWidget), Z_Construct_UClass_UMoney_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UScreenOverlay_Statics::NewProp_MoneyWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScreenOverlay_Statics::NewProp_MoneyWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UScreenOverlay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScreenOverlay_Statics::NewProp_StartRoundButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScreenOverlay_Statics::NewProp_LivesWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScreenOverlay_Statics::NewProp_MoneyWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UScreenOverlay_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UScreenOverlay>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UScreenOverlay_Statics::ClassParams = {
		&UScreenOverlay::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UScreenOverlay_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UScreenOverlay_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UScreenOverlay_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UScreenOverlay_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UScreenOverlay()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UScreenOverlay_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UScreenOverlay, 2085394981);
	template<> TOWERDEFENSE_API UClass* StaticClass<UScreenOverlay>()
	{
		return UScreenOverlay::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UScreenOverlay(Z_Construct_UClass_UScreenOverlay, &UScreenOverlay::StaticClass, TEXT("/Script/TowerDefense"), TEXT("UScreenOverlay"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UScreenOverlay);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
