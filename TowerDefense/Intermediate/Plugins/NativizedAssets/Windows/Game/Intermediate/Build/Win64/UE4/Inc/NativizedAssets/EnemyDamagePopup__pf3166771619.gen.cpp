// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/EnemyDamagePopup__pf3166771619.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyDamagePopup__pf3166771619() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UEnemyDamagePopup_C__pf3166771619_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UEnemyDamagePopup_C__pf3166771619();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometry();
	UMG_API UClass* Z_Construct_UClass_UWidgetAnimation_NoRegister();
	TOWERDEFENSE_API UClass* Z_Construct_UClass_ADefaultEnemy_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
// End Cross Module References
	DEFINE_FUNCTION(UEnemyDamagePopup_C__pf3166771619::execbpf__Construct__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__Construct__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEnemyDamagePopup_C__pf3166771619::execbpf__Tick__pf)
	{
		P_GET_STRUCT(FGeometry,Z_Param_bpp__MyGeometry__pf);
		P_GET_PROPERTY(FFloatProperty,Z_Param_bpp__InDeltaTime__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__Tick__pf(Z_Param_bpp__MyGeometry__pf,Z_Param_bpp__InDeltaTime__pf);
		P_NATIVE_END;
	}
	static FName NAME_UEnemyDamagePopup_C__pf3166771619_bpf__Construct__pf = FName(TEXT("Construct"));
	void UEnemyDamagePopup_C__pf3166771619::eventbpf__Construct__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_UEnemyDamagePopup_C__pf3166771619_bpf__Construct__pf),NULL);
	}
	static FName NAME_UEnemyDamagePopup_C__pf3166771619_bpf__Tick__pf = FName(TEXT("Tick"));
	void UEnemyDamagePopup_C__pf3166771619::eventbpf__Tick__pf(FGeometry bpp__MyGeometry__pf, float bpp__InDeltaTime__pf)
	{
		EnemyDamagePopup_C__pf3166771619_eventbpf__Tick__pf_Parms Parms;
		Parms.bpp__MyGeometry__pf=bpp__MyGeometry__pf;
		Parms.bpp__InDeltaTime__pf=bpp__InDeltaTime__pf;
		ProcessEvent(FindFunctionChecked(NAME_UEnemyDamagePopup_C__pf3166771619_bpf__Tick__pf),&Parms);
	}
	void UEnemyDamagePopup_C__pf3166771619::StaticRegisterNativesUEnemyDamagePopup_C__pf3166771619()
	{
		UClass* Class = UEnemyDamagePopup_C__pf3166771619::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Construct", &UEnemyDamagePopup_C__pf3166771619::execbpf__Construct__pf },
			{ "Tick", &UEnemyDamagePopup_C__pf3166771619::execbpf__Tick__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEnemyDamagePopup_C__pf3166771619_bpf__Construct__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnemyDamagePopup_C__pf3166771619_bpf__Construct__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "User Interface" },
		{ "Comment", "/**t * Called after the underlying slate widget is constructed.  Depending on how the slate object is usedt * this event may be called multiple times due to adding and removing from the hierarchy.t * If you need a true called-once-when-created event, use OnInitialized.t */" },
		{ "CppFromBpEvent", "" },
		{ "Keywords", "Begin Play" },
		{ "ModuleRelativePath", "Public/EnemyDamagePopup__pf3166771619.h" },
		{ "OverrideNativeName", "Construct" },
		{ "ToolTip", "Called after the underlying slate widget is constructed.  Depending on how the slate object is usedthis event may be called multiple times due to adding and removing from the hierarchy.If you need a true called-once-when-created event, use OnInitialized." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnemyDamagePopup_C__pf3166771619_bpf__Construct__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnemyDamagePopup_C__pf3166771619, nullptr, "Construct", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x00020C08, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEnemyDamagePopup_C__pf3166771619_bpf__Construct__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemyDamagePopup_C__pf3166771619_bpf__Construct__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEnemyDamagePopup_C__pf3166771619_bpf__Construct__pf()
	{
		UObject* Outer = Z_Construct_UClass_UEnemyDamagePopup_C__pf3166771619();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "Construct" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEnemyDamagePopup_C__pf3166771619_bpf__Construct__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEnemyDamagePopup_C__pf3166771619_bpf__Tick__pf_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpp__MyGeometry__pf;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpp__InDeltaTime__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnemyDamagePopup_C__pf3166771619_bpf__Tick__pf_Statics::NewProp_bpp__MyGeometry__pf = { "bpp__MyGeometry__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(EnemyDamagePopup_C__pf3166771619_eventbpf__Tick__pf_Parms, bpp__MyGeometry__pf), Z_Construct_UScriptStruct_FGeometry, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEnemyDamagePopup_C__pf3166771619_bpf__Tick__pf_Statics::NewProp_bpp__InDeltaTime__pf = { "bpp__InDeltaTime__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient, 1, STRUCT_OFFSET(EnemyDamagePopup_C__pf3166771619_eventbpf__Tick__pf_Parms, bpp__InDeltaTime__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnemyDamagePopup_C__pf3166771619_bpf__Tick__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnemyDamagePopup_C__pf3166771619_bpf__Tick__pf_Statics::NewProp_bpp__MyGeometry__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnemyDamagePopup_C__pf3166771619_bpf__Tick__pf_Statics::NewProp_bpp__InDeltaTime__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnemyDamagePopup_C__pf3166771619_bpf__Tick__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "User Interface" },
		{ "Comment", "/**t * Ticks this widget.  Override in derived classes, but always call the parent implementation.t *t * @param  MyGeometry The space allotted for this widgett * @param  InDeltaTime  Real time passed since last tickt */" },
		{ "CppFromBpEvent", "" },
		{ "ModuleRelativePath", "Public/EnemyDamagePopup__pf3166771619.h" },
		{ "OverrideNativeName", "Tick" },
		{ "ToolTip", "Ticks this widget.  Override in derived classes, but always call the parent implementation.@param  MyGeometry The space allotted for this widget@param  InDeltaTime  Real time passed since last tick" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnemyDamagePopup_C__pf3166771619_bpf__Tick__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnemyDamagePopup_C__pf3166771619, nullptr, "Tick", nullptr, nullptr, sizeof(EnemyDamagePopup_C__pf3166771619_eventbpf__Tick__pf_Parms), Z_Construct_UFunction_UEnemyDamagePopup_C__pf3166771619_bpf__Tick__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemyDamagePopup_C__pf3166771619_bpf__Tick__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020C08, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEnemyDamagePopup_C__pf3166771619_bpf__Tick__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemyDamagePopup_C__pf3166771619_bpf__Tick__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEnemyDamagePopup_C__pf3166771619_bpf__Tick__pf()
	{
		UObject* Outer = Z_Construct_UClass_UEnemyDamagePopup_C__pf3166771619();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "Tick" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEnemyDamagePopup_C__pf3166771619_bpf__Tick__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEnemyDamagePopup_C__pf3166771619_NoRegister()
	{
		return UEnemyDamagePopup_C__pf3166771619::StaticClass();
	}
	struct Z_Construct_UClass_UEnemyDamagePopup_C__pf3166771619_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__MoveAndFadeText__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__MoveAndFadeText__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Enemy__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Enemy__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__AnimationLength__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__AnimationLength__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_MyGeometry__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_Event_MyGeometry__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_InDeltaTime__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__K2Node_Event_InDeltaTime__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_ProjectWorldLocationToScreen_ScreenLocation__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_ProjectWorldLocationToScreen_ScreenLocation__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnemyDamagePopup_C__pf3166771619_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEnemyDamagePopup_C__pf3166771619_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEnemyDamagePopup_C__pf3166771619_bpf__Construct__pf, "Construct" }, // 4292805443
		{ &Z_Construct_UFunction_UEnemyDamagePopup_C__pf3166771619_bpf__Tick__pf, "Tick" }, // 2712144819
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyDamagePopup_C__pf3166771619_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EnemyDamagePopup__pf3166771619.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EnemyDamagePopup__pf3166771619.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "EnemyDamagePopup_C" },
		{ "ReplaceConverted", "/Game/UserInterface/EnemyDamagePopup.EnemyDamagePopup_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyDamagePopup_C__pf3166771619_Statics::NewProp_bpv__MoveAndFadeText__pf_MetaData[] = {
		{ "Category", "Animations" },
		{ "DisplayName", "MoveAndFadeText" },
		{ "ModuleRelativePath", "Public/EnemyDamagePopup__pf3166771619.h" },
		{ "OverrideNativeName", "MoveAndFadeText" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnemyDamagePopup_C__pf3166771619_Statics::NewProp_bpv__MoveAndFadeText__pf = { "MoveAndFadeText", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemyDamagePopup_C__pf3166771619, bpv__MoveAndFadeText__pf), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEnemyDamagePopup_C__pf3166771619_Statics::NewProp_bpv__MoveAndFadeText__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyDamagePopup_C__pf3166771619_Statics::NewProp_bpv__MoveAndFadeText__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyDamagePopup_C__pf3166771619_Statics::NewProp_bpv__Enemy__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Enemy" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/EnemyDamagePopup__pf3166771619.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Enemy" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnemyDamagePopup_C__pf3166771619_Statics::NewProp_bpv__Enemy__pf = { "Enemy", nullptr, (EPropertyFlags)0x0011000000000805, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemyDamagePopup_C__pf3166771619, bpv__Enemy__pf), Z_Construct_UClass_ADefaultEnemy_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEnemyDamagePopup_C__pf3166771619_Statics::NewProp_bpv__Enemy__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyDamagePopup_C__pf3166771619_Statics::NewProp_bpv__Enemy__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyDamagePopup_C__pf3166771619_Statics::NewProp_bpv__AnimationLength__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Animation Length" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/EnemyDamagePopup__pf3166771619.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "AnimationLength" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnemyDamagePopup_C__pf3166771619_Statics::NewProp_bpv__AnimationLength__pf = { "AnimationLength", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemyDamagePopup_C__pf3166771619, bpv__AnimationLength__pf), METADATA_PARAMS(Z_Construct_UClass_UEnemyDamagePopup_C__pf3166771619_Statics::NewProp_bpv__AnimationLength__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyDamagePopup_C__pf3166771619_Statics::NewProp_bpv__AnimationLength__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyDamagePopup_C__pf3166771619_Statics::NewProp_b0l__K2Node_Event_MyGeometry__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/EnemyDamagePopup__pf3166771619.h" },
		{ "OverrideNativeName", "K2Node_Event_MyGeometry" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnemyDamagePopup_C__pf3166771619_Statics::NewProp_b0l__K2Node_Event_MyGeometry__pf = { "K2Node_Event_MyGeometry", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemyDamagePopup_C__pf3166771619, b0l__K2Node_Event_MyGeometry__pf), Z_Construct_UScriptStruct_FGeometry, METADATA_PARAMS(Z_Construct_UClass_UEnemyDamagePopup_C__pf3166771619_Statics::NewProp_b0l__K2Node_Event_MyGeometry__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyDamagePopup_C__pf3166771619_Statics::NewProp_b0l__K2Node_Event_MyGeometry__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyDamagePopup_C__pf3166771619_Statics::NewProp_b0l__K2Node_Event_InDeltaTime__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/EnemyDamagePopup__pf3166771619.h" },
		{ "OverrideNativeName", "K2Node_Event_InDeltaTime" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnemyDamagePopup_C__pf3166771619_Statics::NewProp_b0l__K2Node_Event_InDeltaTime__pf = { "K2Node_Event_InDeltaTime", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemyDamagePopup_C__pf3166771619, b0l__K2Node_Event_InDeltaTime__pf), METADATA_PARAMS(Z_Construct_UClass_UEnemyDamagePopup_C__pf3166771619_Statics::NewProp_b0l__K2Node_Event_InDeltaTime__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyDamagePopup_C__pf3166771619_Statics::NewProp_b0l__K2Node_Event_InDeltaTime__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyDamagePopup_C__pf3166771619_Statics::NewProp_b0l__CallFunc_ProjectWorldLocationToScreen_ScreenLocation__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/EnemyDamagePopup__pf3166771619.h" },
		{ "OverrideNativeName", "CallFunc_ProjectWorldLocationToScreen_ScreenLocation" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnemyDamagePopup_C__pf3166771619_Statics::NewProp_b0l__CallFunc_ProjectWorldLocationToScreen_ScreenLocation__pf = { "CallFunc_ProjectWorldLocationToScreen_ScreenLocation", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemyDamagePopup_C__pf3166771619, b0l__CallFunc_ProjectWorldLocationToScreen_ScreenLocation__pf), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UEnemyDamagePopup_C__pf3166771619_Statics::NewProp_b0l__CallFunc_ProjectWorldLocationToScreen_ScreenLocation__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyDamagePopup_C__pf3166771619_Statics::NewProp_b0l__CallFunc_ProjectWorldLocationToScreen_ScreenLocation__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnemyDamagePopup_C__pf3166771619_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyDamagePopup_C__pf3166771619_Statics::NewProp_bpv__MoveAndFadeText__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyDamagePopup_C__pf3166771619_Statics::NewProp_bpv__Enemy__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyDamagePopup_C__pf3166771619_Statics::NewProp_bpv__AnimationLength__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyDamagePopup_C__pf3166771619_Statics::NewProp_b0l__K2Node_Event_MyGeometry__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyDamagePopup_C__pf3166771619_Statics::NewProp_b0l__K2Node_Event_InDeltaTime__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyDamagePopup_C__pf3166771619_Statics::NewProp_b0l__CallFunc_ProjectWorldLocationToScreen_ScreenLocation__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnemyDamagePopup_C__pf3166771619_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnemyDamagePopup_C__pf3166771619>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEnemyDamagePopup_C__pf3166771619_Statics::ClassParams = {
		&UEnemyDamagePopup_C__pf3166771619::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEnemyDamagePopup_C__pf3166771619_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyDamagePopup_C__pf3166771619_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEnemyDamagePopup_C__pf3166771619_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyDamagePopup_C__pf3166771619_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnemyDamagePopup_C__pf3166771619()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/UserInterface/EnemyDamagePopup"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("EnemyDamagePopup_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEnemyDamagePopup_C__pf3166771619_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(UEnemyDamagePopup_C__pf3166771619, TEXT("EnemyDamagePopup_C"), 1199789601);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<UEnemyDamagePopup_C__pf3166771619>()
	{
		return UEnemyDamagePopup_C__pf3166771619::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEnemyDamagePopup_C__pf3166771619(Z_Construct_UClass_UEnemyDamagePopup_C__pf3166771619, &UEnemyDamagePopup_C__pf3166771619::StaticClass, TEXT("/Game/UserInterface/EnemyDamagePopup"), TEXT("EnemyDamagePopup_C"), true, TEXT("/Game/UserInterface/EnemyDamagePopup"), TEXT("/Game/UserInterface/EnemyDamagePopup.EnemyDamagePopup_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnemyDamagePopup_C__pf3166771619);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
