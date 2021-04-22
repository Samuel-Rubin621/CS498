// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TowerDefense/UI/TowerPanel.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTowerPanel() {}
// Cross Module References
	TOWERDEFENSE_API UClass* Z_Construct_UClass_UTowerPanel_NoRegister();
	TOWERDEFENSE_API UClass* Z_Construct_UClass_UTowerPanel();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_TowerDefense();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UComboBoxString_NoRegister();
	TOWERDEFENSE_API UClass* Z_Construct_UClass_ATowerDefenseGameMode_NoRegister();
	TOWERDEFENSE_API UClass* Z_Construct_UClass_ADefaultTower_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UTowerPanel::execCloseMenuButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CloseMenuButtonClicked();
		P_NATIVE_END;
	}
	void UTowerPanel::StaticRegisterNativesUTowerPanel()
	{
		UClass* Class = UTowerPanel::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CloseMenuButtonClicked", &UTowerPanel::execCloseMenuButtonClicked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTowerPanel_CloseMenuButtonClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTowerPanel_CloseMenuButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Function delegates for pressing a button on the widget\n" },
		{ "ModuleRelativePath", "UI/TowerPanel.h" },
		{ "ToolTip", "Function delegates for pressing a button on the widget" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTowerPanel_CloseMenuButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTowerPanel, nullptr, "CloseMenuButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTowerPanel_CloseMenuButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTowerPanel_CloseMenuButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTowerPanel_CloseMenuButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTowerPanel_CloseMenuButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTowerPanel_NoRegister()
	{
		return UTowerPanel::StaticClass();
	}
	struct Z_Construct_UClass_UTowerPanel_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CloseMenuButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CloseMenuButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RangeText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RangeText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireRateText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FireRateText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireDamageText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FireDamageText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TowerImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TowerImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BallistaImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BallistaImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CannonImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CannonImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CatapultImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CatapultImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TurretImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TurretImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetingTypeSelection_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetingTypeSelection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GameMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectedTower_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SelectedTower;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTowerPanel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_TowerDefense,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTowerPanel_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTowerPanel_CloseMenuButtonClicked, "CloseMenuButtonClicked" }, // 2941571367
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTowerPanel_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/TowerPanel.h" },
		{ "ModuleRelativePath", "UI/TowerPanel.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTowerPanel_Statics::NewProp_CloseMenuButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "TowerPanel" },
		{ "Comment", "/***** Only variables declared beyond this point! *****/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/TowerPanel.h" },
		{ "ToolTip", "** Only variables declared beyond this point! ****" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTowerPanel_Statics::NewProp_CloseMenuButton = { "CloseMenuButton", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTowerPanel, CloseMenuButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTowerPanel_Statics::NewProp_CloseMenuButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTowerPanel_Statics::NewProp_CloseMenuButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTowerPanel_Statics::NewProp_DamageText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "TowerPanel" },
		{ "Comment", "// Text blocks displaying the tower information\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/TowerPanel.h" },
		{ "ToolTip", "Text blocks displaying the tower information" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTowerPanel_Statics::NewProp_DamageText = { "DamageText", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTowerPanel, DamageText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTowerPanel_Statics::NewProp_DamageText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTowerPanel_Statics::NewProp_DamageText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTowerPanel_Statics::NewProp_RangeText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "TowerPanel" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/TowerPanel.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTowerPanel_Statics::NewProp_RangeText = { "RangeText", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTowerPanel, RangeText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTowerPanel_Statics::NewProp_RangeText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTowerPanel_Statics::NewProp_RangeText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTowerPanel_Statics::NewProp_FireRateText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "TowerPanel" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/TowerPanel.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTowerPanel_Statics::NewProp_FireRateText = { "FireRateText", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTowerPanel, FireRateText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTowerPanel_Statics::NewProp_FireRateText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTowerPanel_Statics::NewProp_FireRateText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTowerPanel_Statics::NewProp_FireDamageText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "TowerPanel" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/TowerPanel.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTowerPanel_Statics::NewProp_FireDamageText = { "FireDamageText", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTowerPanel, FireDamageText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTowerPanel_Statics::NewProp_FireDamageText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTowerPanel_Statics::NewProp_FireDamageText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTowerPanel_Statics::NewProp_TowerImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "TowerPanel" },
		{ "Comment", "// Image variables\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/TowerPanel.h" },
		{ "ToolTip", "Image variables" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTowerPanel_Statics::NewProp_TowerImage = { "TowerImage", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTowerPanel, TowerImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTowerPanel_Statics::NewProp_TowerImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTowerPanel_Statics::NewProp_TowerImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTowerPanel_Statics::NewProp_BallistaImage_MetaData[] = {
		{ "Category", "TowerPanel" },
		{ "ModuleRelativePath", "UI/TowerPanel.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTowerPanel_Statics::NewProp_BallistaImage = { "BallistaImage", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTowerPanel, BallistaImage), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTowerPanel_Statics::NewProp_BallistaImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTowerPanel_Statics::NewProp_BallistaImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTowerPanel_Statics::NewProp_CannonImage_MetaData[] = {
		{ "Category", "TowerPanel" },
		{ "ModuleRelativePath", "UI/TowerPanel.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTowerPanel_Statics::NewProp_CannonImage = { "CannonImage", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTowerPanel, CannonImage), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTowerPanel_Statics::NewProp_CannonImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTowerPanel_Statics::NewProp_CannonImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTowerPanel_Statics::NewProp_CatapultImage_MetaData[] = {
		{ "Category", "TowerPanel" },
		{ "ModuleRelativePath", "UI/TowerPanel.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTowerPanel_Statics::NewProp_CatapultImage = { "CatapultImage", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTowerPanel, CatapultImage), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTowerPanel_Statics::NewProp_CatapultImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTowerPanel_Statics::NewProp_CatapultImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTowerPanel_Statics::NewProp_TurretImage_MetaData[] = {
		{ "Category", "TowerPanel" },
		{ "ModuleRelativePath", "UI/TowerPanel.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTowerPanel_Statics::NewProp_TurretImage = { "TurretImage", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTowerPanel, TurretImage), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTowerPanel_Statics::NewProp_TurretImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTowerPanel_Statics::NewProp_TurretImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTowerPanel_Statics::NewProp_TargetingTypeSelection_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "TowerPanel" },
		{ "Comment", "// Dropdown list for changing the targeting type of the tower\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/TowerPanel.h" },
		{ "ToolTip", "Dropdown list for changing the targeting type of the tower" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTowerPanel_Statics::NewProp_TargetingTypeSelection = { "TargetingTypeSelection", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTowerPanel, TargetingTypeSelection), Z_Construct_UClass_UComboBoxString_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTowerPanel_Statics::NewProp_TargetingTypeSelection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTowerPanel_Statics::NewProp_TargetingTypeSelection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTowerPanel_Statics::NewProp_GameMode_MetaData[] = {
		{ "Category", "References" },
		{ "ModuleRelativePath", "UI/TowerPanel.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTowerPanel_Statics::NewProp_GameMode = { "GameMode", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTowerPanel, GameMode), Z_Construct_UClass_ATowerDefenseGameMode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTowerPanel_Statics::NewProp_GameMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTowerPanel_Statics::NewProp_GameMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTowerPanel_Statics::NewProp_SelectedTower_MetaData[] = {
		{ "Category", "References" },
		{ "ModuleRelativePath", "UI/TowerPanel.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTowerPanel_Statics::NewProp_SelectedTower = { "SelectedTower", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTowerPanel, SelectedTower), Z_Construct_UClass_ADefaultTower_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTowerPanel_Statics::NewProp_SelectedTower_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTowerPanel_Statics::NewProp_SelectedTower_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTowerPanel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTowerPanel_Statics::NewProp_CloseMenuButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTowerPanel_Statics::NewProp_DamageText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTowerPanel_Statics::NewProp_RangeText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTowerPanel_Statics::NewProp_FireRateText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTowerPanel_Statics::NewProp_FireDamageText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTowerPanel_Statics::NewProp_TowerImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTowerPanel_Statics::NewProp_BallistaImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTowerPanel_Statics::NewProp_CannonImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTowerPanel_Statics::NewProp_CatapultImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTowerPanel_Statics::NewProp_TurretImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTowerPanel_Statics::NewProp_TargetingTypeSelection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTowerPanel_Statics::NewProp_GameMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTowerPanel_Statics::NewProp_SelectedTower,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTowerPanel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTowerPanel>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTowerPanel_Statics::ClassParams = {
		&UTowerPanel::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTowerPanel_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTowerPanel_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTowerPanel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTowerPanel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTowerPanel()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTowerPanel_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTowerPanel, 2678503733);
	template<> TOWERDEFENSE_API UClass* StaticClass<UTowerPanel>()
	{
		return UTowerPanel::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTowerPanel(Z_Construct_UClass_UTowerPanel, &UTowerPanel::StaticClass, TEXT("/Script/TowerDefense"), TEXT("UTowerPanel"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTowerPanel);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
