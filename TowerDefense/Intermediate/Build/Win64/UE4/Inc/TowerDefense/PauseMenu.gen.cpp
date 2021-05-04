// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TowerDefense/UI/PauseMenu.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePauseMenu() {}
// Cross Module References
	TOWERDEFENSE_API UClass* Z_Construct_UClass_UPauseMenu_NoRegister();
	TOWERDEFENSE_API UClass* Z_Construct_UClass_UPauseMenu();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_TowerDefense();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UPauseMenu::execOnExitButtonPressed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnExitButtonPressed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPauseMenu::execOnMainMenuButtonPressed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMainMenuButtonPressed();
		P_NATIVE_END;
	}
	void UPauseMenu::StaticRegisterNativesUPauseMenu()
	{
		UClass* Class = UPauseMenu::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnExitButtonPressed", &UPauseMenu::execOnExitButtonPressed },
			{ "OnMainMenuButtonPressed", &UPauseMenu::execOnMainMenuButtonPressed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPauseMenu_OnExitButtonPressed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPauseMenu_OnExitButtonPressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/PauseMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPauseMenu_OnExitButtonPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPauseMenu, nullptr, "OnExitButtonPressed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPauseMenu_OnExitButtonPressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPauseMenu_OnExitButtonPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPauseMenu_OnExitButtonPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPauseMenu_OnExitButtonPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPauseMenu_OnMainMenuButtonPressed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPauseMenu_OnMainMenuButtonPressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/PauseMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPauseMenu_OnMainMenuButtonPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPauseMenu, nullptr, "OnMainMenuButtonPressed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPauseMenu_OnMainMenuButtonPressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPauseMenu_OnMainMenuButtonPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPauseMenu_OnMainMenuButtonPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPauseMenu_OnMainMenuButtonPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPauseMenu_NoRegister()
	{
		return UPauseMenu::StaticClass();
	}
	struct Z_Construct_UClass_UPauseMenu_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MainMenuButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MainMenuButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuitButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_QuitButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SettingsWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SettingsWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPauseMenu_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_TowerDefense,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPauseMenu_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPauseMenu_OnExitButtonPressed, "OnExitButtonPressed" }, // 3030447197
		{ &Z_Construct_UFunction_UPauseMenu_OnMainMenuButtonPressed, "OnMainMenuButtonPressed" }, // 2961391167
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPauseMenu_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/PauseMenu.h" },
		{ "ModuleRelativePath", "UI/PauseMenu.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPauseMenu_Statics::NewProp_MainMenuButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PauseMenu" },
		{ "Comment", "/***** Only variables declared beyond this point! *****/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/PauseMenu.h" },
		{ "ToolTip", "** Only variables declared beyond this point! ****" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPauseMenu_Statics::NewProp_MainMenuButton = { "MainMenuButton", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPauseMenu, MainMenuButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPauseMenu_Statics::NewProp_MainMenuButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPauseMenu_Statics::NewProp_MainMenuButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPauseMenu_Statics::NewProp_QuitButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PauseMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/PauseMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPauseMenu_Statics::NewProp_QuitButton = { "QuitButton", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPauseMenu, QuitButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPauseMenu_Statics::NewProp_QuitButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPauseMenu_Statics::NewProp_QuitButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPauseMenu_Statics::NewProp_SettingsWidget_MetaData[] = {
		{ "Category", "PauseMenu" },
		{ "ModuleRelativePath", "UI/PauseMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UPauseMenu_Statics::NewProp_SettingsWidget = { "SettingsWidget", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPauseMenu, SettingsWidget), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UPauseMenu_Statics::NewProp_SettingsWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPauseMenu_Statics::NewProp_SettingsWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPauseMenu_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPauseMenu_Statics::NewProp_MainMenuButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPauseMenu_Statics::NewProp_QuitButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPauseMenu_Statics::NewProp_SettingsWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPauseMenu_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPauseMenu>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPauseMenu_Statics::ClassParams = {
		&UPauseMenu::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPauseMenu_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPauseMenu_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPauseMenu_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPauseMenu_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPauseMenu()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPauseMenu_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPauseMenu, 4042803645);
	template<> TOWERDEFENSE_API UClass* StaticClass<UPauseMenu>()
	{
		return UPauseMenu::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPauseMenu(Z_Construct_UClass_UPauseMenu, &UPauseMenu::StaticClass, TEXT("/Script/TowerDefense"), TEXT("UPauseMenu"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPauseMenu);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
