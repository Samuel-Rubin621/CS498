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
	UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	TOWERDEFENSE_API UClass* Z_Construct_UClass_ATowerDefenseGameMode_NoRegister();
	TOWERDEFENSE_API UClass* Z_Construct_UClass_ADefaultTower_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UTowerPanel::execSetTargetingWeak)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTargetingWeak();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTowerPanel::execSetTargetingStrong)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTargetingStrong();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTowerPanel::execSetTargetingLast)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTargetingLast();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTowerPanel::execSetTargetingFirst)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTargetingFirst();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTowerPanel::execIncreaseFireRate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->IncreaseFireRate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTowerPanel::execIncreaseRange)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->IncreaseRange();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTowerPanel::execIncreaseFireDamageChance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->IncreaseFireDamageChance();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTowerPanel::execIncreaseDamage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->IncreaseDamage();
		P_NATIVE_END;
	}
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
			{ "IncreaseDamage", &UTowerPanel::execIncreaseDamage },
			{ "IncreaseFireDamageChance", &UTowerPanel::execIncreaseFireDamageChance },
			{ "IncreaseFireRate", &UTowerPanel::execIncreaseFireRate },
			{ "IncreaseRange", &UTowerPanel::execIncreaseRange },
			{ "SetTargetingFirst", &UTowerPanel::execSetTargetingFirst },
			{ "SetTargetingLast", &UTowerPanel::execSetTargetingLast },
			{ "SetTargetingStrong", &UTowerPanel::execSetTargetingStrong },
			{ "SetTargetingWeak", &UTowerPanel::execSetTargetingWeak },
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
	struct Z_Construct_UFunction_UTowerPanel_IncreaseDamage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTowerPanel_IncreaseDamage_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Functions for increasing tower stats\n" },
		{ "ModuleRelativePath", "UI/TowerPanel.h" },
		{ "ToolTip", "Functions for increasing tower stats" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTowerPanel_IncreaseDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTowerPanel, nullptr, "IncreaseDamage", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTowerPanel_IncreaseDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTowerPanel_IncreaseDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTowerPanel_IncreaseDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTowerPanel_IncreaseDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTowerPanel_IncreaseFireDamageChance_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTowerPanel_IncreaseFireDamageChance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/TowerPanel.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTowerPanel_IncreaseFireDamageChance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTowerPanel, nullptr, "IncreaseFireDamageChance", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTowerPanel_IncreaseFireDamageChance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTowerPanel_IncreaseFireDamageChance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTowerPanel_IncreaseFireDamageChance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTowerPanel_IncreaseFireDamageChance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTowerPanel_IncreaseFireRate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTowerPanel_IncreaseFireRate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/TowerPanel.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTowerPanel_IncreaseFireRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTowerPanel, nullptr, "IncreaseFireRate", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTowerPanel_IncreaseFireRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTowerPanel_IncreaseFireRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTowerPanel_IncreaseFireRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTowerPanel_IncreaseFireRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTowerPanel_IncreaseRange_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTowerPanel_IncreaseRange_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/TowerPanel.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTowerPanel_IncreaseRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTowerPanel, nullptr, "IncreaseRange", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTowerPanel_IncreaseRange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTowerPanel_IncreaseRange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTowerPanel_IncreaseRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTowerPanel_IncreaseRange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTowerPanel_SetTargetingFirst_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTowerPanel_SetTargetingFirst_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Functions for setting the tower targeting type and disabling the appropriate button\n" },
		{ "ModuleRelativePath", "UI/TowerPanel.h" },
		{ "ToolTip", "Functions for setting the tower targeting type and disabling the appropriate button" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTowerPanel_SetTargetingFirst_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTowerPanel, nullptr, "SetTargetingFirst", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTowerPanel_SetTargetingFirst_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTowerPanel_SetTargetingFirst_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTowerPanel_SetTargetingFirst()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTowerPanel_SetTargetingFirst_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTowerPanel_SetTargetingLast_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTowerPanel_SetTargetingLast_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/TowerPanel.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTowerPanel_SetTargetingLast_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTowerPanel, nullptr, "SetTargetingLast", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTowerPanel_SetTargetingLast_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTowerPanel_SetTargetingLast_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTowerPanel_SetTargetingLast()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTowerPanel_SetTargetingLast_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTowerPanel_SetTargetingStrong_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTowerPanel_SetTargetingStrong_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/TowerPanel.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTowerPanel_SetTargetingStrong_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTowerPanel, nullptr, "SetTargetingStrong", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTowerPanel_SetTargetingStrong_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTowerPanel_SetTargetingStrong_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTowerPanel_SetTargetingStrong()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTowerPanel_SetTargetingStrong_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTowerPanel_SetTargetingWeak_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTowerPanel_SetTargetingWeak_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/TowerPanel.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTowerPanel_SetTargetingWeak_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTowerPanel, nullptr, "SetTargetingWeak", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTowerPanel_SetTargetingWeak_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTowerPanel_SetTargetingWeak_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTowerPanel_SetTargetingWeak()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTowerPanel_SetTargetingWeak_Statics::FuncParams);
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TowerName_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TowerName;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IncreaseDamageButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_IncreaseDamageButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IncreaseFireChanceButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_IncreaseFireChanceButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IncreaseFireRateButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_IncreaseFireRateButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IncreaseRangeButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_IncreaseRangeButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageIncreaseCost_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DamageIncreaseCost;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireChanceIncreaseCost_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FireChanceIncreaseCost;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireRateIncreaseCost_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FireRateIncreaseCost;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RangeIncreaseCost_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RangeIncreaseCost;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IncreaseDamageText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_IncreaseDamageText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IncreaseFireDamageChanceText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_IncreaseFireDamageChanceText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IncreaseFireRateText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_IncreaseFireRateText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IncreaseRangeText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_IncreaseRangeText;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FirstButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LastButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StrongestButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StrongestButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeakestButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WeakestButton;
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
		{ &Z_Construct_UFunction_UTowerPanel_IncreaseDamage, "IncreaseDamage" }, // 1104397183
		{ &Z_Construct_UFunction_UTowerPanel_IncreaseFireDamageChance, "IncreaseFireDamageChance" }, // 85674813
		{ &Z_Construct_UFunction_UTowerPanel_IncreaseFireRate, "IncreaseFireRate" }, // 3458625295
		{ &Z_Construct_UFunction_UTowerPanel_IncreaseRange, "IncreaseRange" }, // 2900987014
		{ &Z_Construct_UFunction_UTowerPanel_SetTargetingFirst, "SetTargetingFirst" }, // 2268556787
		{ &Z_Construct_UFunction_UTowerPanel_SetTargetingLast, "SetTargetingLast" }, // 3946544982
		{ &Z_Construct_UFunction_UTowerPanel_SetTargetingStrong, "SetTargetingStrong" }, // 3833188678
		{ &Z_Construct_UFunction_UTowerPanel_SetTargetingWeak, "SetTargetingWeak" }, // 3368140310
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTowerPanel_Statics::NewProp_TowerName_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "TowerPanel" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/TowerPanel.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTowerPanel_Statics::NewProp_TowerName = { "TowerName", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTowerPanel, TowerName), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTowerPanel_Statics::NewProp_TowerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTowerPanel_Statics::NewProp_TowerName_MetaData)) };
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTowerPanel_Statics::NewProp_FireChanceText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "TowerPanel" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/TowerPanel.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTowerPanel_Statics::NewProp_FireChanceText = { "FireChanceText", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTowerPanel, FireChanceText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTowerPanel_Statics::NewProp_FireChanceText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTowerPanel_Statics::NewProp_FireChanceText_MetaData)) };
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTowerPanel_Statics::NewProp_RangeText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "TowerPanel" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/TowerPanel.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTowerPanel_Statics::NewProp_RangeText = { "RangeText", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTowerPanel, RangeText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTowerPanel_Statics::NewProp_RangeText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTowerPanel_Statics::NewProp_RangeText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTowerPanel_Statics::NewProp_DamageProgressBar_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "TowerPanel" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/TowerPanel.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTowerPanel_Statics::NewProp_DamageProgressBar = { "DamageProgressBar", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTowerPanel, DamageProgressBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTowerPanel_Statics::NewProp_DamageProgressBar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTowerPanel_Statics::NewProp_DamageProgressBar_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTowerPanel_Statics::NewProp_FireChanceProgressBar_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "TowerPanel" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/TowerPanel.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTowerPanel_Statics::NewProp_FireChanceProgressBar = { "FireChanceProgressBar", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTowerPanel, FireChanceProgressBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTowerPanel_Statics::NewProp_FireChanceProgressBar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTowerPanel_Statics::NewProp_FireChanceProgressBar_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTowerPanel_Statics::NewProp_FireRateProgressBar_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "TowerPanel" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/TowerPanel.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTowerPanel_Statics::NewProp_FireRateProgressBar = { "FireRateProgressBar", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTowerPanel, FireRateProgressBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTowerPanel_Statics::NewProp_FireRateProgressBar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTowerPanel_Statics::NewProp_FireRateProgressBar_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTowerPanel_Statics::NewProp_RangeProgressBar_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "TowerPanel" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/TowerPanel.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTowerPanel_Statics::NewProp_RangeProgressBar = { "RangeProgressBar", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTowerPanel, RangeProgressBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTowerPanel_Statics::NewProp_RangeProgressBar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTowerPanel_Statics::NewProp_RangeProgressBar_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTowerPanel_Statics::NewProp_IncreaseDamageButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "TowerPanel" },
		{ "Comment", "// Tower upgrade button variables\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/TowerPanel.h" },
		{ "ToolTip", "Tower upgrade button variables" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTowerPanel_Statics::NewProp_IncreaseDamageButton = { "IncreaseDamageButton", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTowerPanel, IncreaseDamageButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTowerPanel_Statics::NewProp_IncreaseDamageButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTowerPanel_Statics::NewProp_IncreaseDamageButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTowerPanel_Statics::NewProp_IncreaseFireChanceButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "TowerPanel" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/TowerPanel.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTowerPanel_Statics::NewProp_IncreaseFireChanceButton = { "IncreaseFireChanceButton", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTowerPanel, IncreaseFireChanceButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTowerPanel_Statics::NewProp_IncreaseFireChanceButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTowerPanel_Statics::NewProp_IncreaseFireChanceButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTowerPanel_Statics::NewProp_IncreaseFireRateButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "TowerPanel" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/TowerPanel.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTowerPanel_Statics::NewProp_IncreaseFireRateButton = { "IncreaseFireRateButton", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTowerPanel, IncreaseFireRateButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTowerPanel_Statics::NewProp_IncreaseFireRateButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTowerPanel_Statics::NewProp_IncreaseFireRateButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTowerPanel_Statics::NewProp_IncreaseRangeButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "TowerPanel" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/TowerPanel.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTowerPanel_Statics::NewProp_IncreaseRangeButton = { "IncreaseRangeButton", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTowerPanel, IncreaseRangeButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTowerPanel_Statics::NewProp_IncreaseRangeButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTowerPanel_Statics::NewProp_IncreaseRangeButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTowerPanel_Statics::NewProp_DamageIncreaseCost_MetaData[] = {
		{ "Category", "TowerPanel" },
		{ "Comment", "// Tower upgrade costs that can be changed in the editor\n" },
		{ "ModuleRelativePath", "UI/TowerPanel.h" },
		{ "ToolTip", "Tower upgrade costs that can be changed in the editor" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTowerPanel_Statics::NewProp_DamageIncreaseCost = { "DamageIncreaseCost", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTowerPanel, DamageIncreaseCost), METADATA_PARAMS(Z_Construct_UClass_UTowerPanel_Statics::NewProp_DamageIncreaseCost_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTowerPanel_Statics::NewProp_DamageIncreaseCost_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTowerPanel_Statics::NewProp_FireChanceIncreaseCost_MetaData[] = {
		{ "Category", "TowerPanel" },
		{ "ModuleRelativePath", "UI/TowerPanel.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTowerPanel_Statics::NewProp_FireChanceIncreaseCost = { "FireChanceIncreaseCost", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTowerPanel, FireChanceIncreaseCost), METADATA_PARAMS(Z_Construct_UClass_UTowerPanel_Statics::NewProp_FireChanceIncreaseCost_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTowerPanel_Statics::NewProp_FireChanceIncreaseCost_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTowerPanel_Statics::NewProp_FireRateIncreaseCost_MetaData[] = {
		{ "Category", "TowerPanel" },
		{ "ModuleRelativePath", "UI/TowerPanel.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTowerPanel_Statics::NewProp_FireRateIncreaseCost = { "FireRateIncreaseCost", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTowerPanel, FireRateIncreaseCost), METADATA_PARAMS(Z_Construct_UClass_UTowerPanel_Statics::NewProp_FireRateIncreaseCost_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTowerPanel_Statics::NewProp_FireRateIncreaseCost_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTowerPanel_Statics::NewProp_RangeIncreaseCost_MetaData[] = {
		{ "Category", "TowerPanel" },
		{ "ModuleRelativePath", "UI/TowerPanel.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTowerPanel_Statics::NewProp_RangeIncreaseCost = { "RangeIncreaseCost", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTowerPanel, RangeIncreaseCost), METADATA_PARAMS(Z_Construct_UClass_UTowerPanel_Statics::NewProp_RangeIncreaseCost_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTowerPanel_Statics::NewProp_RangeIncreaseCost_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTowerPanel_Statics::NewProp_IncreaseDamageText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "TowerPanel" },
		{ "Comment", "// Tower upgrade cost text variables to indicate if the tower can be upgraded\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/TowerPanel.h" },
		{ "ToolTip", "Tower upgrade cost text variables to indicate if the tower can be upgraded" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTowerPanel_Statics::NewProp_IncreaseDamageText = { "IncreaseDamageText", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTowerPanel, IncreaseDamageText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTowerPanel_Statics::NewProp_IncreaseDamageText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTowerPanel_Statics::NewProp_IncreaseDamageText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTowerPanel_Statics::NewProp_IncreaseFireDamageChanceText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "TowerPanel" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/TowerPanel.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTowerPanel_Statics::NewProp_IncreaseFireDamageChanceText = { "IncreaseFireDamageChanceText", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTowerPanel, IncreaseFireDamageChanceText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTowerPanel_Statics::NewProp_IncreaseFireDamageChanceText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTowerPanel_Statics::NewProp_IncreaseFireDamageChanceText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTowerPanel_Statics::NewProp_IncreaseFireRateText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "TowerPanel" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/TowerPanel.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTowerPanel_Statics::NewProp_IncreaseFireRateText = { "IncreaseFireRateText", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTowerPanel, IncreaseFireRateText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTowerPanel_Statics::NewProp_IncreaseFireRateText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTowerPanel_Statics::NewProp_IncreaseFireRateText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTowerPanel_Statics::NewProp_IncreaseRangeText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "TowerPanel" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/TowerPanel.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTowerPanel_Statics::NewProp_IncreaseRangeText = { "IncreaseRangeText", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTowerPanel, IncreaseRangeText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTowerPanel_Statics::NewProp_IncreaseRangeText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTowerPanel_Statics::NewProp_IncreaseRangeText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTowerPanel_Statics::NewProp_TowerImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "TowerPanel" },
		{ "Comment", "// Image variable that gets changed to display an image of the selected tower\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/TowerPanel.h" },
		{ "ToolTip", "Image variable that gets changed to display an image of the selected tower" },
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTowerPanel_Statics::NewProp_FirstButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "TowerPanel" },
		{ "Comment", "// Tower targetting type button variables\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/TowerPanel.h" },
		{ "ToolTip", "Tower targetting type button variables" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTowerPanel_Statics::NewProp_FirstButton = { "FirstButton", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTowerPanel, FirstButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTowerPanel_Statics::NewProp_FirstButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTowerPanel_Statics::NewProp_FirstButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTowerPanel_Statics::NewProp_LastButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "TowerPanel" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/TowerPanel.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTowerPanel_Statics::NewProp_LastButton = { "LastButton", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTowerPanel, LastButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTowerPanel_Statics::NewProp_LastButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTowerPanel_Statics::NewProp_LastButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTowerPanel_Statics::NewProp_StrongestButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "TowerPanel" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/TowerPanel.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTowerPanel_Statics::NewProp_StrongestButton = { "StrongestButton", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTowerPanel, StrongestButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTowerPanel_Statics::NewProp_StrongestButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTowerPanel_Statics::NewProp_StrongestButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTowerPanel_Statics::NewProp_WeakestButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "TowerPanel" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/TowerPanel.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTowerPanel_Statics::NewProp_WeakestButton = { "WeakestButton", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTowerPanel, WeakestButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTowerPanel_Statics::NewProp_WeakestButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTowerPanel_Statics::NewProp_WeakestButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTowerPanel_Statics::NewProp_GameMode_MetaData[] = {
		{ "Category", "References" },
		{ "Comment", "// Reference variables\n" },
		{ "ModuleRelativePath", "UI/TowerPanel.h" },
		{ "ToolTip", "Reference variables" },
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
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTowerPanel_Statics::NewProp_TowerName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTowerPanel_Statics::NewProp_DamageText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTowerPanel_Statics::NewProp_FireChanceText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTowerPanel_Statics::NewProp_FireRateText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTowerPanel_Statics::NewProp_RangeText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTowerPanel_Statics::NewProp_DamageProgressBar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTowerPanel_Statics::NewProp_FireChanceProgressBar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTowerPanel_Statics::NewProp_FireRateProgressBar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTowerPanel_Statics::NewProp_RangeProgressBar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTowerPanel_Statics::NewProp_IncreaseDamageButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTowerPanel_Statics::NewProp_IncreaseFireChanceButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTowerPanel_Statics::NewProp_IncreaseFireRateButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTowerPanel_Statics::NewProp_IncreaseRangeButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTowerPanel_Statics::NewProp_DamageIncreaseCost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTowerPanel_Statics::NewProp_FireChanceIncreaseCost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTowerPanel_Statics::NewProp_FireRateIncreaseCost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTowerPanel_Statics::NewProp_RangeIncreaseCost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTowerPanel_Statics::NewProp_IncreaseDamageText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTowerPanel_Statics::NewProp_IncreaseFireDamageChanceText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTowerPanel_Statics::NewProp_IncreaseFireRateText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTowerPanel_Statics::NewProp_IncreaseRangeText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTowerPanel_Statics::NewProp_TowerImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTowerPanel_Statics::NewProp_BallistaImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTowerPanel_Statics::NewProp_CannonImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTowerPanel_Statics::NewProp_CatapultImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTowerPanel_Statics::NewProp_TurretImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTowerPanel_Statics::NewProp_FirstButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTowerPanel_Statics::NewProp_LastButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTowerPanel_Statics::NewProp_StrongestButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTowerPanel_Statics::NewProp_WeakestButton,
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
	IMPLEMENT_CLASS(UTowerPanel, 787662697);
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
