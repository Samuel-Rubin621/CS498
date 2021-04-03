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
	TOWERDEFENSE_API UEnum* Z_Construct_UEnum_TowerDefense_ETowerPositionTargeting();
	UPackage* Z_Construct_UPackage__Script_TowerDefense();
	TOWERDEFENSE_API UClass* Z_Construct_UClass_ADefaultTower_NoRegister();
	TOWERDEFENSE_API UClass* Z_Construct_UClass_ADefaultTower();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	TOWERDEFENSE_API UClass* Z_Construct_UClass_ADefaultProjectile_NoRegister();
	TOWERDEFENSE_API UClass* Z_Construct_UClass_ADefaultEnemy_NoRegister();
// End Cross Module References
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
			{ "OnRangeOverlapBegin", &ADefaultTower::execOnRangeOverlapBegin },
			{ "OnRangeOverlapEnd", &ADefaultTower::execOnRangeOverlapEnd },
			{ "Shoot", &ADefaultTower::execShoot },
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TowerDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TowerDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TowerRangeValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TowerRangeValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TowerFireDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TowerFireDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentTargetEnemy_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentTargetEnemy;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TowerTargeting_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TowerTargeting_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TowerTargeting;
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
		{ &Z_Construct_UFunction_ADefaultTower_OnRangeOverlapBegin, "OnRangeOverlapBegin" }, // 2939746493
		{ &Z_Construct_UFunction_ADefaultTower_OnRangeOverlapEnd, "OnRangeOverlapEnd" }, // 2861145947
		{ &Z_Construct_UFunction_ADefaultTower_Shoot, "Shoot" }, // 3004646099
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
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DefaultTower.h" },
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefaultTower_Statics::NewProp_TowerDamage_MetaData[] = {
		{ "Category", "Tower | Statistics" },
		{ "Comment", "// Declaration of tower statistics\n" },
		{ "ModuleRelativePath", "DefaultTower.h" },
		{ "ToolTip", "Declaration of tower statistics" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADefaultTower_Statics::NewProp_TowerDamage = { "TowerDamage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADefaultTower, TowerDamage), METADATA_PARAMS(Z_Construct_UClass_ADefaultTower_Statics::NewProp_TowerDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultTower_Statics::NewProp_TowerDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefaultTower_Statics::NewProp_TowerRangeValue_MetaData[] = {
		{ "Category", "Tower | Statistics" },
		{ "ModuleRelativePath", "DefaultTower.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADefaultTower_Statics::NewProp_TowerRangeValue = { "TowerRangeValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADefaultTower, TowerRangeValue), METADATA_PARAMS(Z_Construct_UClass_ADefaultTower_Statics::NewProp_TowerRangeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultTower_Statics::NewProp_TowerRangeValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefaultTower_Statics::NewProp_TowerFireDelay_MetaData[] = {
		{ "Category", "Tower | Statistics" },
		{ "ModuleRelativePath", "DefaultTower.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADefaultTower_Statics::NewProp_TowerFireDelay = { "TowerFireDelay", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADefaultTower, TowerFireDelay), METADATA_PARAMS(Z_Construct_UClass_ADefaultTower_Statics::NewProp_TowerFireDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultTower_Statics::NewProp_TowerFireDelay_MetaData)) };
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
		{ "ModuleRelativePath", "DefaultTower.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ADefaultTower_Statics::NewProp_TowerTargeting = { "TowerTargeting", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADefaultTower, TowerTargeting), Z_Construct_UEnum_TowerDefense_ETowerPositionTargeting, METADATA_PARAMS(Z_Construct_UClass_ADefaultTower_Statics::NewProp_TowerTargeting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultTower_Statics::NewProp_TowerTargeting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefaultTower_Statics::NewProp_EnemyFilter_MetaData[] = {
		{ "Category", "Tower | Combat" },
		{ "ModuleRelativePath", "DefaultTower.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ADefaultTower_Statics::NewProp_EnemyFilter = { "EnemyFilter", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADefaultTower, EnemyFilter), Z_Construct_UClass_ADefaultEnemy_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ADefaultTower_Statics::NewProp_EnemyFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultTower_Statics::NewProp_EnemyFilter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefaultTower_Statics::NewProp_bNoOverlappingEnemies_MetaData[] = {
		{ "Category", "Tower | Combat" },
		{ "ModuleRelativePath", "DefaultTower.h" },
	};
#endif
	void Z_Construct_UClass_ADefaultTower_Statics::NewProp_bNoOverlappingEnemies_SetBit(void* Obj)
	{
		((ADefaultTower*)Obj)->bNoOverlappingEnemies = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADefaultTower_Statics::NewProp_bNoOverlappingEnemies = { "bNoOverlappingEnemies", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ADefaultTower), &Z_Construct_UClass_ADefaultTower_Statics::NewProp_bNoOverlappingEnemies_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADefaultTower_Statics::NewProp_bNoOverlappingEnemies_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultTower_Statics::NewProp_bNoOverlappingEnemies_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefaultTower_Statics::NewProp_bReloading_MetaData[] = {
		{ "Category", "Tower | Combat" },
		{ "ModuleRelativePath", "DefaultTower.h" },
	};
#endif
	void Z_Construct_UClass_ADefaultTower_Statics::NewProp_bReloading_SetBit(void* Obj)
	{
		((ADefaultTower*)Obj)->bReloading = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADefaultTower_Statics::NewProp_bReloading = { "bReloading", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ADefaultTower), &Z_Construct_UClass_ADefaultTower_Statics::NewProp_bReloading_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADefaultTower_Statics::NewProp_bReloading_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultTower_Statics::NewProp_bReloading_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADefaultTower_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefaultTower_Statics::NewProp_TowerMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefaultTower_Statics::NewProp_TowerRangeSphere,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefaultTower_Statics::NewProp_FiringLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefaultTower_Statics::NewProp_Projectile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefaultTower_Statics::NewProp_TowerDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefaultTower_Statics::NewProp_TowerRangeValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefaultTower_Statics::NewProp_TowerFireDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefaultTower_Statics::NewProp_CurrentTargetEnemy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefaultTower_Statics::NewProp_TowerTargeting_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefaultTower_Statics::NewProp_TowerTargeting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefaultTower_Statics::NewProp_EnemyFilter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefaultTower_Statics::NewProp_bNoOverlappingEnemies,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefaultTower_Statics::NewProp_bReloading,
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
	IMPLEMENT_CLASS(ADefaultTower, 4023456375);
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
