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
	TOWERDEFENSE_API UClass* Z_Construct_UClass_ATowerDefenseGameMode_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ATowerDefensePlayerController::execCheatCodeAddMoney)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CheatCodeAddMoney();
		P_NATIVE_END;
	}
	void ATowerDefensePlayerController::StaticRegisterNativesATowerDefensePlayerController()
	{
		UClass* Class = ATowerDefensePlayerController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CheatCodeAddMoney", &ATowerDefensePlayerController::execCheatCodeAddMoney },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATowerDefensePlayerController_CheatCodeAddMoney_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATowerDefensePlayerController_CheatCodeAddMoney_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// End PlayerController interface\n" },
		{ "ModuleRelativePath", "TowerDefensePlayerController.h" },
		{ "ToolTip", "End PlayerController interface" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATowerDefensePlayerController_CheatCodeAddMoney_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATowerDefensePlayerController, nullptr, "CheatCodeAddMoney", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATowerDefensePlayerController_CheatCodeAddMoney_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATowerDefensePlayerController_CheatCodeAddMoney_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATowerDefensePlayerController_CheatCodeAddMoney()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATowerDefensePlayerController_CheatCodeAddMoney_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATowerDefensePlayerController_NoRegister()
	{
		return ATowerDefensePlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ATowerDefensePlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ControlledPawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ControlledPawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GameMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireParticles_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FireParticles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxZoomIn_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxZoomIn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxZoomOut_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxZoomOut;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRightMouseDown_MetaData[];
#endif
		static void NewProp_bRightMouseDown_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRightMouseDown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MouseX_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MouseX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MouseY_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MouseY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZoomRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ZoomRate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATowerDefensePlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_TowerDefense,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATowerDefensePlayerController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATowerDefensePlayerController_CheatCodeAddMoney, "CheatCodeAddMoney" }, // 3778572538
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATowerDefensePlayerController_Statics::NewProp_GameMode_MetaData[] = {
		{ "Category", "References" },
		{ "ModuleRelativePath", "TowerDefensePlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATowerDefensePlayerController_Statics::NewProp_GameMode = { "GameMode", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATowerDefensePlayerController, GameMode), Z_Construct_UClass_ATowerDefenseGameMode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATowerDefensePlayerController_Statics::NewProp_GameMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATowerDefensePlayerController_Statics::NewProp_GameMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATowerDefensePlayerController_Statics::NewProp_FireParticles_MetaData[] = {
		{ "Category", "Enemy" },
		{ "ModuleRelativePath", "TowerDefensePlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATowerDefensePlayerController_Statics::NewProp_FireParticles = { "FireParticles", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATowerDefensePlayerController, FireParticles), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATowerDefensePlayerController_Statics::NewProp_FireParticles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATowerDefensePlayerController_Statics::NewProp_FireParticles_MetaData)) };
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATowerDefensePlayerController_Statics::NewProp_bRightMouseDown_MetaData[] = {
		{ "ModuleRelativePath", "TowerDefensePlayerController.h" },
	};
#endif
	void Z_Construct_UClass_ATowerDefensePlayerController_Statics::NewProp_bRightMouseDown_SetBit(void* Obj)
	{
		((ATowerDefensePlayerController*)Obj)->bRightMouseDown = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATowerDefensePlayerController_Statics::NewProp_bRightMouseDown = { "bRightMouseDown", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATowerDefensePlayerController), &Z_Construct_UClass_ATowerDefensePlayerController_Statics::NewProp_bRightMouseDown_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATowerDefensePlayerController_Statics::NewProp_bRightMouseDown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATowerDefensePlayerController_Statics::NewProp_bRightMouseDown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATowerDefensePlayerController_Statics::NewProp_MouseX_MetaData[] = {
		{ "ModuleRelativePath", "TowerDefensePlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATowerDefensePlayerController_Statics::NewProp_MouseX = { "MouseX", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATowerDefensePlayerController, MouseX), METADATA_PARAMS(Z_Construct_UClass_ATowerDefensePlayerController_Statics::NewProp_MouseX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATowerDefensePlayerController_Statics::NewProp_MouseX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATowerDefensePlayerController_Statics::NewProp_MouseY_MetaData[] = {
		{ "ModuleRelativePath", "TowerDefensePlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATowerDefensePlayerController_Statics::NewProp_MouseY = { "MouseY", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATowerDefensePlayerController, MouseY), METADATA_PARAMS(Z_Construct_UClass_ATowerDefensePlayerController_Statics::NewProp_MouseY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATowerDefensePlayerController_Statics::NewProp_MouseY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATowerDefensePlayerController_Statics::NewProp_ZoomRate_MetaData[] = {
		{ "ModuleRelativePath", "TowerDefensePlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATowerDefensePlayerController_Statics::NewProp_ZoomRate = { "ZoomRate", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATowerDefensePlayerController, ZoomRate), METADATA_PARAMS(Z_Construct_UClass_ATowerDefensePlayerController_Statics::NewProp_ZoomRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATowerDefensePlayerController_Statics::NewProp_ZoomRate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATowerDefensePlayerController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATowerDefensePlayerController_Statics::NewProp_ControlledPawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATowerDefensePlayerController_Statics::NewProp_GameMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATowerDefensePlayerController_Statics::NewProp_FireParticles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATowerDefensePlayerController_Statics::NewProp_MaxZoomIn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATowerDefensePlayerController_Statics::NewProp_MaxZoomOut,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATowerDefensePlayerController_Statics::NewProp_bRightMouseDown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATowerDefensePlayerController_Statics::NewProp_MouseX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATowerDefensePlayerController_Statics::NewProp_MouseY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATowerDefensePlayerController_Statics::NewProp_ZoomRate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATowerDefensePlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATowerDefensePlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATowerDefensePlayerController_Statics::ClassParams = {
		&ATowerDefensePlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATowerDefensePlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(ATowerDefensePlayerController, 1639517167);
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
