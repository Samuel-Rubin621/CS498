// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TowerDefense/PawnTestPlayer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePawnTestPlayer() {}
// Cross Module References
	TOWERDEFENSE_API UClass* Z_Construct_UClass_APawnTestPlayer_NoRegister();
	TOWERDEFENSE_API UClass* Z_Construct_UClass_APawnTestPlayer();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_TowerDefense();
	ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UFloatingPawnMovement_NoRegister();
	TOWERDEFENSE_API UClass* Z_Construct_UClass_ATowerDefensePlayerController_NoRegister();
// End Cross Module References
	void APawnTestPlayer::StaticRegisterNativesAPawnTestPlayer()
	{
	}
	UClass* Z_Construct_UClass_APawnTestPlayer_NoRegister()
	{
		return APawnTestPlayer::StaticClass();
	}
	struct Z_Construct_UClass_APawnTestPlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Billboard_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Billboard;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Root;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MainCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MainCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Movement_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Movement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PawnMovement_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PawnMovement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
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
	UObject* (*const Z_Construct_UClass_APawnTestPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_TowerDefense,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APawnTestPlayer_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PawnTestPlayer.h" },
		{ "ModuleRelativePath", "PawnTestPlayer.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APawnTestPlayer_Statics::NewProp_Billboard_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "// Component for visualizing the origin of the pawn\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PawnTestPlayer.h" },
		{ "ToolTip", "Component for visualizing the origin of the pawn" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APawnTestPlayer_Statics::NewProp_Billboard = { "Billboard", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APawnTestPlayer, Billboard), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APawnTestPlayer_Statics::NewProp_Billboard_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APawnTestPlayer_Statics::NewProp_Billboard_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APawnTestPlayer_Statics::NewProp_Root_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "// Components for the pawn\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PawnTestPlayer.h" },
		{ "ToolTip", "Components for the pawn" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APawnTestPlayer_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APawnTestPlayer, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APawnTestPlayer_Statics::NewProp_Root_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APawnTestPlayer_Statics::NewProp_Root_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APawnTestPlayer_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PawnTestPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APawnTestPlayer_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APawnTestPlayer, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APawnTestPlayer_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APawnTestPlayer_Statics::NewProp_CameraBoom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APawnTestPlayer_Statics::NewProp_MainCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PawnTestPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APawnTestPlayer_Statics::NewProp_MainCamera = { "MainCamera", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APawnTestPlayer, MainCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APawnTestPlayer_Statics::NewProp_MainCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APawnTestPlayer_Statics::NewProp_MainCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APawnTestPlayer_Statics::NewProp_Movement_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PawnTestPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APawnTestPlayer_Statics::NewProp_Movement = { "Movement", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APawnTestPlayer, Movement), Z_Construct_UClass_UMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APawnTestPlayer_Statics::NewProp_Movement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APawnTestPlayer_Statics::NewProp_Movement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APawnTestPlayer_Statics::NewProp_PawnMovement_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "// Component for movement in the pawn\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PawnTestPlayer.h" },
		{ "ToolTip", "Component for movement in the pawn" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APawnTestPlayer_Statics::NewProp_PawnMovement = { "PawnMovement", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APawnTestPlayer, PawnMovement), Z_Construct_UClass_UFloatingPawnMovement_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APawnTestPlayer_Statics::NewProp_PawnMovement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APawnTestPlayer_Statics::NewProp_PawnMovement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APawnTestPlayer_Statics::NewProp_PlayerController_MetaData[] = {
		{ "Category", "Controller" },
		{ "Comment", "// Player controller variables\n" },
		{ "ModuleRelativePath", "PawnTestPlayer.h" },
		{ "ToolTip", "Player controller variables" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APawnTestPlayer_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APawnTestPlayer, PlayerController), Z_Construct_UClass_ATowerDefensePlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APawnTestPlayer_Statics::NewProp_PlayerController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APawnTestPlayer_Statics::NewProp_PlayerController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APawnTestPlayer_Statics::NewProp_MaxZoomIn_MetaData[] = {
		{ "Category", "Controller" },
		{ "Comment", "// Variables for using the mouse to zoom and look around\n" },
		{ "ModuleRelativePath", "PawnTestPlayer.h" },
		{ "ToolTip", "Variables for using the mouse to zoom and look around" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APawnTestPlayer_Statics::NewProp_MaxZoomIn = { "MaxZoomIn", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APawnTestPlayer, MaxZoomIn), METADATA_PARAMS(Z_Construct_UClass_APawnTestPlayer_Statics::NewProp_MaxZoomIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APawnTestPlayer_Statics::NewProp_MaxZoomIn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APawnTestPlayer_Statics::NewProp_MaxZoomOut_MetaData[] = {
		{ "Category", "Controller" },
		{ "ModuleRelativePath", "PawnTestPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APawnTestPlayer_Statics::NewProp_MaxZoomOut = { "MaxZoomOut", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APawnTestPlayer, MaxZoomOut), METADATA_PARAMS(Z_Construct_UClass_APawnTestPlayer_Statics::NewProp_MaxZoomOut_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APawnTestPlayer_Statics::NewProp_MaxZoomOut_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APawnTestPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APawnTestPlayer_Statics::NewProp_Billboard,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APawnTestPlayer_Statics::NewProp_Root,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APawnTestPlayer_Statics::NewProp_CameraBoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APawnTestPlayer_Statics::NewProp_MainCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APawnTestPlayer_Statics::NewProp_Movement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APawnTestPlayer_Statics::NewProp_PawnMovement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APawnTestPlayer_Statics::NewProp_PlayerController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APawnTestPlayer_Statics::NewProp_MaxZoomIn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APawnTestPlayer_Statics::NewProp_MaxZoomOut,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APawnTestPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APawnTestPlayer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APawnTestPlayer_Statics::ClassParams = {
		&APawnTestPlayer::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APawnTestPlayer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APawnTestPlayer_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APawnTestPlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APawnTestPlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APawnTestPlayer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APawnTestPlayer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APawnTestPlayer, 1169311817);
	template<> TOWERDEFENSE_API UClass* StaticClass<APawnTestPlayer>()
	{
		return APawnTestPlayer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APawnTestPlayer(Z_Construct_UClass_APawnTestPlayer, &APawnTestPlayer::StaticClass, TEXT("/Script/TowerDefense"), TEXT("APawnTestPlayer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APawnTestPlayer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
