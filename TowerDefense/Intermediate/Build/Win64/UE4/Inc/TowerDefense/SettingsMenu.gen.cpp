// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TowerDefense/UI/SettingsMenu.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSettingsMenu() {}
// Cross Module References
	TOWERDEFENSE_API UClass* Z_Construct_UClass_USettingsMenu_NoRegister();
	TOWERDEFENSE_API UClass* Z_Construct_UClass_USettingsMenu();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_TowerDefense();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ESelectInfo();
	UMG_API UClass* Z_Construct_UClass_UComboBoxString_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
	UMG_API UClass* Z_Construct_UClass_USlider_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundClass_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundMix_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USettingsMenu::execOnSFXVolumeChanged)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSFXVolumeChanged(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USettingsMenu::execOnMusicVolumeChanged)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMusicVolumeChanged(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USettingsMenu::execOnScreenResolutionChanged)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ScreenResolution);
		P_GET_PROPERTY(FByteProperty,Z_Param_SelectionType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnScreenResolutionChanged(Z_Param_ScreenResolution,ESelectInfo::Type(Z_Param_SelectionType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USettingsMenu::execOnMainMenuButtonPressed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMainMenuButtonPressed();
		P_NATIVE_END;
	}
	void USettingsMenu::StaticRegisterNativesUSettingsMenu()
	{
		UClass* Class = USettingsMenu::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnMainMenuButtonPressed", &USettingsMenu::execOnMainMenuButtonPressed },
			{ "OnMusicVolumeChanged", &USettingsMenu::execOnMusicVolumeChanged },
			{ "OnScreenResolutionChanged", &USettingsMenu::execOnScreenResolutionChanged },
			{ "OnSFXVolumeChanged", &USettingsMenu::execOnSFXVolumeChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USettingsMenu_OnMainMenuButtonPressed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USettingsMenu_OnMainMenuButtonPressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/SettingsMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USettingsMenu_OnMainMenuButtonPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USettingsMenu, nullptr, "OnMainMenuButtonPressed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USettingsMenu_OnMainMenuButtonPressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsMenu_OnMainMenuButtonPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USettingsMenu_OnMainMenuButtonPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USettingsMenu_OnMainMenuButtonPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USettingsMenu_OnMusicVolumeChanged_Statics
	{
		struct SettingsMenu_eventOnMusicVolumeChanged_Parms
		{
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USettingsMenu_OnMusicVolumeChanged_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SettingsMenu_eventOnMusicVolumeChanged_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USettingsMenu_OnMusicVolumeChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingsMenu_OnMusicVolumeChanged_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USettingsMenu_OnMusicVolumeChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/SettingsMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USettingsMenu_OnMusicVolumeChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USettingsMenu, nullptr, "OnMusicVolumeChanged", nullptr, nullptr, sizeof(SettingsMenu_eventOnMusicVolumeChanged_Parms), Z_Construct_UFunction_USettingsMenu_OnMusicVolumeChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsMenu_OnMusicVolumeChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USettingsMenu_OnMusicVolumeChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsMenu_OnMusicVolumeChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USettingsMenu_OnMusicVolumeChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USettingsMenu_OnMusicVolumeChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USettingsMenu_OnScreenResolutionChanged_Statics
	{
		struct SettingsMenu_eventOnScreenResolutionChanged_Parms
		{
			FString ScreenResolution;
			TEnumAsByte<ESelectInfo::Type> SelectionType;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ScreenResolution;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SelectionType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USettingsMenu_OnScreenResolutionChanged_Statics::NewProp_ScreenResolution = { "ScreenResolution", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SettingsMenu_eventOnScreenResolutionChanged_Parms, ScreenResolution), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USettingsMenu_OnScreenResolutionChanged_Statics::NewProp_SelectionType = { "SelectionType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SettingsMenu_eventOnScreenResolutionChanged_Parms, SelectionType), Z_Construct_UEnum_SlateCore_ESelectInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USettingsMenu_OnScreenResolutionChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingsMenu_OnScreenResolutionChanged_Statics::NewProp_ScreenResolution,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingsMenu_OnScreenResolutionChanged_Statics::NewProp_SelectionType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USettingsMenu_OnScreenResolutionChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/SettingsMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USettingsMenu_OnScreenResolutionChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USettingsMenu, nullptr, "OnScreenResolutionChanged", nullptr, nullptr, sizeof(SettingsMenu_eventOnScreenResolutionChanged_Parms), Z_Construct_UFunction_USettingsMenu_OnScreenResolutionChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsMenu_OnScreenResolutionChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USettingsMenu_OnScreenResolutionChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsMenu_OnScreenResolutionChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USettingsMenu_OnScreenResolutionChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USettingsMenu_OnScreenResolutionChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USettingsMenu_OnSFXVolumeChanged_Statics
	{
		struct SettingsMenu_eventOnSFXVolumeChanged_Parms
		{
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USettingsMenu_OnSFXVolumeChanged_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SettingsMenu_eventOnSFXVolumeChanged_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USettingsMenu_OnSFXVolumeChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingsMenu_OnSFXVolumeChanged_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USettingsMenu_OnSFXVolumeChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/SettingsMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USettingsMenu_OnSFXVolumeChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USettingsMenu, nullptr, "OnSFXVolumeChanged", nullptr, nullptr, sizeof(SettingsMenu_eventOnSFXVolumeChanged_Parms), Z_Construct_UFunction_USettingsMenu_OnSFXVolumeChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsMenu_OnSFXVolumeChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USettingsMenu_OnSFXVolumeChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsMenu_OnSFXVolumeChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USettingsMenu_OnSFXVolumeChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USettingsMenu_OnSFXVolumeChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USettingsMenu_NoRegister()
	{
		return USettingsMenu::StaticClass();
	}
	struct Z_Construct_UClass_USettingsMenu_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScreenResolutionDropDown_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ScreenResolutionDropDown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MainMenuButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MainMenuButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PB_Music_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PB_Music;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PB_SFX_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PB_SFX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Slider_Music_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Slider_Music;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Slider_SFX_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Slider_SFX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SC_Music_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SC_Music;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SC_SFX_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SC_SFX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SM_Music_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SM_Music;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SM_SFX_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SM_SFX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MainMenuWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_MainMenuWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USettingsMenu_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_TowerDefense,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USettingsMenu_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USettingsMenu_OnMainMenuButtonPressed, "OnMainMenuButtonPressed" }, // 177426004
		{ &Z_Construct_UFunction_USettingsMenu_OnMusicVolumeChanged, "OnMusicVolumeChanged" }, // 2311389966
		{ &Z_Construct_UFunction_USettingsMenu_OnScreenResolutionChanged, "OnScreenResolutionChanged" }, // 3354556423
		{ &Z_Construct_UFunction_USettingsMenu_OnSFXVolumeChanged, "OnSFXVolumeChanged" }, // 3836058667
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USettingsMenu_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/SettingsMenu.h" },
		{ "ModuleRelativePath", "UI/SettingsMenu.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USettingsMenu_Statics::NewProp_ScreenResolutionDropDown_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "SettingsMenu" },
		{ "Comment", "/***** Only variables declared beyond this point! *****/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/SettingsMenu.h" },
		{ "ToolTip", "** Only variables declared beyond this point! ****" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USettingsMenu_Statics::NewProp_ScreenResolutionDropDown = { "ScreenResolutionDropDown", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USettingsMenu, ScreenResolutionDropDown), Z_Construct_UClass_UComboBoxString_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USettingsMenu_Statics::NewProp_ScreenResolutionDropDown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USettingsMenu_Statics::NewProp_ScreenResolutionDropDown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USettingsMenu_Statics::NewProp_MainMenuButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "SettingsMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/SettingsMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USettingsMenu_Statics::NewProp_MainMenuButton = { "MainMenuButton", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USettingsMenu, MainMenuButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USettingsMenu_Statics::NewProp_MainMenuButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USettingsMenu_Statics::NewProp_MainMenuButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USettingsMenu_Statics::NewProp_PB_Music_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "SettingsMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/SettingsMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USettingsMenu_Statics::NewProp_PB_Music = { "PB_Music", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USettingsMenu, PB_Music), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USettingsMenu_Statics::NewProp_PB_Music_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USettingsMenu_Statics::NewProp_PB_Music_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USettingsMenu_Statics::NewProp_PB_SFX_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "SettingsMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/SettingsMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USettingsMenu_Statics::NewProp_PB_SFX = { "PB_SFX", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USettingsMenu, PB_SFX), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USettingsMenu_Statics::NewProp_PB_SFX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USettingsMenu_Statics::NewProp_PB_SFX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USettingsMenu_Statics::NewProp_Slider_Music_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "SettingsMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/SettingsMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USettingsMenu_Statics::NewProp_Slider_Music = { "Slider_Music", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USettingsMenu, Slider_Music), Z_Construct_UClass_USlider_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USettingsMenu_Statics::NewProp_Slider_Music_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USettingsMenu_Statics::NewProp_Slider_Music_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USettingsMenu_Statics::NewProp_Slider_SFX_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "SettingsMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/SettingsMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USettingsMenu_Statics::NewProp_Slider_SFX = { "Slider_SFX", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USettingsMenu, Slider_SFX), Z_Construct_UClass_USlider_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USettingsMenu_Statics::NewProp_Slider_SFX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USettingsMenu_Statics::NewProp_Slider_SFX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USettingsMenu_Statics::NewProp_SC_Music_MetaData[] = {
		{ "Category", "SettingsMenu" },
		{ "ModuleRelativePath", "UI/SettingsMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USettingsMenu_Statics::NewProp_SC_Music = { "SC_Music", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USettingsMenu, SC_Music), Z_Construct_UClass_USoundClass_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USettingsMenu_Statics::NewProp_SC_Music_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USettingsMenu_Statics::NewProp_SC_Music_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USettingsMenu_Statics::NewProp_SC_SFX_MetaData[] = {
		{ "Category", "SettingsMenu" },
		{ "ModuleRelativePath", "UI/SettingsMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USettingsMenu_Statics::NewProp_SC_SFX = { "SC_SFX", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USettingsMenu, SC_SFX), Z_Construct_UClass_USoundClass_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USettingsMenu_Statics::NewProp_SC_SFX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USettingsMenu_Statics::NewProp_SC_SFX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USettingsMenu_Statics::NewProp_SM_Music_MetaData[] = {
		{ "Category", "SettingsMenu" },
		{ "ModuleRelativePath", "UI/SettingsMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USettingsMenu_Statics::NewProp_SM_Music = { "SM_Music", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USettingsMenu, SM_Music), Z_Construct_UClass_USoundMix_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USettingsMenu_Statics::NewProp_SM_Music_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USettingsMenu_Statics::NewProp_SM_Music_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USettingsMenu_Statics::NewProp_SM_SFX_MetaData[] = {
		{ "Category", "SettingsMenu" },
		{ "ModuleRelativePath", "UI/SettingsMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USettingsMenu_Statics::NewProp_SM_SFX = { "SM_SFX", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USettingsMenu, SM_SFX), Z_Construct_UClass_USoundMix_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USettingsMenu_Statics::NewProp_SM_SFX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USettingsMenu_Statics::NewProp_SM_SFX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USettingsMenu_Statics::NewProp_MainMenuWidget_MetaData[] = {
		{ "Category", "SettingsMenu" },
		{ "ModuleRelativePath", "UI/SettingsMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USettingsMenu_Statics::NewProp_MainMenuWidget = { "MainMenuWidget", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USettingsMenu, MainMenuWidget), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USettingsMenu_Statics::NewProp_MainMenuWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USettingsMenu_Statics::NewProp_MainMenuWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USettingsMenu_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USettingsMenu_Statics::NewProp_ScreenResolutionDropDown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USettingsMenu_Statics::NewProp_MainMenuButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USettingsMenu_Statics::NewProp_PB_Music,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USettingsMenu_Statics::NewProp_PB_SFX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USettingsMenu_Statics::NewProp_Slider_Music,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USettingsMenu_Statics::NewProp_Slider_SFX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USettingsMenu_Statics::NewProp_SC_Music,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USettingsMenu_Statics::NewProp_SC_SFX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USettingsMenu_Statics::NewProp_SM_Music,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USettingsMenu_Statics::NewProp_SM_SFX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USettingsMenu_Statics::NewProp_MainMenuWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USettingsMenu_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USettingsMenu>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USettingsMenu_Statics::ClassParams = {
		&USettingsMenu::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USettingsMenu_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USettingsMenu_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USettingsMenu_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USettingsMenu_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USettingsMenu()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USettingsMenu_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USettingsMenu, 3382643571);
	template<> TOWERDEFENSE_API UClass* StaticClass<USettingsMenu>()
	{
		return USettingsMenu::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USettingsMenu(Z_Construct_UClass_USettingsMenu, &USettingsMenu::StaticClass, TEXT("/Script/TowerDefense"), TEXT("USettingsMenu"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USettingsMenu);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
