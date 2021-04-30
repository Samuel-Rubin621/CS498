// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTowerDefense_init() {}
	TOWERDEFENSE_API UFunction* Z_Construct_UDelegateFunction_TowerDefense_OnMoneyChange__DelegateSignature();
	TOWERDEFENSE_API UFunction* Z_Construct_UDelegateFunction_TowerDefense_OnLivesChange__DelegateSignature();
	TOWERDEFENSE_API UFunction* Z_Construct_UDelegateFunction_TowerDefense_OnRoundBegin__DelegateSignature();
	TOWERDEFENSE_API UFunction* Z_Construct_UDelegateFunction_TowerDefense_OnRoundCompletion__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_TowerDefense()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_TowerDefense_OnMoneyChange__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_TowerDefense_OnLivesChange__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_TowerDefense_OnRoundBegin__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_TowerDefense_OnRoundCompletion__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/TowerDefense",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xC5EE2B62,
				0xCF71C0D8,
				METADATA_PARAMS(nullptr, 0)
			};
			UE4CodeGen_Private::ConstructUPackage(ReturnPackage, PackageParams);
		}
		return ReturnPackage;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
