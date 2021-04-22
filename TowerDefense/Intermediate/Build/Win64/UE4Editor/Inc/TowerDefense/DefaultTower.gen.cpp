// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TowerDefense/DefaultTower.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDefaultTower() {}
// Cross Module References
	TOWERDEFENSE_API UEnum* Z_Construct_UEnum_TowerDefense_ETowerType();
	UPackage* Z_Construct_UPackage__Script_TowerDefense();
	TOWERDEFENSE_API UEnum* Z_Construct_UEnum_TowerDefense_ETowerPositionTargeting();
	TOWERDEFENSE_API UClass* Z_Construct_UClass_ADefaultTower_NoRegister();
	TOWERDEFENSE_API UClass* Z_Construct_UClass_ADefaultTower();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	TOWERDEFENSE_API UClass* Z_Construct_UClass_ADefaultProjectile_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
	TOWERDEFENSE_API UClass* Z_Construct_UClass_ADefaultEnemy_NoRegister();
	TOWERDEFENSE_API UClass* Z_Construct_UClass_ATowerDefenseGameMode_NoRegister();
// End Cross Module References
	static UEnum* ETowerType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_TowerDefense_ETowerType, Z_Construct_UPackage__Script_TowerDefense(), TEXT("ETowerType"));
		}
		return Singleton;
	}
	template<> TOWERDEFENSE_API UEnum* StaticEnum<ETowerType>()
	{
		return ETowerType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETowerType(ETowerType_StaticEnum, TEXT("/Script/TowerDefense"), TEXT("ETowerType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_TowerDefense_ETowerType_Hash() { return 3012518180U; }
	UEnum* Z_Construct_UEnum_TowerDefense_ETowerType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_TowerDefense();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETowerType"), 0, Get_Z_Construct_UEnum_TowerDefense_ETowerType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETowerType::TT_Ballista", (int64)ETowerType::TT_Ballista },
				{ "ETowerType::TT_Cannon", (int64)ETowerType::TT_Cannon },
				{ "ETowerType::TT_Catapult", (int64)ETowerType::TT_Catapult },
				{ "ETowerType::TT_Turret", (int64)ETowerType::TT_Turret },
				{ "ETowerType::TT_MAX", (int64)ETowerType::TT_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "DefaultTower.h" },
				{ "TT_Ballista.DisplayName", "Ballista" },
				{ "TT_Ballista.Name", "ETowerType::TT_Ballista" },
				{ "TT_Cannon.DisplayName", "Cannon" },
				{ "TT_Cannon.Name", "ETowerType::TT_Cannon" },
				{ "TT_Catapult.DisplayName", "Catapult" },
				{ "TT_Catapult.Name", "ETowerType::TT_Catapult" },
				{ "TT_MAX.DisplayName", "DefaultMax" },
				{ "TT_MAX.Name", "ETowerType::TT_MAX" },
				{ "TT_Turret.DisplayName", "Turret" },
				{ "TT_Turret.Name", "ETowerType::TT_Turret" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_TowerDefense,
				nullptr,
				"ETowerType",
				"ETowerType",
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
	static UEnum* ETowerPositionTargeting_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_TowerDefense_ETowerPositionTargeting, Z_Construct_UPackage__Script_TowerDefense(), TEXT("ETowerPositionTargeting"));
		}
		return Singleton;
	}
	template<> TOWERDEFENSE_API UEnum* StaticEnum<ETowerPositionTargeting>()
	{
		return ETowerPositionTargeting_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETowerPositionTargeting(ETowerPositionTargeting_StaticEnum, TEXT("/Script/TowerDefense"), TEXT("ETowerPositionTargeting"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_TowerDefense_ETowerPositionTargeting_Hash() { return 2875406228U; }
	UEnum* Z_Construct_UEnum_TowerDefense_ETowerPositionTargeting()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_TowerDefense();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETowerPositionTargeting"), 0, Get_Z_Construct_UEnum_TowerDefense_ETowerPositionTargeting_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETowerPositionTargeting::TPT_First", (int64)ETowerPositionTargeting::TPT_First },
				{ "ETowerPositionTargeting::TPT_Last", (int64)ETowerPositionTargeting::TPT_Last },
				{ "ETowerPositionTargeting::TPT_Strongest", (int64)ETowerPositionTargeting::TPT_Strongest },
				{ "ETowerPositionTargeting::TPT_Weakest", (int64)ETowerPositionTargeting::TPT_Weakest },
				{ "ETowerPositionTargeting::TPT_MAX", (int64)ETowerPositionTargeting::TPT_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "DefaultTower.h" },
				{ "TPT_First.DisplayName", "First" },
				{ "TPT_First.Name", "ETowerPositionTargeting::TPT_First" },
				{ "TPT_Last.DisplayName", "Last" },
				{ "TPT_Last.Name", "ETowerPositionTargeting::TPT_Last" },
				{ "TPT_MAX.DisplayName", "DefaultMax" },
				{ "TPT_MAX.Name", "ETowerPositionTargeting::TPT_MAX" },
				{ "TPT_Strongest.DisplayName", "Strongest" },
				{ "TPT_Strongest.Name", "ETowerPositionTargeting::TPT_Strongest" },
				{ "TPT_Weakest.DisplayName", "Weakest" },
				{ "TPT_Weakest.Name", "ETowerPositionTargeting::TPT_Weakest" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_TowerDefense,
				nullptr,
				"ETowerPositionTargeting",
				"ETowerPositionTargeting",
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
	DEFINE_FUNCTION(ADefaultTower::execTowerSelected)
	{
		P_GET_OBJECT(AActor,Z_Param_TouchedActor);
		P_GET_STRUCT(FKey,Z_Param_ButtonPressed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TowerSelected(Z_Param_TouchedActor,Z_Param_ButtonPressed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADefaultTower::execIncreaseFireRate)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->IncreaseFireRate(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADefaultTower::execIncreaseRange)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->IncreaseRange(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADefaultTower::execIncreaseFireDamage)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->IncreaseFireDamage(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADefaultTower::execIncreaseDamage)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->IncreaseDamage(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADefaultTower::execShoot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Shoot();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADefaultTower::execGetNewTarget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetNewTarget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADefaultTower::execOnRangeOverlapEnd)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRangeOverlapEnd(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADefaultTower::execOnRangeOverlapBegin)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRangeOverlapBegin(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	void ADefaultTower::StaticRegisterNativesADefaultTower()
	{
		UClass* Class = ADefaultTower::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetNewTarget", &ADefaultTower::execGetNewTarget },
			{ "IncreaseDamage", &ADefaultTower::execIncreaseDamage },
			{ "IncreaseFireDamage", &ADefaultTower::execIncreaseFireDamage },
			{ "IncreaseFireRate", &ADefaultTower::execIncreaseFireRate },
			{ "IncreaseRange", &ADefaultTower::execIncreaseRange },
			{ "OnRangeOverlapBegin", &ADefaultTower::execOnRangeOverlapBegin },
			{ "OnRangeOverlapEnd", &ADefaultTower::execOnRangeOverlapEnd },
			{ "Shoot", &ADefaultTower::execShoot },
			{ "TowerSelected", &ADefaultTower::execTowerSelected },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADefaultTower_GetNewTarget_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADefaultTower_GetNewTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DefaultTower.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADefaultTower_GetNewTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADefaultTower, nullptr, "GetNewTarget", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADefaultTower_GetNewTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADefaultTower_GetNewTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADefaultTower_GetNewTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADefaultTower_GetNewTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADefaultTower_IncreaseDamage_Statics
	{
		struct DefaultTower_eventIncreaseDamage_Parms
		{
			int32 Value;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADefaultTower_IncreaseDamage_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DefaultTower_eventIncreaseDamage_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADefaultTower_IncreaseDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADefaultTower_IncreaseDamage_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADefaultTower_IncreaseDamage_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Functions for increasing stats\n" },
		{ "ModuleRelativePath", "DefaultTower.h" },
		{ "ToolTip", "Functions for increasing stats" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADefaultTower_IncreaseDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADefaultTower, nullptr, "IncreaseDamage", nullptr, nullptr, sizeof(DefaultTower_eventIncreaseDamage_Parms), Z_Construct_UFunction_ADefaultTower_IncreaseDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADefaultTower_IncreaseDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADefaultTower_IncreaseDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADefaultTower_IncreaseDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADefaultTower_IncreaseDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADefaultTower_IncreaseDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADefaultTower_IncreaseFireDamage_Statics
	{
		struct DefaultTower_eventIncreaseFireDamage_Parms
		{
			int32 Value;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADefaultTower_IncreaseFireDamage_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DefaultTower_eventIncreaseFireDamage_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADefaultTower_IncreaseFireDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADefaultTower_IncreaseFireDamage_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADefaultTower_IncreaseFireDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DefaultTower.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADefaultTower_IncreaseFireDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADefaultTower, nullptr, "IncreaseFireDamage", nullptr, nullptr, sizeof(DefaultTower_eventIncreaseFireDamage_Parms), Z_Construct_UFunction_ADefaultTower_IncreaseFireDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADefaultTower_IncreaseFireDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADefaultTower_IncreaseFireDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADefaultTower_IncreaseFireDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADefaultTower_IncreaseFireDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADefaultTower_IncreaseFireDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADefaultTower_IncreaseFireRate_Statics
	{
		struct DefaultTower_eventIncreaseFireRate_Parms
		{
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADefaultTower_IncreaseFireRate_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DefaultTower_eventIncreaseFireRate_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADefaultTower_IncreaseFireRate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADefaultTower_IncreaseFireRate_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADefaultTower_IncreaseFireRate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DefaultTower.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADefaultTower_IncreaseFireRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADefaultTower, nullptr, "IncreaseFireRate", nullptr, nullptr, sizeof(DefaultTower_eventIncreaseFireRate_Parms), Z_Construct_UFunction_ADefaultTower_IncreaseFireRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADefaultTower_IncreaseFireRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADefaultTower_IncreaseFireRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADefaultTower_IncreaseFireRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADefaultTower_IncreaseFireRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADefaultTower_IncreaseFireRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADefaultTower_IncreaseRange_Statics
	{
		struct DefaultTower_eventIncreaseRange_Parms
		{
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADefaultTower_IncreaseRange_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DefaultTower_eventIncreaseRange_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADefaultTower_IncreaseRange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADefaultTower_IncreaseRange_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADefaultTower_IncreaseRange_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DefaultTower.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADefaultTower_IncreaseRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADefaultTower, nullptr, "IncreaseRange", nullptr, nullptr, sizeof(DefaultTower_eventIncreaseRange_Parms), Z_Construct_UFunction_ADefaultTower_IncreaseRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADefaultTower_IncreaseRange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADefaultTower_IncreaseRange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADefaultTower_IncreaseRange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADefaultTower_IncreaseRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADefaultTower_IncreaseRange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADefaultTower_OnRangeOverlapBegin_Statics
	{
		struct DefaultTower_eventOnRangeOverlapBegin_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADefaultTower_OnRangeOverlapBegin_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADefaultTower_OnRangeOverlapBegin_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DefaultTower_eventOnRangeOverlapBegin_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ADefaultTower_OnRangeOverlapBegin_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADefaultTower_OnRangeOverlapBegin_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADefaultTower_OnRangeOverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DefaultTower_eventOnRangeOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADefaultTower_OnRangeOverlapBegin_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADefaultTower_OnRangeOverlapBegin_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DefaultTower_eventOnRangeOverlapBegin_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ADefaultTower_OnRangeOverlapBegin_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADefaultTower_OnRangeOverlapBegin_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADefaultTower_OnRangeOverlapBegin_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DefaultTower_eventOnRangeOverlapBegin_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ADefaultTower_OnRangeOverlapBegin_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((DefaultTower_eventOnRangeOverlapBegin_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADefaultTower_OnRangeOverlapBegin_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DefaultTower_eventOnRangeOverlapBegin_Parms), &Z_Construct_UFunction_ADefaultTower_OnRangeOverlapBegin_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADefaultTower_OnRangeOverlapBegin_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADefaultTower_OnRangeOverlapBegin_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DefaultTower_eventOnRangeOverlapBegin_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ADefaultTower_OnRangeOverlapBegin_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADefaultTower_OnRangeOverlapBegin_Statics::NewProp_SweepResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADefaultTower_OnRangeOverlapBegin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADefaultTower_OnRangeOverlapBegin_Statics::NewProp_OverlappedComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADefaultTower_OnRangeOverlapBegin_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADefaultTower_OnRangeOverlapBegin_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADefaultTower_OnRangeOverlapBegin_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADefaultTower_OnRangeOverlapBegin_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADefaultTower_OnRangeOverlapBegin_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADefaultTower_OnRangeOverlapBegin_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Functions called when actors overlap with TowerRangeSphere\n" },
		{ "ModuleRelativePath", "DefaultTower.h" },
		{ "ToolTip", "Functions called when actors overlap with TowerRangeSphere" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADefaultTower_OnRangeOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADefaultTower, nullptr, "OnRangeOverlapBegin", nullptr, nullptr, sizeof(DefaultTower_eventOnRangeOverlapBegin_Parms), Z_Construct_UFunction_ADefaultTower_OnRangeOverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADefaultTower_OnRangeOverlapBegin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADefaultTower_OnRangeOverlapBegin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADefaultTower_OnRangeOverlapBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADefaultTower_OnRangeOverlapBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADefaultTower_OnRangeOverlapBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADefaultTower_OnRangeOverlapEnd_Statics
	{
		struct DefaultTower_eventOnRangeOverlapEnd_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADefaultTower_OnRangeOverlapEnd_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADefaultTower_OnRangeOverlapEnd_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DefaultTower_eventOnRangeOverlapEnd_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ADefaultTower_OnRangeOverlapEnd_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADefaultTower_OnRangeOverlapEnd_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADefaultTower_OnRangeOverlapEnd_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DefaultTower_eventOnRangeOverlapEnd_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADefaultTower_OnRangeOverlapEnd_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADefaultTower_OnRangeOverlapEnd_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DefaultTower_eventOnRangeOverlapEnd_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ADefaultTower_OnRangeOverlapEnd_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADefaultTower_OnRangeOverlapEnd_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADefaultTower_OnRangeOverlapEnd_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DefaultTower_eventOnRangeOverlapEnd_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADefaultTower_OnRangeOverlapEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADefaultTower_OnRangeOverlapEnd_Statics::NewProp_OverlappedComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADefaultTower_OnRangeOverlapEnd_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADefaultTower_OnRangeOverlapEnd_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADefaultTower_OnRangeOverlapEnd_Statics::NewProp_OtherBodyIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADefaultTower_OnRangeOverlapEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DefaultTower.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADefaultTower_OnRangeOverlapEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADefaultTower, nullptr, "OnRangeOverlapEnd", nullptr, nullptr, sizeof(DefaultTower_eventOnRangeOverlapEnd_Parms), Z_Construct_UFunction_ADefaultTower_OnRangeOverlapEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADefaultTower_OnRangeOverlapEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADefaultTower_OnRangeOverlapEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADefaultTower_OnRangeOverlapEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADefaultTower_OnRangeOverlapEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADefaultTower_OnRangeOverlapEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADefaultTower_Shoot_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADefaultTower_Shoot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DefaultTower.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADefaultTower_Shoot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADefaultTower, nullptr, "Shoot", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADefaultTower_Shoot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADefaultTower_Shoot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADefaultTower_Shoot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADefaultTower_Shoot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADefaultTower_TowerSelected_Statics
	{
		struct DefaultTower_eventTowerSelected_Parms
		{
			AActor* TouchedActor;
			FKey ButtonPressed;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TouchedActor;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ButtonPressed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADefaultTower_TowerSelected_Statics::NewProp_TouchedActor = { "TouchedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DefaultTower_eventTowerSelected_Parms, TouchedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADefaultTower_TowerSelected_Statics::NewProp_ButtonPressed = { "ButtonPressed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DefaultTower_eventTowerSelected_Parms, ButtonPressed), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADefaultTower_TowerSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADefaultTower_TowerSelected_Statics::NewProp_TouchedActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADefaultTower_TowerSelected_Statics::NewProp_ButtonPressed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADefaultTower_TowerSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DefaultTower.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADefaultTower_TowerSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADefaultTower, nullptr, "TowerSelected", nullptr, nullptr, sizeof(DefaultTower_eventTowerSelected_Parms), Z_Construct_UFunction_ADefaultTower_TowerSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADefaultTower_TowerSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADefaultTower_TowerSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADefaultTower_TowerSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADefaultTower_TowerSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADefaultTower_TowerSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ADefaultTower_NoRegister()
	{
		return ADefaultTower::StaticClass();
	}
	struct Z_Construct_UClass_ADefaultTower_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TowerMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TowerMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TowerRangeSphere_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TowerRangeSphere;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FiringLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FiringLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Projectile_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Projectile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShootingSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ShootingSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Damage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FireDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FireRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TowerCost_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TowerCost;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentTargetEnemy_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentTargetEnemy;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TowerTargeting_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TowerTargeting_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TowerTargeting;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TowerType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TowerType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TowerType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnemyFilter_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_EnemyFilter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNoOverlappingEnemies_MetaData[];
#endif
		static void NewProp_bNoOverlappingEnemies_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNoOverlappingEnemies;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReloading_MetaData[];
#endif
		static void NewProp_bReloading_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReloading;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GameMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADefaultTower_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TowerDefense,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ADefaultTower_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADefaultTower_GetNewTarget, "GetNewTarget" }, // 4117443659
		{ &Z_Construct_UFunction_ADefaultTower_IncreaseDamage, "IncreaseDamage" }, // 1181451033
		{ &Z_Construct_UFunction_ADefaultTower_IncreaseFireDamage, "IncreaseFireDamage" }, // 3837382682
		{ &Z_Construct_UFunction_ADefaultTower_IncreaseFireRate, "IncreaseFireRate" }, // 4030934644
		{ &Z_Construct_UFunction_ADefaultTower_IncreaseRange, "IncreaseRange" }, // 411700982
		{ &Z_Construct_UFunction_ADefaultTower_OnRangeOverlapBegin, "OnRangeOverlapBegin" }, // 2939746493
		{ &Z_Construct_UFunction_ADefaultTower_OnRangeOverlapEnd, "OnRangeOverlapEnd" }, // 2861145947
		{ &Z_Construct_UFunction_ADefaultTower_Shoot, "Shoot" }, // 3004646099
		{ &Z_Construct_UFunction_ADefaultTower_TowerSelected, "TowerSelected" }, // 2622731798
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefaultTower_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DefaultTower.h" },
		{ "ModuleRelativePath", "DefaultTower.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefaultTower_Statics::NewProp_TowerMesh_MetaData[] = {
		{ "Category", "Tower | Attributes" },
		{ "Comment", "// Declaration of tower components\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DefaultTower.h" },
		{ "ToolTip", "Declaration of tower components" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADefaultTower_Statics::NewProp_TowerMesh = { "TowerMesh", nullptr, (EPropertyFlags)0x001000000009000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADefaultTower, TowerMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADefaultTower_Statics::NewProp_TowerMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultTower_Statics::NewProp_TowerMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefaultTower_Statics::NewProp_TowerRangeSphere_MetaData[] = {
		{ "Category", "Tower | Attributes" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DefaultTower.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADefaultTower_Statics::NewProp_TowerRangeSphere = { "TowerRangeSphere", nullptr, (EPropertyFlags)0x001000000009000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADefaultTower, TowerRangeSphere), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADefaultTower_Statics::NewProp_TowerRangeSphere_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultTower_Statics::NewProp_TowerRangeSphere_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefaultTower_Statics::NewProp_FiringLocation_MetaData[] = {
		{ "Category", "Tower | Attributes" },
		{ "Comment", "// Variables for projectile spawning\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DefaultTower.h" },
		{ "ToolTip", "Variables for projectile spawning" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADefaultTower_Statics::NewProp_FiringLocation = { "FiringLocation", nullptr, (EPropertyFlags)0x001000000009000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADefaultTower, FiringLocation), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADefaultTower_Statics::NewProp_FiringLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultTower_Statics::NewProp_FiringLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefaultTower_Statics::NewProp_Projectile_MetaData[] = {
		{ "Category", "Tower | Attributes" },
		{ "ModuleRelativePath", "DefaultTower.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ADefaultTower_Statics::NewProp_Projectile = { "Projectile", nullptr, (EPropertyFlags)0x0014000000010005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADefaultTower, Projectile), Z_Construct_UClass_ADefaultProjectile_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ADefaultTower_Statics::NewProp_Projectile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultTower_Statics::NewProp_Projectile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefaultTower_Statics::NewProp_ShootingSound_MetaData[] = {
		{ "Category", "Tower | Attributes" },
		{ "ModuleRelativePath", "DefaultTower.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADefaultTower_Statics::NewProp_ShootingSound = { "ShootingSound", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADefaultTower, ShootingSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADefaultTower_Statics::NewProp_ShootingSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultTower_Statics::NewProp_ShootingSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefaultTower_Statics::NewProp_Damage_MetaData[] = {
		{ "Category", "Tower | Statistics" },
		{ "Comment", "// Declaration of tower statistics\n" },
		{ "ModuleRelativePath", "DefaultTower.h" },
		{ "ToolTip", "Declaration of tower statistics" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADefaultTower_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADefaultTower, Damage), METADATA_PARAMS(Z_Construct_UClass_ADefaultTower_Statics::NewProp_Damage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultTower_Statics::NewProp_Damage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefaultTower_Statics::NewProp_FireDamage_MetaData[] = {
		{ "Category", "Tower | Statistics" },
		{ "ModuleRelativePath", "DefaultTower.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADefaultTower_Statics::NewProp_FireDamage = { "FireDamage", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADefaultTower, FireDamage), METADATA_PARAMS(Z_Construct_UClass_ADefaultTower_Statics::NewProp_FireDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultTower_Statics::NewProp_FireDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefaultTower_Statics::NewProp_FireRate_MetaData[] = {
		{ "Category", "Tower | Statistics" },
		{ "ModuleRelativePath", "DefaultTower.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADefaultTower_Statics::NewProp_FireRate = { "FireRate", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADefaultTower, FireRate), METADATA_PARAMS(Z_Construct_UClass_ADefaultTower_Statics::NewProp_FireRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultTower_Statics::NewProp_FireRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefaultTower_Statics::NewProp_TowerCost_MetaData[] = {
		{ "Category", "Tower | Statistics" },
		{ "ModuleRelativePath", "DefaultTower.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADefaultTower_Statics::NewProp_TowerCost = { "TowerCost", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADefaultTower, TowerCost), METADATA_PARAMS(Z_Construct_UClass_ADefaultTower_Statics::NewProp_TowerCost_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultTower_Statics::NewProp_TowerCost_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefaultTower_Statics::NewProp_CurrentTargetEnemy_MetaData[] = {
		{ "Category", "Tower | Combat" },
		{ "Comment", "// Declaration of target\n" },
		{ "ModuleRelativePath", "DefaultTower.h" },
		{ "ToolTip", "Declaration of target" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADefaultTower_Statics::NewProp_CurrentTargetEnemy = { "CurrentTargetEnemy", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADefaultTower, CurrentTargetEnemy), Z_Construct_UClass_ADefaultEnemy_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADefaultTower_Statics::NewProp_CurrentTargetEnemy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultTower_Statics::NewProp_CurrentTargetEnemy_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ADefaultTower_Statics::NewProp_TowerTargeting_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefaultTower_Statics::NewProp_TowerTargeting_MetaData[] = {
		{ "Category", "Tower | Combat" },
		{ "Comment", "// Declaration of enum variables\n" },
		{ "ModuleRelativePath", "DefaultTower.h" },
		{ "ToolTip", "Declaration of enum variables" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ADefaultTower_Statics::NewProp_TowerTargeting = { "TowerTargeting", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADefaultTower, TowerTargeting), Z_Construct_UEnum_TowerDefense_ETowerPositionTargeting, METADATA_PARAMS(Z_Construct_UClass_ADefaultTower_Statics::NewProp_TowerTargeting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultTower_Statics::NewProp_TowerTargeting_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ADefaultTower_Statics::NewProp_TowerType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefaultTower_Statics::NewProp_TowerType_MetaData[] = {
		{ "Category", "Tower | Combat" },
		{ "ModuleRelativePath", "DefaultTower.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ADefaultTower_Statics::NewProp_TowerType = { "TowerType", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADefaultTower, TowerType), Z_Construct_UEnum_TowerDefense_ETowerType, METADATA_PARAMS(Z_Construct_UClass_ADefaultTower_Statics::NewProp_TowerType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultTower_Statics::NewProp_TowerType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefaultTower_Statics::NewProp_EnemyFilter_MetaData[] = {
		{ "ModuleRelativePath", "DefaultTower.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ADefaultTower_Statics::NewProp_EnemyFilter = { "EnemyFilter", nullptr, (EPropertyFlags)0x0014000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADefaultTower, EnemyFilter), Z_Construct_UClass_ADefaultEnemy_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ADefaultTower_Statics::NewProp_EnemyFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultTower_Statics::NewProp_EnemyFilter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefaultTower_Statics::NewProp_bNoOverlappingEnemies_MetaData[] = {
		{ "ModuleRelativePath", "DefaultTower.h" },
	};
#endif
	void Z_Construct_UClass_ADefaultTower_Statics::NewProp_bNoOverlappingEnemies_SetBit(void* Obj)
	{
		((ADefaultTower*)Obj)->bNoOverlappingEnemies = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADefaultTower_Statics::NewProp_bNoOverlappingEnemies = { "bNoOverlappingEnemies", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ADefaultTower), &Z_Construct_UClass_ADefaultTower_Statics::NewProp_bNoOverlappingEnemies_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADefaultTower_Statics::NewProp_bNoOverlappingEnemies_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultTower_Statics::NewProp_bNoOverlappingEnemies_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefaultTower_Statics::NewProp_bReloading_MetaData[] = {
		{ "ModuleRelativePath", "DefaultTower.h" },
	};
#endif
	void Z_Construct_UClass_ADefaultTower_Statics::NewProp_bReloading_SetBit(void* Obj)
	{
		((ADefaultTower*)Obj)->bReloading = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADefaultTower_Statics::NewProp_bReloading = { "bReloading", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ADefaultTower), &Z_Construct_UClass_ADefaultTower_Statics::NewProp_bReloading_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADefaultTower_Statics::NewProp_bReloading_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultTower_Statics::NewProp_bReloading_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefaultTower_Statics::NewProp_GameMode_MetaData[] = {
		{ "Category", "References" },
		{ "ModuleRelativePath", "DefaultTower.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADefaultTower_Statics::NewProp_GameMode = { "GameMode", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADefaultTower, GameMode), Z_Construct_UClass_ATowerDefenseGameMode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADefaultTower_Statics::NewProp_GameMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultTower_Statics::NewProp_GameMode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADefaultTower_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefaultTower_Statics::NewProp_TowerMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefaultTower_Statics::NewProp_TowerRangeSphere,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefaultTower_Statics::NewProp_FiringLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefaultTower_Statics::NewProp_Projectile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefaultTower_Statics::NewProp_ShootingSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefaultTower_Statics::NewProp_Damage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefaultTower_Statics::NewProp_FireDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefaultTower_Statics::NewProp_FireRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefaultTower_Statics::NewProp_TowerCost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefaultTower_Statics::NewProp_CurrentTargetEnemy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefaultTower_Statics::NewProp_TowerTargeting_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefaultTower_Statics::NewProp_TowerTargeting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefaultTower_Statics::NewProp_TowerType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefaultTower_Statics::NewProp_TowerType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefaultTower_Statics::NewProp_EnemyFilter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefaultTower_Statics::NewProp_bNoOverlappingEnemies,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefaultTower_Statics::NewProp_bReloading,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefaultTower_Statics::NewProp_GameMode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADefaultTower_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADefaultTower>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADefaultTower_Statics::ClassParams = {
		&ADefaultTower::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ADefaultTower_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultTower_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADefaultTower_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultTower_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADefaultTower()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADefaultTower_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADefaultTower, 1841971743);
	template<> TOWERDEFENSE_API UClass* StaticClass<ADefaultTower>()
	{
		return ADefaultTower::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADefaultTower(Z_Construct_UClass_ADefaultTower, &ADefaultTower::StaticClass, TEXT("/Script/TowerDefense"), TEXT("ADefaultTower"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADefaultTower);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
