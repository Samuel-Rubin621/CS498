// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TowerDefense/UI/PurchasePanel.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePurchasePanel() {}
// Cross Module References
	TOWERDEFENSE_API UClass* Z_Construct_UClass_UPurchasePanel_NoRegister();
	TOWERDEFENSE_API UClass* Z_Construct_UClass_UPurchasePanel();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_TowerDefense();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
	TOWERDEFENSE_API UClass* Z_Construct_UClass_ATowerDefenseGameMode_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	TOWERDEFENSE_API UClass* Z_Construct_UClass_ADefaultTower_NoRegister();
	TOWERDEFENSE_API UClass* Z_Construct_UClass_ADefaultGridTile_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UPurchasePanel::execTowerSelected)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TowerSelected();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPurchasePanel::execTurretSelected)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TurretSelected();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPurchasePanel::execCatapultSelected)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CatapultSelected();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPurchasePanel::execCannonSelected)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CannonSelected();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPurchasePanel::execBallistaSelected)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BallistaSelected();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPurchasePanel::execCloseMenuButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CloseMenuButtonClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPurchasePanel::execPurchaseButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PurchaseButtonClicked();
		P_NATIVE_END;
	}
	void UPurchasePanel::StaticRegisterNativesUPurchasePanel()
	{
		UClass* Class = UPurchasePanel::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BallistaSelected", &UPurchasePanel::execBallistaSelected },
			{ "CannonSelected", &UPurchasePanel::execCannonSelected },
			{ "CatapultSelected", &UPurchasePanel::execCatapultSelected },
			{ "CloseMenuButtonClicked", &UPurchasePanel::execCloseMenuButtonClicked },
			{ "PurchaseButtonClicked", &UPurchasePanel::execPurchaseButtonClicked },
			{ "TowerSelected", &UPurchasePanel::execTowerSelected },
			{ "TurretSelected", &UPurchasePanel::execTurretSelected },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPurchasePanel_BallistaSelected_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPurchasePanel_BallistaSelected_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Function delegates for selecting a tower\n" },
		{ "ModuleRelativePath", "UI/PurchasePanel.h" },
		{ "ToolTip", "Function delegates for selecting a tower" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPurchasePanel_BallistaSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPurchasePanel, nullptr, "BallistaSelected", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPurchasePanel_BallistaSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPurchasePanel_BallistaSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPurchasePanel_BallistaSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPurchasePanel_BallistaSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPurchasePanel_CannonSelected_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPurchasePanel_CannonSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/PurchasePanel.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPurchasePanel_CannonSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPurchasePanel, nullptr, "CannonSelected", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPurchasePanel_CannonSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPurchasePanel_CannonSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPurchasePanel_CannonSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPurchasePanel_CannonSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPurchasePanel_CatapultSelected_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPurchasePanel_CatapultSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/PurchasePanel.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPurchasePanel_CatapultSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPurchasePanel, nullptr, "CatapultSelected", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPurchasePanel_CatapultSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPurchasePanel_CatapultSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPurchasePanel_CatapultSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPurchasePanel_CatapultSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPurchasePanel_CloseMenuButtonClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPurchasePanel_CloseMenuButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/PurchasePanel.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPurchasePanel_CloseMenuButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPurchasePanel, nullptr, "CloseMenuButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPurchasePanel_CloseMenuButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPurchasePanel_CloseMenuButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPurchasePanel_CloseMenuButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPurchasePanel_CloseMenuButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPurchasePanel_PurchaseButtonClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPurchasePanel_PurchaseButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Function delegates for pressing a button on the widget\n" },
		{ "ModuleRelativePath", "UI/PurchasePanel.h" },
		{ "ToolTip", "Function delegates for pressing a button on the widget" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPurchasePanel_PurchaseButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPurchasePanel, nullptr, "PurchaseButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPurchasePanel_PurchaseButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPurchasePanel_PurchaseButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPurchasePanel_PurchaseButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPurchasePanel_PurchaseButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPurchasePanel_TowerSelected_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPurchasePanel_TowerSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/PurchasePanel.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPurchasePanel_TowerSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPurchasePanel, nullptr, "TowerSelected", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPurchasePanel_TowerSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPurchasePanel_TowerSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPurchasePanel_TowerSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPurchasePanel_TowerSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPurchasePanel_TurretSelected_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPurchasePanel_TurretSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/PurchasePanel.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPurchasePanel_TurretSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPurchasePanel, nullptr, "TurretSelected", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPurchasePanel_TurretSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPurchasePanel_TurretSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPurchasePanel_TurretSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPurchasePanel_TurretSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPurchasePanel_NoRegister()
	{
		return UPurchasePanel::StaticClass();
	}
	struct Z_Construct_UClass_UPurchasePanel_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PurchaseButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PurchaseButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CloseMenuButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CloseMenuButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BallistaButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BallistaButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CannonButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CannonButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CatapultButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CatapultButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TurretButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TurretButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireChanceText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FireChanceText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireRateText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FireRateText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RangeText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RangeText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageProgressBar_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageProgressBar;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireChanceProgressBar_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FireChanceProgressBar;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireRateProgressBar_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FireRateProgressBar;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RangeProgressBar_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RangeProgressBar;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GameMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectedTower_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SelectedTower;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_TowerClasses_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TowerClasses_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TowerClasses;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectedTile_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SelectedTile;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPurchasePanel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_TowerDefense,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPurchasePanel_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPurchasePanel_BallistaSelected, "BallistaSelected" }, // 1889705074
		{ &Z_Construct_UFunction_UPurchasePanel_CannonSelected, "CannonSelected" }, // 3044400301
		{ &Z_Construct_UFunction_UPurchasePanel_CatapultSelected, "CatapultSelected" }, // 2711303974
		{ &Z_Construct_UFunction_UPurchasePanel_CloseMenuButtonClicked, "CloseMenuButtonClicked" }, // 46785260
		{ &Z_Construct_UFunction_UPurchasePanel_PurchaseButtonClicked, "PurchaseButtonClicked" }, // 1874472965
		{ &Z_Construct_UFunction_UPurchasePanel_TowerSelected, "TowerSelected" }, // 3810709028
		{ &Z_Construct_UFunction_UPurchasePanel_TurretSelected, "TurretSelected" }, // 1860126380
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPurchasePanel_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/PurchasePanel.h" },
		{ "ModuleRelativePath", "UI/PurchasePanel.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPurchasePanel_Statics::NewProp_PurchaseButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PurchasePanel" },
		{ "Comment", "/***** Only variables declared beyond this point! *****/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/PurchasePanel.h" },
		{ "ToolTip", "** Only variables declared beyond this point! ****" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPurchasePanel_Statics::NewProp_PurchaseButton = { "PurchaseButton", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPurchasePanel, PurchaseButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPurchasePanel_Statics::NewProp_PurchaseButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPurchasePanel_Statics::NewProp_PurchaseButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPurchasePanel_Statics::NewProp_CloseMenuButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PurchasePanel" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/PurchasePanel.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPurchasePanel_Statics::NewProp_CloseMenuButton = { "CloseMenuButton", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPurchasePanel, CloseMenuButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPurchasePanel_Statics::NewProp_CloseMenuButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPurchasePanel_Statics::NewProp_CloseMenuButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPurchasePanel_Statics::NewProp_BallistaButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PurchasePanel" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/PurchasePanel.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPurchasePanel_Statics::NewProp_BallistaButton = { "BallistaButton", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPurchasePanel, BallistaButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPurchasePanel_Statics::NewProp_BallistaButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPurchasePanel_Statics::NewProp_BallistaButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPurchasePanel_Statics::NewProp_CannonButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PurchasePanel" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/PurchasePanel.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPurchasePanel_Statics::NewProp_CannonButton = { "CannonButton", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPurchasePanel, CannonButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPurchasePanel_Statics::NewProp_CannonButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPurchasePanel_Statics::NewProp_CannonButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPurchasePanel_Statics::NewProp_CatapultButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PurchasePanel" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/PurchasePanel.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPurchasePanel_Statics::NewProp_CatapultButton = { "CatapultButton", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPurchasePanel, CatapultButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPurchasePanel_Statics::NewProp_CatapultButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPurchasePanel_Statics::NewProp_CatapultButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPurchasePanel_Statics::NewProp_TurretButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PurchasePanel" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/PurchasePanel.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPurchasePanel_Statics::NewProp_TurretButton = { "TurretButton", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPurchasePanel, TurretButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPurchasePanel_Statics::NewProp_TurretButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPurchasePanel_Statics::NewProp_TurretButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPurchasePanel_Statics::NewProp_DamageText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PurchasePanel" },
		{ "Comment", "// Text blocks displaying the tower information\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/PurchasePanel.h" },
		{ "ToolTip", "Text blocks displaying the tower information" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPurchasePanel_Statics::NewProp_DamageText = { "DamageText", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPurchasePanel, DamageText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPurchasePanel_Statics::NewProp_DamageText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPurchasePanel_Statics::NewProp_DamageText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPurchasePanel_Statics::NewProp_FireChanceText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PurchasePanel" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/PurchasePanel.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPurchasePanel_Statics::NewProp_FireChanceText = { "FireChanceText", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPurchasePanel, FireChanceText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPurchasePanel_Statics::NewProp_FireChanceText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPurchasePanel_Statics::NewProp_FireChanceText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPurchasePanel_Statics::NewProp_FireRateText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PurchasePanel" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/PurchasePanel.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPurchasePanel_Statics::NewProp_FireRateText = { "FireRateText", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPurchasePanel, FireRateText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPurchasePanel_Statics::NewProp_FireRateText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPurchasePanel_Statics::NewProp_FireRateText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPurchasePanel_Statics::NewProp_RangeText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PurchasePanel" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/PurchasePanel.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPurchasePanel_Statics::NewProp_RangeText = { "RangeText", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPurchasePanel, RangeText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPurchasePanel_Statics::NewProp_RangeText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPurchasePanel_Statics::NewProp_RangeText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPurchasePanel_Statics::NewProp_DamageProgressBar_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PurchasePanel" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/PurchasePanel.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPurchasePanel_Statics::NewProp_DamageProgressBar = { "DamageProgressBar", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPurchasePanel, DamageProgressBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPurchasePanel_Statics::NewProp_DamageProgressBar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPurchasePanel_Statics::NewProp_DamageProgressBar_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPurchasePanel_Statics::NewProp_FireChanceProgressBar_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PurchasePanel" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/PurchasePanel.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPurchasePanel_Statics::NewProp_FireChanceProgressBar = { "FireChanceProgressBar", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPurchasePanel, FireChanceProgressBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPurchasePanel_Statics::NewProp_FireChanceProgressBar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPurchasePanel_Statics::NewProp_FireChanceProgressBar_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPurchasePanel_Statics::NewProp_FireRateProgressBar_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PurchasePanel" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/PurchasePanel.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPurchasePanel_Statics::NewProp_FireRateProgressBar = { "FireRateProgressBar", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPurchasePanel, FireRateProgressBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPurchasePanel_Statics::NewProp_FireRateProgressBar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPurchasePanel_Statics::NewProp_FireRateProgressBar_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPurchasePanel_Statics::NewProp_RangeProgressBar_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PurchasePanel" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/PurchasePanel.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPurchasePanel_Statics::NewProp_RangeProgressBar = { "RangeProgressBar", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPurchasePanel, RangeProgressBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPurchasePanel_Statics::NewProp_RangeProgressBar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPurchasePanel_Statics::NewProp_RangeProgressBar_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPurchasePanel_Statics::NewProp_GameMode_MetaData[] = {
		{ "Category", "References" },
		{ "ModuleRelativePath", "UI/PurchasePanel.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPurchasePanel_Statics::NewProp_GameMode = { "GameMode", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPurchasePanel, GameMode), Z_Construct_UClass_ATowerDefenseGameMode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPurchasePanel_Statics::NewProp_GameMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPurchasePanel_Statics::NewProp_GameMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPurchasePanel_Statics::NewProp_SelectedTower_MetaData[] = {
		{ "Category", "References" },
		{ "ModuleRelativePath", "UI/PurchasePanel.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UPurchasePanel_Statics::NewProp_SelectedTower = { "SelectedTower", nullptr, (EPropertyFlags)0x0014000000020005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPurchasePanel, SelectedTower), Z_Construct_UClass_ADefaultTower_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UPurchasePanel_Statics::NewProp_SelectedTower_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPurchasePanel_Statics::NewProp_SelectedTower_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UPurchasePanel_Statics::NewProp_TowerClasses_Inner = { "TowerClasses", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ADefaultTower_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPurchasePanel_Statics::NewProp_TowerClasses_MetaData[] = {
		{ "Category", "References" },
		{ "ModuleRelativePath", "UI/PurchasePanel.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPurchasePanel_Statics::NewProp_TowerClasses = { "TowerClasses", nullptr, (EPropertyFlags)0x0014000000010015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPurchasePanel, TowerClasses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPurchasePanel_Statics::NewProp_TowerClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPurchasePanel_Statics::NewProp_TowerClasses_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPurchasePanel_Statics::NewProp_SelectedTile_MetaData[] = {
		{ "Category", "References" },
		{ "ModuleRelativePath", "UI/PurchasePanel.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPurchasePanel_Statics::NewProp_SelectedTile = { "SelectedTile", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPurchasePanel, SelectedTile), Z_Construct_UClass_ADefaultGridTile_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPurchasePanel_Statics::NewProp_SelectedTile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPurchasePanel_Statics::NewProp_SelectedTile_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPurchasePanel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPurchasePanel_Statics::NewProp_PurchaseButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPurchasePanel_Statics::NewProp_CloseMenuButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPurchasePanel_Statics::NewProp_BallistaButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPurchasePanel_Statics::NewProp_CannonButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPurchasePanel_Statics::NewProp_CatapultButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPurchasePanel_Statics::NewProp_TurretButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPurchasePanel_Statics::NewProp_DamageText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPurchasePanel_Statics::NewProp_FireChanceText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPurchasePanel_Statics::NewProp_FireRateText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPurchasePanel_Statics::NewProp_RangeText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPurchasePanel_Statics::NewProp_DamageProgressBar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPurchasePanel_Statics::NewProp_FireChanceProgressBar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPurchasePanel_Statics::NewProp_FireRateProgressBar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPurchasePanel_Statics::NewProp_RangeProgressBar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPurchasePanel_Statics::NewProp_GameMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPurchasePanel_Statics::NewProp_SelectedTower,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPurchasePanel_Statics::NewProp_TowerClasses_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPurchasePanel_Statics::NewProp_TowerClasses,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPurchasePanel_Statics::NewProp_SelectedTile,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPurchasePanel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPurchasePanel>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPurchasePanel_Statics::ClassParams = {
		&UPurchasePanel::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPurchasePanel_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPurchasePanel_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPurchasePanel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPurchasePanel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPurchasePanel()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPurchasePanel_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPurchasePanel, 3068171243);
	template<> TOWERDEFENSE_API UClass* StaticClass<UPurchasePanel>()
	{
		return UPurchasePanel::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPurchasePanel(Z_Construct_UClass_UPurchasePanel, &UPurchasePanel::StaticClass, TEXT("/Script/TowerDefense"), TEXT("UPurchasePanel"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPurchasePanel);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
