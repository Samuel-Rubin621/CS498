// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TowerDefense/DefaultEnemy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDefaultEnemy() {}
// Cross Module References
	TOWERDEFENSE_API UEnum* Z_Construct_UEnum_TowerDefense_EEnemyMovementStatus();
	UPackage* Z_Construct_UPackage__Script_TowerDefense();
	TOWERDEFENSE_API UClass* Z_Construct_UClass_ADefaultEnemy_NoRegister();
	TOWERDEFENSE_API UClass* Z_Construct_UClass_ADefaultEnemy();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	TOWERDEFENSE_API UClass* Z_Construct_UClass_ADefaultStartEnd_NoRegister();
// End Cross Module References
	static UEnum* EEnemyMovementStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_TowerDefense_EEnemyMovementStatus, Z_Construct_UPackage__Script_TowerDefense(), TEXT("EEnemyMovementStatus"));
		}
		return Singleton;
	}
	template<> TOWERDEFENSE_API UEnum* StaticEnum<EEnemyMovementStatus>()
	{
		return EEnemyMovementStatus_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEnemyMovementStatus(EEnemyMovementStatus_StaticEnum, TEXT("/Script/TowerDefense"), TEXT("EEnemyMovementStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_TowerDefense_EEnemyMovementStatus_Hash() { return 1441752036U; }
	UEnum* Z_Construct_UEnum_TowerDefense_EEnemyMovementStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_TowerDefense();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEnemyMovementStatus"), 0, Get_Z_Construct_UEnum_TowerDefense_EEnemyMovementStatus_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEnemyMovementStatus::EMS_Idle", (int64)EEnemyMovementStatus::EMS_Idle },
				{ "EEnemyMovementStatus::EMS_MoveToTarget", (int64)EEnemyMovementStatus::EMS_MoveToTarget },
				{ "EEnemyMovementStatus::EMS_Attacking", (int64)EEnemyMovementStatus::EMS_Attacking },
				{ "EEnemyMovementStatus::EMS_Dead", (int64)EEnemyMovementStatus::EMS_Dead },
				{ "EEnemyMovementStatus::EMS_MAX", (int64)EEnemyMovementStatus::EMS_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "EMS_Attacking.DisplayName", "Attacking" },
				{ "EMS_Attacking.Name", "EEnemyMovementStatus::EMS_Attacking" },
				{ "EMS_Dead.DisplayName", "Dead" },
				{ "EMS_Dead.Name", "EEnemyMovementStatus::EMS_Dead" },
				{ "EMS_Idle.DisplayName", "Idle" },
				{ "EMS_Idle.Name", "EEnemyMovementStatus::EMS_Idle" },
				{ "EMS_MAX.DisplayName", "DefaultMAX" },
				{ "EMS_MAX.Name", "EEnemyMovementStatus::EMS_MAX" },
				{ "EMS_MoveToTarget.DisplayName", "MoveToTarget" },
				{ "EMS_MoveToTarget.Name", "EEnemyMovementStatus::EMS_MoveToTarget" },
				{ "ModuleRelativePath", "DefaultEnemy.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_TowerDefense,
				nullptr,
				"EEnemyMovementStatus",
				"EEnemyMovementStatus",
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
	DEFINE_FUNCTION(ADefaultEnemy::execMoveToTarget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveToTarget();
		P_NATIVE_END;
	}
	void ADefaultEnemy::StaticRegisterNativesADefaultEnemy()
	{
		UClass* Class = ADefaultEnemy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MoveToTarget", &ADefaultEnemy::execMoveToTarget },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADefaultEnemy_MoveToTarget_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADefaultEnemy_MoveToTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DefaultEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADefaultEnemy_MoveToTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADefaultEnemy, nullptr, "MoveToTarget", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADefaultEnemy_MoveToTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADefaultEnemy_MoveToTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADefaultEnemy_MoveToTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADefaultEnemy_MoveToTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ADefaultEnemy_NoRegister()
	{
		return ADefaultEnemy::StaticClass();
	}
	struct Z_Construct_UClass_ADefaultEnemy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnemyDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EnemyDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnemyMaxHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EnemyMaxHealth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnemyHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EnemyHealth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnemySpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EnemySpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AIController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AIController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EndPoint;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EnemyMovementStatus_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnemyMovementStatus_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EnemyMovementStatus;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartEndFilter_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_StartEndFilter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADefaultEnemy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_TowerDefense,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ADefaultEnemy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADefaultEnemy_MoveToTarget, "MoveToTarget" }, // 3440247670
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefaultEnemy_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "DefaultEnemy.h" },
		{ "ModuleRelativePath", "DefaultEnemy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefaultEnemy_Statics::NewProp_EnemyDamage_MetaData[] = {
		{ "Category", "Enemy | Statistics" },
		{ "Comment", "//Declaration of enemy statistics\n" },
		{ "ModuleRelativePath", "DefaultEnemy.h" },
		{ "ToolTip", "Declaration of enemy statistics" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADefaultEnemy_Statics::NewProp_EnemyDamage = { "EnemyDamage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADefaultEnemy, EnemyDamage), METADATA_PARAMS(Z_Construct_UClass_ADefaultEnemy_Statics::NewProp_EnemyDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultEnemy_Statics::NewProp_EnemyDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefaultEnemy_Statics::NewProp_EnemyMaxHealth_MetaData[] = {
		{ "Category", "Enemy | Statistics" },
		{ "ModuleRelativePath", "DefaultEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADefaultEnemy_Statics::NewProp_EnemyMaxHealth = { "EnemyMaxHealth", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADefaultEnemy, EnemyMaxHealth), METADATA_PARAMS(Z_Construct_UClass_ADefaultEnemy_Statics::NewProp_EnemyMaxHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultEnemy_Statics::NewProp_EnemyMaxHealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefaultEnemy_Statics::NewProp_EnemyHealth_MetaData[] = {
		{ "Category", "Enemy | Statistics" },
		{ "ModuleRelativePath", "DefaultEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADefaultEnemy_Statics::NewProp_EnemyHealth = { "EnemyHealth", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADefaultEnemy, EnemyHealth), METADATA_PARAMS(Z_Construct_UClass_ADefaultEnemy_Statics::NewProp_EnemyHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultEnemy_Statics::NewProp_EnemyHealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefaultEnemy_Statics::NewProp_EnemySpeed_MetaData[] = {
		{ "Category", "Enemy | Statistics" },
		{ "ModuleRelativePath", "DefaultEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADefaultEnemy_Statics::NewProp_EnemySpeed = { "EnemySpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADefaultEnemy, EnemySpeed), METADATA_PARAMS(Z_Construct_UClass_ADefaultEnemy_Statics::NewProp_EnemySpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultEnemy_Statics::NewProp_EnemySpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefaultEnemy_Statics::NewProp_AIController_MetaData[] = {
		{ "Category", "Enemy | Movement" },
		{ "ModuleRelativePath", "DefaultEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADefaultEnemy_Statics::NewProp_AIController = { "AIController", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADefaultEnemy, AIController), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADefaultEnemy_Statics::NewProp_AIController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultEnemy_Statics::NewProp_AIController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefaultEnemy_Statics::NewProp_EndPoint_MetaData[] = {
		{ "Category", "Enemy | Movement" },
		{ "ModuleRelativePath", "DefaultEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADefaultEnemy_Statics::NewProp_EndPoint = { "EndPoint", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADefaultEnemy, EndPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ADefaultEnemy_Statics::NewProp_EndPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultEnemy_Statics::NewProp_EndPoint_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ADefaultEnemy_Statics::NewProp_EnemyMovementStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefaultEnemy_Statics::NewProp_EnemyMovementStatus_MetaData[] = {
		{ "Category", "Enemy | Movement" },
		{ "ModuleRelativePath", "DefaultEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ADefaultEnemy_Statics::NewProp_EnemyMovementStatus = { "EnemyMovementStatus", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADefaultEnemy, EnemyMovementStatus), Z_Construct_UEnum_TowerDefense_EEnemyMovementStatus, METADATA_PARAMS(Z_Construct_UClass_ADefaultEnemy_Statics::NewProp_EnemyMovementStatus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultEnemy_Statics::NewProp_EnemyMovementStatus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefaultEnemy_Statics::NewProp_StartEndFilter_MetaData[] = {
		{ "Category", "Enemy | Movement" },
		{ "ModuleRelativePath", "DefaultEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ADefaultEnemy_Statics::NewProp_StartEndFilter = { "StartEndFilter", nullptr, (EPropertyFlags)0x0014000000020015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADefaultEnemy, StartEndFilter), Z_Construct_UClass_ADefaultStartEnd_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ADefaultEnemy_Statics::NewProp_StartEndFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultEnemy_Statics::NewProp_StartEndFilter_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADefaultEnemy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefaultEnemy_Statics::NewProp_EnemyDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefaultEnemy_Statics::NewProp_EnemyMaxHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefaultEnemy_Statics::NewProp_EnemyHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefaultEnemy_Statics::NewProp_EnemySpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefaultEnemy_Statics::NewProp_AIController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefaultEnemy_Statics::NewProp_EndPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefaultEnemy_Statics::NewProp_EnemyMovementStatus_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefaultEnemy_Statics::NewProp_EnemyMovementStatus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefaultEnemy_Statics::NewProp_StartEndFilter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADefaultEnemy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADefaultEnemy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADefaultEnemy_Statics::ClassParams = {
		&ADefaultEnemy::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ADefaultEnemy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultEnemy_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADefaultEnemy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultEnemy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADefaultEnemy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADefaultEnemy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADefaultEnemy, 2417214054);
	template<> TOWERDEFENSE_API UClass* StaticClass<ADefaultEnemy>()
	{
		return ADefaultEnemy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADefaultEnemy(Z_Construct_UClass_ADefaultEnemy, &ADefaultEnemy::StaticClass, TEXT("/Script/TowerDefense"), TEXT("ADefaultEnemy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADefaultEnemy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
