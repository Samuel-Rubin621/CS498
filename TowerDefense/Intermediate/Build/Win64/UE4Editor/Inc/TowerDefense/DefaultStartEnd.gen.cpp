// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TowerDefense/DefaultStartEnd.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDefaultStartEnd() {}
// Cross Module References
	TOWERDEFENSE_API UClass* Z_Construct_UClass_ADefaultStartEnd_NoRegister();
	TOWERDEFENSE_API UClass* Z_Construct_UClass_ADefaultStartEnd();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TowerDefense();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
	TOWERDEFENSE_API UClass* Z_Construct_UClass_ATowerDefenseGameMode_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
// End Cross Module References
	void ADefaultStartEnd::StaticRegisterNativesADefaultStartEnd()
	{
	}
	UClass* Z_Construct_UClass_ADefaultStartEnd_NoRegister()
	{
		return ADefaultStartEnd::StaticClass();
	}
	struct Z_Construct_UClass_ADefaultStartEnd_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scene_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Scene;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StartPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EndPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GameMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoundDataTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RoundDataTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInRound_MetaData[];
#endif
		static void NewProp_bInRound_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInRound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Round_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Round;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalToSpawnThisRound_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TotalToSpawnThisRound;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADefaultStartEnd_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TowerDefense,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefaultStartEnd_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DefaultStartEnd.h" },
		{ "ModuleRelativePath", "DefaultStartEnd.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefaultStartEnd_Statics::NewProp_Scene_MetaData[] = {
		{ "Category", "DefaultStartEnd" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DefaultStartEnd.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADefaultStartEnd_Statics::NewProp_Scene = { "Scene", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADefaultStartEnd, Scene), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADefaultStartEnd_Statics::NewProp_Scene_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultStartEnd_Statics::NewProp_Scene_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefaultStartEnd_Statics::NewProp_StartPoint_MetaData[] = {
		{ "Category", "DefaultStartEnd" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DefaultStartEnd.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADefaultStartEnd_Statics::NewProp_StartPoint = { "StartPoint", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADefaultStartEnd, StartPoint), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADefaultStartEnd_Statics::NewProp_StartPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultStartEnd_Statics::NewProp_StartPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefaultStartEnd_Statics::NewProp_EndPoint_MetaData[] = {
		{ "Category", "DefaultStartEnd" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DefaultStartEnd.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADefaultStartEnd_Statics::NewProp_EndPoint = { "EndPoint", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADefaultStartEnd, EndPoint), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADefaultStartEnd_Statics::NewProp_EndPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultStartEnd_Statics::NewProp_EndPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefaultStartEnd_Statics::NewProp_GameMode_MetaData[] = {
		{ "Category", "References" },
		{ "ModuleRelativePath", "DefaultStartEnd.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADefaultStartEnd_Statics::NewProp_GameMode = { "GameMode", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADefaultStartEnd, GameMode), Z_Construct_UClass_ATowerDefenseGameMode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADefaultStartEnd_Statics::NewProp_GameMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultStartEnd_Statics::NewProp_GameMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefaultStartEnd_Statics::NewProp_RoundDataTable_MetaData[] = {
		{ "Category", "Wave | Spawning" },
		{ "ModuleRelativePath", "DefaultStartEnd.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADefaultStartEnd_Statics::NewProp_RoundDataTable = { "RoundDataTable", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADefaultStartEnd, RoundDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADefaultStartEnd_Statics::NewProp_RoundDataTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultStartEnd_Statics::NewProp_RoundDataTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefaultStartEnd_Statics::NewProp_bInRound_MetaData[] = {
		{ "Category", "Wave | Spawning" },
		{ "ModuleRelativePath", "DefaultStartEnd.h" },
	};
#endif
	void Z_Construct_UClass_ADefaultStartEnd_Statics::NewProp_bInRound_SetBit(void* Obj)
	{
		((ADefaultStartEnd*)Obj)->bInRound = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADefaultStartEnd_Statics::NewProp_bInRound = { "bInRound", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ADefaultStartEnd), &Z_Construct_UClass_ADefaultStartEnd_Statics::NewProp_bInRound_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADefaultStartEnd_Statics::NewProp_bInRound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultStartEnd_Statics::NewProp_bInRound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefaultStartEnd_Statics::NewProp_Round_MetaData[] = {
		{ "Category", "Wave | Spawning" },
		{ "ModuleRelativePath", "DefaultStartEnd.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADefaultStartEnd_Statics::NewProp_Round = { "Round", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADefaultStartEnd, Round), METADATA_PARAMS(Z_Construct_UClass_ADefaultStartEnd_Statics::NewProp_Round_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultStartEnd_Statics::NewProp_Round_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefaultStartEnd_Statics::NewProp_TotalToSpawnThisRound_MetaData[] = {
		{ "Category", "Wave | Spawning" },
		{ "ModuleRelativePath", "DefaultStartEnd.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADefaultStartEnd_Statics::NewProp_TotalToSpawnThisRound = { "TotalToSpawnThisRound", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADefaultStartEnd, TotalToSpawnThisRound), METADATA_PARAMS(Z_Construct_UClass_ADefaultStartEnd_Statics::NewProp_TotalToSpawnThisRound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultStartEnd_Statics::NewProp_TotalToSpawnThisRound_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADefaultStartEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefaultStartEnd_Statics::NewProp_Scene,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefaultStartEnd_Statics::NewProp_StartPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefaultStartEnd_Statics::NewProp_EndPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefaultStartEnd_Statics::NewProp_GameMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefaultStartEnd_Statics::NewProp_RoundDataTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefaultStartEnd_Statics::NewProp_bInRound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefaultStartEnd_Statics::NewProp_Round,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefaultStartEnd_Statics::NewProp_TotalToSpawnThisRound,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADefaultStartEnd_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADefaultStartEnd>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADefaultStartEnd_Statics::ClassParams = {
		&ADefaultStartEnd::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ADefaultStartEnd_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultStartEnd_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADefaultStartEnd_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultStartEnd_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADefaultStartEnd()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADefaultStartEnd_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADefaultStartEnd, 1691478491);
	template<> TOWERDEFENSE_API UClass* StaticClass<ADefaultStartEnd>()
	{
		return ADefaultStartEnd::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADefaultStartEnd(Z_Construct_UClass_ADefaultStartEnd, &ADefaultStartEnd::StaticClass, TEXT("/Script/TowerDefense"), TEXT("ADefaultStartEnd"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADefaultStartEnd);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
