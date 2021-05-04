// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TowerDefense/TowerDefensePlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTowerDefensePlayerController() {}
// Cross Module References
	TOWERDEFENSE_API UClass* Z_Construct_UClass_ATowerDefensePlayerController_NoRegister();
	TOWERDEFENSE_API UClass* Z_Construct_UClass_ATowerDefensePlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_TowerDefense();
	TOWERDEFENSE_API UClass* Z_Construct_UClass_ATowerDefensePlayerPawn_NoRegister();
// End Cross Module References
	void ATowerDefensePlayerController::StaticRegisterNativesATowerDefensePlayerController()
	{
	}
	UClass* Z_Construct_UClass_ATowerDefensePlayerController_NoRegister()
	{
		return ATowerDefensePlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ATowerDefensePlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ControlledPawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ControlledPawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxZoomIn_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxZoomIn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxZoomOut_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxZoomOut;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATowerDefensePlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_TowerDefense,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATowerDefensePlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "TowerDefensePlayerController.h" },
		{ "ModuleRelativePath", "TowerDefensePlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATowerDefensePlayerController_Statics::NewProp_ControlledPawn_MetaData[] = {
		{ "ModuleRelativePath", "TowerDefensePlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATowerDefensePlayerController_Statics::NewProp_ControlledPawn = { "ControlledPawn", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATowerDefensePlayerController, ControlledPawn), Z_Construct_UClass_ATowerDefensePlayerPawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATowerDefensePlayerController_Statics::NewProp_ControlledPawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATowerDefensePlayerController_Statics::NewProp_ControlledPawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATowerDefensePlayerController_Statics::NewProp_MaxZoomIn_MetaData[] = {
		{ "Category", "Controller" },
		{ "Comment", "// Variables for using the mouse to zoom and look around\n" },
		{ "ModuleRelativePath", "TowerDefensePlayerController.h" },
		{ "ToolTip", "Variables for using the mouse to zoom and look around" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATowerDefensePlayerController_Statics::NewProp_MaxZoomIn = { "MaxZoomIn", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATowerDefensePlayerController, MaxZoomIn), METADATA_PARAMS(Z_Construct_UClass_ATowerDefensePlayerController_Statics::NewProp_MaxZoomIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATowerDefensePlayerController_Statics::NewProp_MaxZoomIn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATowerDefensePlayerController_Statics::NewProp_MaxZoomOut_MetaData[] = {
		{ "Category", "Controller" },
		{ "ModuleRelativePath", "TowerDefensePlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATowerDefensePlayerController_Statics::NewProp_MaxZoomOut = { "MaxZoomOut", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATowerDefensePlayerController, MaxZoomOut), METADATA_PARAMS(Z_Construct_UClass_ATowerDefensePlayerController_Statics::NewProp_MaxZoomOut_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATowerDefensePlayerController_Statics::NewProp_MaxZoomOut_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATowerDefensePlayerController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATowerDefensePlayerController_Statics::NewProp_ControlledPawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATowerDefensePlayerController_Statics::NewProp_MaxZoomIn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATowerDefensePlayerController_Statics::NewProp_MaxZoomOut,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATowerDefensePlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATowerDefensePlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATowerDefensePlayerController_Statics::ClassParams = {
		&ATowerDefensePlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATowerDefensePlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATowerDefensePlayerController_Statics::PropPointers),
		0,
		0x008002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATowerDefensePlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATowerDefensePlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATowerDefensePlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATowerDefensePlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATowerDefensePlayerController, 3977270577);
	template<> TOWERDEFENSE_API UClass* StaticClass<ATowerDefensePlayerController>()
	{
		return ATowerDefensePlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATowerDefensePlayerController(Z_Construct_UClass_ATowerDefensePlayerController, &ATowerDefensePlayerController::StaticClass, TEXT("/Script/TowerDefense"), TEXT("ATowerDefensePlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATowerDefensePlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
