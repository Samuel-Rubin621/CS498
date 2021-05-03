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
	TOWERDEFENSE_API UEnum* Z_Construct_UEnum_TowerDefense_EScreenResolution();
	UPackage* Z_Construct_UPackage__Script_TowerDefense();
	TOWERDEFENSE_API UClass* Z_Construct_UClass_USettingsMenu_NoRegister();
	TOWERDEFENSE_API UClass* Z_Construct_UClass_USettingsMenu();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UMG_API UClass* Z_Construct_UClass_UComboBoxString_NoRegister();
	UMG_API UClass* Z_Construct_UClass_USlider_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
// End Cross Module References
	static UEnum* EScreenResolution_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_TowerDefense_EScreenResolution, Z_Construct_UPackage__Script_TowerDefense(), TEXT("EScreenResolution"));
		}
		return Singleton;
	}
	template<> TOWERDEFENSE_API UEnum* StaticEnum<EScreenResolution>()
	{
		return EScreenResolution_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EScreenResolution(EScreenResolution_StaticEnum, TEXT("/Script/TowerDefense"), TEXT("EScreenResolution"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_TowerDefense_EScreenResolution_Hash() { return 2667019877U; }
	UEnum* Z_Construct_UEnum_TowerDefense_EScreenResolution()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_TowerDefense();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EScreenResolution"), 0, Get_Z_Construct_UEnum_TowerDefense_EScreenResolution_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EScreenResolution::ESR_480", (int64)EScreenResolution::ESR_480 },
				{ "EScreenResolution::ESR_720", (int64)EScreenResolution::ESR_720 },
				{ "EScreenResolution::ESR_1080", (int64)EScreenResolution::ESR_1080 },
				{ "EScreenResolution::ESR_1440", (int64)EScreenResolution::ESR_1440 },
				{ "EScreenResolution::ESR_MAX", (int64)EScreenResolution::ESR_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ESR_1080.DisplayName", "1920x1080" },
				{ "ESR_1080.Name", "EScreenResolution::ESR_1080" },
				{ "ESR_1440.DisplayName", "2560x1440" },
				{ "ESR_1440.Name", "EScreenResolution::ESR_1440" },
				{ "ESR_480.DisplayName", "720x480" },
				{ "ESR_480.Name", "EScreenResolution::ESR_480" },
				{ "ESR_720.DisplayName", "1280x720" },
				{ "ESR_720.Name", "EScreenResolution::ESR_720" },
				{ "ESR_MAX.DisplayName", "DefaultMAX" },
				{ "ESR_MAX.Name", "EScreenResolution::ESR_MAX" },
				{ "ModuleRelativePath", "UI/SettingsMenu.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_TowerDefense,
				nullptr,
				"EScreenResolution",
				"EScreenResolution",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	DEFINE_FUNCTION(USettingsMenu::execSetScreenResolution)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetScreenResolution();
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
			{ "SetScreenResolution", &USettingsMenu::execSetScreenResolution },
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
	struct Z_Construct_UFunction_USettingsMenu_SetScreenResolution_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USettingsMenu_SetScreenResolution_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/SettingsMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USettingsMenu_SetScreenResolution_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USettingsMenu, nullptr, "SetScreenResolution", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USettingsMenu_SetScreenResolution_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsMenu_SetScreenResolution_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USettingsMenu_SetScreenResolution()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USettingsMenu_SetScreenResolution_Statics::FuncParams);
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VolumeSlider_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VolumeSlider;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VolumeBar_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VolumeBar;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MainMenuButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MainMenuButton;
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
		{ &Z_Construct_UFunction_USettingsMenu_SetScreenResolution, "SetScreenResolution" }, // 3301036982
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USettingsMenu_Statics::NewProp_VolumeSlider_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "SettingsMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/SettingsMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USettingsMenu_Statics::NewProp_VolumeSlider = { "VolumeSlider", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USettingsMenu, VolumeSlider), Z_Construct_UClass_USlider_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USettingsMenu_Statics::NewProp_VolumeSlider_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USettingsMenu_Statics::NewProp_VolumeSlider_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USettingsMenu_Statics::NewProp_VolumeBar_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "SettingsMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/SettingsMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USettingsMenu_Statics::NewProp_VolumeBar = { "VolumeBar", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USettingsMenu, VolumeBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USettingsMenu_Statics::NewProp_VolumeBar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USettingsMenu_Statics::NewProp_VolumeBar_MetaData)) };
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USettingsMenu_Statics::NewProp_MainMenuWidget_MetaData[] = {
		{ "Category", "SettingsMenu" },
		{ "ModuleRelativePath", "UI/SettingsMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USettingsMenu_Statics::NewProp_MainMenuWidget = { "MainMenuWidget", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USettingsMenu, MainMenuWidget), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USettingsMenu_Statics::NewProp_MainMenuWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USettingsMenu_Statics::NewProp_MainMenuWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USettingsMenu_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USettingsMenu_Statics::NewProp_ScreenResolutionDropDown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USettingsMenu_Statics::NewProp_VolumeSlider,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USettingsMenu_Statics::NewProp_VolumeBar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USettingsMenu_Statics::NewProp_MainMenuButton,
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
	IMPLEMENT_CLASS(USettingsMenu, 3274009703);
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
