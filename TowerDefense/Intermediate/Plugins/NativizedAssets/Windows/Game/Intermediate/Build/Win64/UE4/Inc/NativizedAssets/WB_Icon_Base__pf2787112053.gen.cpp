// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/WB_Icon_Base__pf2787112053.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWB_Icon_Base__pf2787112053() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	NATIVIZEDASSETS_API UEnum* Z_Construct_UEnum_NativizedAssets_E__E_GlassMaskTypes__pf();
	NATIVIZEDASSETS_API UEnum* Z_Construct_UEnum_NativizedAssets_E__E_IconBaseTypes__pf();
	NATIVIZEDASSETS_API UEnum* Z_Construct_UEnum_NativizedAssets_E__E_Sizes__pf();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	UMG_API UScriptStruct* Z_Construct_UScriptStruct_FWidgetTransform();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateColor();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateFontInfo();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
// End Cross Module References
	DEFINE_FUNCTION(UWB_Icon_Base_C__pf2787112053::execbpf__PreConstruct__pf)
	{
		P_GET_UBOOL(Z_Param_bpp__IsDesignTime__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__PreConstruct__pf(Z_Param_bpp__IsDesignTime__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWB_Icon_Base_C__pf2787112053::execbpf__Update__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__Update__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWB_Icon_Base_C__pf2787112053::execbpf__ExecuteUbergraph_WB_Icon_Base__pf_0)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_bpp__EntryPoint__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ExecuteUbergraph_WB_Icon_Base__pf_0(Z_Param_bpp__EntryPoint__pf);
		P_NATIVE_END;
	}
	static FName NAME_UWB_Icon_Base_C__pf2787112053_bpf__PreConstruct__pf = FName(TEXT("PreConstruct"));
	void UWB_Icon_Base_C__pf2787112053::eventbpf__PreConstruct__pf(bool bpp__IsDesignTime__pf)
	{
		WB_Icon_Base_C__pf2787112053_eventbpf__PreConstruct__pf_Parms Parms;
		Parms.bpp__IsDesignTime__pf=bpp__IsDesignTime__pf ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UWB_Icon_Base_C__pf2787112053_bpf__PreConstruct__pf),&Parms);
	}
	void UWB_Icon_Base_C__pf2787112053::StaticRegisterNativesUWB_Icon_Base_C__pf2787112053()
	{
		UClass* Class = UWB_Icon_Base_C__pf2787112053::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ExecuteUbergraph_WB_Icon_Base_0", &UWB_Icon_Base_C__pf2787112053::execbpf__ExecuteUbergraph_WB_Icon_Base__pf_0 },
			{ "PreConstruct", &UWB_Icon_Base_C__pf2787112053::execbpf__PreConstruct__pf },
			{ "Update", &UWB_Icon_Base_C__pf2787112053::execbpf__Update__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWB_Icon_Base_C__pf2787112053_bpf__ExecuteUbergraph_WB_Icon_Base__pf_0_Statics
	{
		struct WB_Icon_Base_C__pf2787112053_eventbpf__ExecuteUbergraph_WB_Icon_Base__pf_0_Parms
		{
			int32 bpp__EntryPoint__pf;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpp__EntryPoint__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWB_Icon_Base_C__pf2787112053_bpf__ExecuteUbergraph_WB_Icon_Base__pf_0_Statics::NewProp_bpp__EntryPoint__pf = { "bpp__EntryPoint__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(WB_Icon_Base_C__pf2787112053_eventbpf__ExecuteUbergraph_WB_Icon_Base__pf_0_Parms, bpp__EntryPoint__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWB_Icon_Base_C__pf2787112053_bpf__ExecuteUbergraph_WB_Icon_Base__pf_0_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWB_Icon_Base_C__pf2787112053_bpf__ExecuteUbergraph_WB_Icon_Base__pf_0_Statics::NewProp_bpp__EntryPoint__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWB_Icon_Base_C__pf2787112053_bpf__ExecuteUbergraph_WB_Icon_Base__pf_0_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "ExecuteUbergraph_WB_Icon_Base_0" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWB_Icon_Base_C__pf2787112053_bpf__ExecuteUbergraph_WB_Icon_Base__pf_0_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053, nullptr, "ExecuteUbergraph_WB_Icon_Base_0", nullptr, nullptr, sizeof(WB_Icon_Base_C__pf2787112053_eventbpf__ExecuteUbergraph_WB_Icon_Base__pf_0_Parms), Z_Construct_UFunction_UWB_Icon_Base_C__pf2787112053_bpf__ExecuteUbergraph_WB_Icon_Base__pf_0_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWB_Icon_Base_C__pf2787112053_bpf__ExecuteUbergraph_WB_Icon_Base__pf_0_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWB_Icon_Base_C__pf2787112053_bpf__ExecuteUbergraph_WB_Icon_Base__pf_0_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWB_Icon_Base_C__pf2787112053_bpf__ExecuteUbergraph_WB_Icon_Base__pf_0_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWB_Icon_Base_C__pf2787112053_bpf__ExecuteUbergraph_WB_Icon_Base__pf_0()
	{
		UObject* Outer = Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ExecuteUbergraph_WB_Icon_Base_0" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWB_Icon_Base_C__pf2787112053_bpf__ExecuteUbergraph_WB_Icon_Base__pf_0_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWB_Icon_Base_C__pf2787112053_bpf__PreConstruct__pf_Statics
	{
		static void NewProp_bpp__IsDesignTime__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpp__IsDesignTime__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UWB_Icon_Base_C__pf2787112053_bpf__PreConstruct__pf_Statics::NewProp_bpp__IsDesignTime__pf_SetBit(void* Obj)
	{
		((WB_Icon_Base_C__pf2787112053_eventbpf__PreConstruct__pf_Parms*)Obj)->bpp__IsDesignTime__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWB_Icon_Base_C__pf2787112053_bpf__PreConstruct__pf_Statics::NewProp_bpp__IsDesignTime__pf = { "bpp__IsDesignTime__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient, 1, sizeof(bool), sizeof(WB_Icon_Base_C__pf2787112053_eventbpf__PreConstruct__pf_Parms), &Z_Construct_UFunction_UWB_Icon_Base_C__pf2787112053_bpf__PreConstruct__pf_Statics::NewProp_bpp__IsDesignTime__pf_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWB_Icon_Base_C__pf2787112053_bpf__PreConstruct__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWB_Icon_Base_C__pf2787112053_bpf__PreConstruct__pf_Statics::NewProp_bpp__IsDesignTime__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWB_Icon_Base_C__pf2787112053_bpf__PreConstruct__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "User Interface" },
		{ "Comment", "/**t * Called by both the game and the editor.  Allows users to run initial setup for their widgets to better previewt * the setup in the designer and since generally that same setup code is required at runtime, it's called theret * as well.t *t * **WARNING**t * This is intended purely for cosmetic updates using locally owned data, you can not safely access any game relatedt * state, if you call something that doesn't expect to be run at editor time, you may crash the editor.t *t * In the event you save the asset with blueprint code that causes a crash on evaluation.  You can turn offt * PreConstruct evaluation in the Widget Designer settings in the Editor Preferences.t */" },
		{ "CppFromBpEvent", "" },
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "PreConstruct" },
		{ "ToolTip", "Called by both the game and the editor.  Allows users to run initial setup for their widgets to better previewthe setup in the designer and since generally that same setup code is required at runtime, it's called thereas well.**WARNING**This is intended purely for cosmetic updates using locally owned data, you can not safely access any game relatedstate, if you call something that doesn't expect to be run at editor time, you may crash the editor.In the event you save the asset with blueprint code that causes a crash on evaluation.  You can turn offPreConstruct evaluation in the Widget Designer settings in the Editor Preferences." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWB_Icon_Base_C__pf2787112053_bpf__PreConstruct__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053, nullptr, "PreConstruct", nullptr, nullptr, sizeof(WB_Icon_Base_C__pf2787112053_eventbpf__PreConstruct__pf_Parms), Z_Construct_UFunction_UWB_Icon_Base_C__pf2787112053_bpf__PreConstruct__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWB_Icon_Base_C__pf2787112053_bpf__PreConstruct__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020C08, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWB_Icon_Base_C__pf2787112053_bpf__PreConstruct__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWB_Icon_Base_C__pf2787112053_bpf__PreConstruct__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWB_Icon_Base_C__pf2787112053_bpf__PreConstruct__pf()
	{
		UObject* Outer = Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "PreConstruct" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWB_Icon_Base_C__pf2787112053_bpf__PreConstruct__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWB_Icon_Base_C__pf2787112053_bpf__Update__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWB_Icon_Base_C__pf2787112053_bpf__Update__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "Update" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWB_Icon_Base_C__pf2787112053_bpf__Update__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053, nullptr, "Update", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWB_Icon_Base_C__pf2787112053_bpf__Update__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWB_Icon_Base_C__pf2787112053_bpf__Update__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWB_Icon_Base_C__pf2787112053_bpf__Update__pf()
	{
		UObject* Outer = Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "Update" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWB_Icon_Base_C__pf2787112053_bpf__Update__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_NoRegister()
	{
		return UWB_Icon_Base_C__pf2787112053::StaticClass();
	}
	struct Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__img_Icon__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__img_Icon__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__img_Icon_Base__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__img_Icon_Base__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__img_Icon_Mask1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__img_Icon_Mask1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__img_Icon_Mask2__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__img_Icon_Mask2__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__img_Icon_Outline1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__img_Icon_Outline1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__img_Icon_Outline2__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__img_Icon_Outline2__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Text_IconText__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Text_IconText__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Icon__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Icon__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__bBaseColor__pf_MetaData[];
#endif
		static void NewProp_bpv__bBaseColor__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__bBaseColor__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__BaseColor__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__BaseColor__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__bBaseMask__pf_MetaData[];
#endif
		static void NewProp_bpv__bBaseMask__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__bBaseMask__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__BaseMaskColor__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__BaseMaskColor__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__bOutline1__pf_MetaData[];
#endif
		static void NewProp_bpv__bOutline1__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__bOutline1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Outline1_Color__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__Outline1_Color__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__bContour__pf_MetaData[];
#endif
		static void NewProp_bpv__bContour__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__bContour__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Contour_Color__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__Contour_Color__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__bGlassMask__pf_MetaData[];
#endif
		static void NewProp_bpv__bGlassMask__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__bGlassMask__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__GlassMask_Color__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__GlassMask_Color__pf;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_bpv__GlassMaskxTypes__pfT_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__GlassMaskxTypes__pfT_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_bpv__GlassMaskxTypes__pfT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__IconColor__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__IconColor__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__IconScale__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__IconScale__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Overall_Angle__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__Overall_Angle__pf;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_bpv__IconBaseTypes__pf_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__IconBaseTypes__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_bpv__IconBaseTypes__pf;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_bpv__IconBaseSize__pf_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__IconBaseSize__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_bpv__IconBaseSize__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Custom_BaseIcon__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Custom_BaseIcon__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Custom_Mask1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Custom_Mask1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Custom_Mask2__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Custom_Mask2__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Custom_Outline1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Custom_Outline1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Custom_Outline2__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Custom_Outline2__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Icon_Translation_X__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__Icon_Translation_X__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Icon_Translation_Y__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__Icon_Translation_Y__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__bUseIconText__pf_MetaData[];
#endif
		static void NewProp_bpv__bUseIconText__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__bUseIconText__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__IconText__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_bpv__IconText__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__IconText_Transform__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__IconText_Transform__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__IconText_Color__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__IconText_Color__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__IconTextFont__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__IconTextFont__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_struct_Variable__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__Temp_struct_Variable__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_object_Variable__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__Temp_object_Variable__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_object_Variable_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__Temp_object_Variable_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_object_Variable_2__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__Temp_object_Variable_2__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_object_Variable_3__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__Temp_object_Variable_3__pf;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_b0l__Temp_byte_Variable__pf_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_byte_Variable__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_b0l__Temp_byte_Variable__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_object_Variable_4__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__Temp_object_Variable_4__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_object_Variable_5__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__Temp_object_Variable_5__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_object_Variable_6__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__Temp_object_Variable_6__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_object_Variable_7__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__Temp_object_Variable_7__pf;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_b0l__Temp_byte_Variable_1__pf_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_byte_Variable_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_b0l__Temp_byte_Variable_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_object_Variable_8__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__Temp_object_Variable_8__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_object_Variable_9__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__Temp_object_Variable_9__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_object_Variable_10__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__Temp_object_Variable_10__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_object_Variable_11__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__Temp_object_Variable_11__pf;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_b0l__Temp_byte_Variable_2__pf_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_byte_Variable_2__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_b0l__Temp_byte_Variable_2__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_object_Variable_12__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__Temp_object_Variable_12__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_object_Variable_13__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__Temp_object_Variable_13__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_object_Variable_14__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__Temp_object_Variable_14__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_object_Variable_15__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__Temp_object_Variable_15__pf;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_b0l__Temp_byte_Variable_3__pf_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_byte_Variable_3__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_b0l__Temp_byte_Variable_3__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_object_Variable_16__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__Temp_object_Variable_16__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_object_Variable_17__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__Temp_object_Variable_17__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_object_Variable_18__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__Temp_object_Variable_18__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_object_Variable_19__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__Temp_object_Variable_19__pf;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_b0l__Temp_byte_Variable_4__pf_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_byte_Variable_4__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_b0l__Temp_byte_Variable_4__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_object_Variable_20__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__Temp_object_Variable_20__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_object_Variable_21__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__Temp_object_Variable_21__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_object_Variable_22__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__Temp_object_Variable_22__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_object_Variable_23__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__Temp_object_Variable_23__pf;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_b0l__Temp_byte_Variable_5__pf_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_byte_Variable_5__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_b0l__Temp_byte_Variable_5__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_object_Variable_24__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__Temp_object_Variable_24__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_object_Variable_25__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__Temp_object_Variable_25__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_object_Variable_26__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__Temp_object_Variable_26__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_object_Variable_27__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__Temp_object_Variable_27__pf;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_b0l__Temp_byte_Variable_6__pf_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_byte_Variable_6__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_b0l__Temp_byte_Variable_6__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_object_Variable_28__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__Temp_object_Variable_28__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_object_Variable_29__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__Temp_object_Variable_29__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_object_Variable_30__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__Temp_object_Variable_30__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_object_Variable_31__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__Temp_object_Variable_31__pf;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_b0l__Temp_byte_Variable_7__pf_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_byte_Variable_7__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_b0l__Temp_byte_Variable_7__pf;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_b0l__Temp_byte_Variable_8__pf_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_byte_Variable_8__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_b0l__Temp_byte_Variable_8__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_object_Variable_32__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__Temp_object_Variable_32__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_object_Variable_33__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__Temp_object_Variable_33__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_object_Variable_34__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__Temp_object_Variable_34__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_object_Variable_35__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__Temp_object_Variable_35__pf;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_b0l__Temp_byte_Variable_9__pf_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_byte_Variable_9__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_b0l__Temp_byte_Variable_9__pf;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_b0l__Temp_byte_Variable_10__pf_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_byte_Variable_10__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_b0l__Temp_byte_Variable_10__pf;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_b0l__Temp_byte_Variable_11__pf_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_byte_Variable_11__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_b0l__Temp_byte_Variable_11__pf;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_b0l__Temp_byte_Variable_12__pf_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_byte_Variable_12__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_b0l__Temp_byte_Variable_12__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_object_Variable_36__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__Temp_object_Variable_36__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_object_Variable_37__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__Temp_object_Variable_37__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_object_Variable_38__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__Temp_object_Variable_38__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_object_Variable_39__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__Temp_object_Variable_39__pf;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_b0l__Temp_byte_Variable_13__pf_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_byte_Variable_13__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_b0l__Temp_byte_Variable_13__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_object_Variable_40__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__Temp_object_Variable_40__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_object_Variable_41__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__Temp_object_Variable_41__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_object_Variable_42__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__Temp_object_Variable_42__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_object_Variable_43__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__Temp_object_Variable_43__pf;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_b0l__Temp_byte_Variable_14__pf_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_byte_Variable_14__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_b0l__Temp_byte_Variable_14__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_object_Variable_44__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__Temp_object_Variable_44__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_object_Variable_45__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__Temp_object_Variable_45__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_object_Variable_46__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__Temp_object_Variable_46__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_object_Variable_47__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__Temp_object_Variable_47__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_bool_Variable__pf_MetaData[];
#endif
		static void NewProp_b0l__Temp_bool_Variable__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__Temp_bool_Variable__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_struct_Variable_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__Temp_struct_Variable_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Select_Default__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_Select_Default__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Select_Default_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_Select_Default_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Select_Default_2__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_Select_Default_2__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_bool_Variable_1__pf_MetaData[];
#endif
		static void NewProp_b0l__Temp_bool_Variable_1__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__Temp_bool_Variable_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_struct_Variable_2__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__Temp_struct_Variable_2__pf;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_b0l__Temp_byte_Variable_15__pf_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_byte_Variable_15__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_b0l__Temp_byte_Variable_15__pf;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_b0l__Temp_byte_Variable_16__pf_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_byte_Variable_16__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_b0l__Temp_byte_Variable_16__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Select_Default_3__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_Select_Default_3__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Select_Default_4__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_Select_Default_4__pf;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_b0l__Temp_byte_Variable_17__pf_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_byte_Variable_17__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_b0l__Temp_byte_Variable_17__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Select_Default_5__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_Select_Default_5__pf;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_b0l__Temp_byte_Variable_18__pf_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_byte_Variable_18__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_b0l__Temp_byte_Variable_18__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_struct_Variable_3__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__Temp_struct_Variable_3__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Select_Default_6__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_Select_Default_6__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Select_Default_7__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_Select_Default_7__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Select_Default_8__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_Select_Default_8__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Select_Default_9__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_Select_Default_9__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Select_Default_10__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_Select_Default_10__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Select_Default_11__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_Select_Default_11__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Select_Default_12__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_Select_Default_12__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Select_Default_13__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_Select_Default_13__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Select_Default_14__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_Select_Default_14__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Select_Default_15__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_Select_Default_15__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Select_Default_16__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_Select_Default_16__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Select_Default_17__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_Select_Default_17__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_bool_Variable_2__pf_MetaData[];
#endif
		static void NewProp_b0l__Temp_bool_Variable_2__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__Temp_bool_Variable_2__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_MakeStruct_SlateBrush__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_MakeStruct_SlateBrush__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_MakeStruct_SlateBrush_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_MakeStruct_SlateBrush_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_MakeStruct_SlateBrush_2__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_MakeStruct_SlateBrush_2__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_MakeStruct_SlateBrush_3__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_MakeStruct_SlateBrush_3__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_bool_Variable_3__pf_MetaData[];
#endif
		static void NewProp_b0l__Temp_bool_Variable_3__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__Temp_bool_Variable_3__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_struct_Variable_4__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__Temp_struct_Variable_4__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_IsDesignTime__pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_Event_IsDesignTime__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_Event_IsDesignTime__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_MakeStruct_SlateBrush_4__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_MakeStruct_SlateBrush_4__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Select_Default_18__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_Select_Default_18__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Select_Default_19__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_Select_Default_19__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Select_Default_20__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_Select_Default_20__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Select_Default_21__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_Select_Default_21__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Select_Default_22__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_Select_Default_22__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_MakeStruct_SlateBrush_5__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_MakeStruct_SlateBrush_5__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_bool_Has_Been_Initd_Variable__pf_MetaData[];
#endif
		static void NewProp_b0l__Temp_bool_Has_Been_Initd_Variable__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__Temp_bool_Has_Been_Initd_Variable__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_bool_Variable_4__pf_MetaData[];
#endif
		static void NewProp_b0l__Temp_bool_Variable_4__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__Temp_bool_Variable_4__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Select_Default_23__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_Select_Default_23__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_bool_IsClosed_Variable__pf_MetaData[];
#endif
		static void NewProp_b0l__Temp_bool_IsClosed_Variable__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__Temp_bool_IsClosed_Variable__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWB_Icon_Base_C__pf2787112053_bpf__ExecuteUbergraph_WB_Icon_Base__pf_0, "ExecuteUbergraph_WB_Icon_Base_0" }, // 1159951254
		{ &Z_Construct_UFunction_UWB_Icon_Base_C__pf2787112053_bpf__PreConstruct__pf, "PreConstruct" }, // 1935069040
		{ &Z_Construct_UFunction_UWB_Icon_Base_C__pf2787112053_bpf__Update__pf, "Update" }, // 3861876422
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "WB_Icon_Base__pf2787112053.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "WB_Icon_Base_C" },
		{ "ReplaceConverted", "/Game/ProIconPack/UI/WB_Icon_Base.WB_Icon_Base_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__img_Icon__pf_MetaData[] = {
		{ "Category", "WB_Icon_Base" },
		{ "DisplayName", "img_Icon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "img_Icon" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__img_Icon__pf = { "img_Icon", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWB_Icon_Base_C__pf2787112053, bpv__img_Icon__pf), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__img_Icon__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__img_Icon__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__img_Icon_Base__pf_MetaData[] = {
		{ "Category", "WB_Icon_Base" },
		{ "DisplayName", "img_Icon_Base" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "img_Icon_Base" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__img_Icon_Base__pf = { "img_Icon_Base", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWB_Icon_Base_C__pf2787112053, bpv__img_Icon_Base__pf), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__img_Icon_Base__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__img_Icon_Base__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__img_Icon_Mask1__pf_MetaData[] = {
		{ "Category", "WB_Icon_Base" },
		{ "DisplayName", "img_Icon_Mask1" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "img_Icon_Mask1" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__img_Icon_Mask1__pf = { "img_Icon_Mask1", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWB_Icon_Base_C__pf2787112053, bpv__img_Icon_Mask1__pf), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__img_Icon_Mask1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__img_Icon_Mask1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__img_Icon_Mask2__pf_MetaData[] = {
		{ "Category", "WB_Icon_Base" },
		{ "DisplayName", "img_Icon_Mask2" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "img_Icon_Mask2" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__img_Icon_Mask2__pf = { "img_Icon_Mask2", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWB_Icon_Base_C__pf2787112053, bpv__img_Icon_Mask2__pf), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__img_Icon_Mask2__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__img_Icon_Mask2__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__img_Icon_Outline1__pf_MetaData[] = {
		{ "Category", "WB_Icon_Base" },
		{ "DisplayName", "img_Icon_Outline1" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "img_Icon_Outline1" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__img_Icon_Outline1__pf = { "img_Icon_Outline1", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWB_Icon_Base_C__pf2787112053, bpv__img_Icon_Outline1__pf), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__img_Icon_Outline1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__img_Icon_Outline1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__img_Icon_Outline2__pf_MetaData[] = {
		{ "Category", "WB_Icon_Base" },
		{ "DisplayName", "img_Icon_Outline2" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "img_Icon_Outline2" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__img_Icon_Outline2__pf = { "img_Icon_Outline2", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWB_Icon_Base_C__pf2787112053, bpv__img_Icon_Outline2__pf), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__img_Icon_Outline2__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__img_Icon_Outline2__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__Text_IconText__pf_MetaData[] = {
		{ "Category", "WB_Icon_Base" },
		{ "DisplayName", "Text_IconText" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "Text_IconText" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__Text_IconText__pf = { "Text_IconText", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWB_Icon_Base_C__pf2787112053, bpv__Text_IconText__pf), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__Text_IconText__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__Text_IconText__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__Icon__pf_MetaData[] = {
		{ "Category", "Icon" },
		{ "DisplayName", "Icon" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "Icon" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__Icon__pf = { "Icon", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWB_Icon_Base_C__pf2787112053, bpv__Icon__pf), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__Icon__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__Icon__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__bBaseColor__pf_MetaData[] = {
		{ "Category", "Colors" },
		{ "DisplayName", "Base Color" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "bBaseColor" },
	};
#endif
	void Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__bBaseColor__pf_SetBit(void* Obj)
	{
		((UWB_Icon_Base_C__pf2787112053*)Obj)->bpv__bBaseColor__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__bBaseColor__pf = { "bBaseColor", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UWB_Icon_Base_C__pf2787112053), &Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__bBaseColor__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__bBaseColor__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__bBaseColor__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__BaseColor__pf_MetaData[] = {
		{ "Category", "Colors" },
		{ "DisplayName", "Base Color" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "BaseColor" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__BaseColor__pf = { "BaseColor", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWB_Icon_Base_C__pf2787112053, bpv__BaseColor__pf), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__BaseColor__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__BaseColor__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__bBaseMask__pf_MetaData[] = {
		{ "Category", "Colors" },
		{ "DisplayName", "Base Mask" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "bBaseMask" },
	};
#endif
	void Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__bBaseMask__pf_SetBit(void* Obj)
	{
		((UWB_Icon_Base_C__pf2787112053*)Obj)->bpv__bBaseMask__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__bBaseMask__pf = { "bBaseMask", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UWB_Icon_Base_C__pf2787112053), &Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__bBaseMask__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__bBaseMask__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__bBaseMask__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__BaseMaskColor__pf_MetaData[] = {
		{ "Category", "Colors" },
		{ "DisplayName", "Base Mask Color" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "BaseMaskColor" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__BaseMaskColor__pf = { "BaseMaskColor", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWB_Icon_Base_C__pf2787112053, bpv__BaseMaskColor__pf), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__BaseMaskColor__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__BaseMaskColor__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__bOutline1__pf_MetaData[] = {
		{ "Category", "Colors" },
		{ "DisplayName", "Outline 1" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "bOutline1" },
	};
#endif
	void Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__bOutline1__pf_SetBit(void* Obj)
	{
		((UWB_Icon_Base_C__pf2787112053*)Obj)->bpv__bOutline1__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__bOutline1__pf = { "bOutline1", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UWB_Icon_Base_C__pf2787112053), &Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__bOutline1__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__bOutline1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__bOutline1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__Outline1_Color__pf_MetaData[] = {
		{ "Category", "Colors" },
		{ "DisplayName", "Outline 1 Color" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "Outline1_Color" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__Outline1_Color__pf = { "Outline1_Color", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWB_Icon_Base_C__pf2787112053, bpv__Outline1_Color__pf), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__Outline1_Color__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__Outline1_Color__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__bContour__pf_MetaData[] = {
		{ "Category", "Colors" },
		{ "DisplayName", "Contour" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "bContour" },
	};
#endif
	void Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__bContour__pf_SetBit(void* Obj)
	{
		((UWB_Icon_Base_C__pf2787112053*)Obj)->bpv__bContour__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__bContour__pf = { "bContour", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UWB_Icon_Base_C__pf2787112053), &Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__bContour__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__bContour__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__bContour__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__Contour_Color__pf_MetaData[] = {
		{ "Category", "Colors" },
		{ "DisplayName", "Contour Color" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "Contour_Color" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__Contour_Color__pf = { "Contour_Color", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWB_Icon_Base_C__pf2787112053, bpv__Contour_Color__pf), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__Contour_Color__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__Contour_Color__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__bGlassMask__pf_MetaData[] = {
		{ "Category", "Colors" },
		{ "DisplayName", "Glass Mask" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "bGlassMask" },
	};
#endif
	void Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__bGlassMask__pf_SetBit(void* Obj)
	{
		((UWB_Icon_Base_C__pf2787112053*)Obj)->bpv__bGlassMask__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__bGlassMask__pf = { "bGlassMask", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UWB_Icon_Base_C__pf2787112053), &Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__bGlassMask__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__bGlassMask__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__bGlassMask__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__GlassMask_Color__pf_MetaData[] = {
		{ "Category", "Colors" },
		{ "DisplayName", "Glass Mask Color" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "GlassMask_Color" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__GlassMask_Color__pf = { "GlassMask_Color", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWB_Icon_Base_C__pf2787112053, bpv__GlassMask_Color__pf), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__GlassMask_Color__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__GlassMask_Color__pf_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__GlassMaskxTypes__pfT_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__GlassMaskxTypes__pfT_MetaData[] = {
		{ "Category", "Colors" },
		{ "DisplayName", "Glass Mask Types" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "GlassMask Types" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__GlassMaskxTypes__pfT = { "GlassMask Types", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWB_Icon_Base_C__pf2787112053, bpv__GlassMaskxTypes__pfT), Z_Construct_UEnum_NativizedAssets_E__E_GlassMaskTypes__pf, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__GlassMaskxTypes__pfT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__GlassMaskxTypes__pfT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__IconColor__pf_MetaData[] = {
		{ "Category", "Icon" },
		{ "DisplayName", "Icon Color" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "IconColor" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__IconColor__pf = { "IconColor", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWB_Icon_Base_C__pf2787112053, bpv__IconColor__pf), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__IconColor__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__IconColor__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__IconScale__pf_MetaData[] = {
		{ "Category", "Icon" },
		{ "ClampMax", "1.3" },
		{ "ClampMin", "0.4" },
		{ "DisplayName", "Icon Scale" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "IconScale" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__IconScale__pf = { "IconScale", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWB_Icon_Base_C__pf2787112053, bpv__IconScale__pf), METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__IconScale__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__IconScale__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__Overall_Angle__pf_MetaData[] = {
		{ "Category", "Icon" },
		{ "ClampMax", "360" },
		{ "ClampMin", "-360" },
		{ "DisplayName", "Overall Angle" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "Overall_Angle" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__Overall_Angle__pf = { "Overall_Angle", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWB_Icon_Base_C__pf2787112053, bpv__Overall_Angle__pf), METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__Overall_Angle__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__Overall_Angle__pf_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__IconBaseTypes__pf_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__IconBaseTypes__pf_MetaData[] = {
		{ "Category", "Icon" },
		{ "DisplayName", "Icon Base Types" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "IconBaseTypes" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__IconBaseTypes__pf = { "IconBaseTypes", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWB_Icon_Base_C__pf2787112053, bpv__IconBaseTypes__pf), Z_Construct_UEnum_NativizedAssets_E__E_IconBaseTypes__pf, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__IconBaseTypes__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__IconBaseTypes__pf_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__IconBaseSize__pf_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__IconBaseSize__pf_MetaData[] = {
		{ "Category", "Icon" },
		{ "DisplayName", "Icon Base Size" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "IconBaseSize" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__IconBaseSize__pf = { "IconBaseSize", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWB_Icon_Base_C__pf2787112053, bpv__IconBaseSize__pf), Z_Construct_UEnum_NativizedAssets_E__E_Sizes__pf, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__IconBaseSize__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__IconBaseSize__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__Custom_BaseIcon__pf_MetaData[] = {
		{ "Category", "Custom_Icon" },
		{ "DisplayName", "Custom Base Icon" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "Custom_BaseIcon" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__Custom_BaseIcon__pf = { "Custom_BaseIcon", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWB_Icon_Base_C__pf2787112053, bpv__Custom_BaseIcon__pf), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__Custom_BaseIcon__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__Custom_BaseIcon__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__Custom_Mask1__pf_MetaData[] = {
		{ "Category", "Custom_Icon" },
		{ "DisplayName", "Custom Mask 1" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "Custom_Mask1" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__Custom_Mask1__pf = { "Custom_Mask1", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWB_Icon_Base_C__pf2787112053, bpv__Custom_Mask1__pf), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__Custom_Mask1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__Custom_Mask1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__Custom_Mask2__pf_MetaData[] = {
		{ "Category", "Custom_Icon" },
		{ "DisplayName", "Custom Mask 2" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "Custom_Mask2" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__Custom_Mask2__pf = { "Custom_Mask2", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWB_Icon_Base_C__pf2787112053, bpv__Custom_Mask2__pf), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__Custom_Mask2__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__Custom_Mask2__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__Custom_Outline1__pf_MetaData[] = {
		{ "Category", "Custom_Icon" },
		{ "DisplayName", "Custom Outline 1" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "Custom_Outline1" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__Custom_Outline1__pf = { "Custom_Outline1", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWB_Icon_Base_C__pf2787112053, bpv__Custom_Outline1__pf), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__Custom_Outline1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__Custom_Outline1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__Custom_Outline2__pf_MetaData[] = {
		{ "Category", "Custom_Icon" },
		{ "DisplayName", "Custom Outline 2" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "Custom_Outline2" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__Custom_Outline2__pf = { "Custom_Outline2", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWB_Icon_Base_C__pf2787112053, bpv__Custom_Outline2__pf), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__Custom_Outline2__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__Custom_Outline2__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__Icon_Translation_X__pf_MetaData[] = {
		{ "Category", "Icon" },
		{ "DisplayName", "Icon Translation X" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "Icon_Translation_X" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__Icon_Translation_X__pf = { "Icon_Translation_X", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWB_Icon_Base_C__pf2787112053, bpv__Icon_Translation_X__pf), METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__Icon_Translation_X__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__Icon_Translation_X__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__Icon_Translation_Y__pf_MetaData[] = {
		{ "Category", "Icon" },
		{ "DisplayName", "Icon Translation Y" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "Icon_Translation_Y" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__Icon_Translation_Y__pf = { "Icon_Translation_Y", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWB_Icon_Base_C__pf2787112053, bpv__Icon_Translation_Y__pf), METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__Icon_Translation_Y__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__Icon_Translation_Y__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__bUseIconText__pf_MetaData[] = {
		{ "Category", "IconText" },
		{ "DisplayName", "Use Icon Text" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "bUseIconText" },
	};
#endif
	void Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__bUseIconText__pf_SetBit(void* Obj)
	{
		((UWB_Icon_Base_C__pf2787112053*)Obj)->bpv__bUseIconText__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__bUseIconText__pf = { "bUseIconText", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UWB_Icon_Base_C__pf2787112053), &Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__bUseIconText__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__bUseIconText__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__bUseIconText__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__IconText__pf_MetaData[] = {
		{ "Category", "IconText" },
		{ "DisplayName", "Icon Text" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "IconText" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__IconText__pf = { "IconText", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWB_Icon_Base_C__pf2787112053, bpv__IconText__pf), METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__IconText__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__IconText__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__IconText_Transform__pf_MetaData[] = {
		{ "Category", "IconText" },
		{ "DisplayName", "Icon Text Transform" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "IconText_Transform" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__IconText_Transform__pf = { "IconText_Transform", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWB_Icon_Base_C__pf2787112053, bpv__IconText_Transform__pf), Z_Construct_UScriptStruct_FWidgetTransform, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__IconText_Transform__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__IconText_Transform__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__IconText_Color__pf_MetaData[] = {
		{ "Category", "IconText" },
		{ "DisplayName", "Icon Text Color" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "IconText_Color" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__IconText_Color__pf = { "IconText_Color", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWB_Icon_Base_C__pf2787112053, bpv__IconText_Color__pf), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__IconText_Color__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__IconText_Color__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__IconTextFont__pf_MetaData[] = {
		{ "Category", "IconText" },
		{ "DisplayName", "Icon Text Font" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "IconTextFont" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__IconTextFont__pf = { "IconTextFont", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWB_Icon_Base_C__pf2787112053, bpv__IconTextFont__pf), Z_Construct_UScriptStruct_FSlateFontInfo, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__IconTextFont__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__IconTextFont__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_struct_Variable__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "Temp_struct_Variable" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_struct_Variable__pf = { "Temp_struct_Variable", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWB_Icon_Base_C__pf2787112053, b0l__Temp_struct_Variable__pf), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_struct_Variable__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_struct_Variable__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "Temp_object_Variable" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable__pf = { "Temp_object_Variable", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWB_Icon_Base_C__pf2787112053, b0l__Temp_object_Variable__pf), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "Temp_object_Variable_1" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_1__pf = { "Temp_object_Variable_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWB_Icon_Base_C__pf2787112053, b0l__Temp_object_Variable_1__pf), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_2__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "Temp_object_Variable_2" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_2__pf = { "Temp_object_Variable_2", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWB_Icon_Base_C__pf2787112053, b0l__Temp_object_Variable_2__pf), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_2__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_2__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_3__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "Temp_object_Variable_3" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_3__pf = { "Temp_object_Variable_3", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWB_Icon_Base_C__pf2787112053, b0l__Temp_object_Variable_3__pf), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_3__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_3__pf_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_byte_Variable__pf_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_byte_Variable__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "Temp_byte_Variable" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_byte_Variable__pf = { "Temp_byte_Variable", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWB_Icon_Base_C__pf2787112053, b0l__Temp_byte_Variable__pf), Z_Construct_UEnum_NativizedAssets_E__E_IconBaseTypes__pf, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_byte_Variable__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_byte_Variable__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_4__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "Temp_object_Variable_4" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_4__pf = { "Temp_object_Variable_4", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWB_Icon_Base_C__pf2787112053, b0l__Temp_object_Variable_4__pf), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_4__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_4__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_5__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "Temp_object_Variable_5" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_5__pf = { "Temp_object_Variable_5", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWB_Icon_Base_C__pf2787112053, b0l__Temp_object_Variable_5__pf), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_5__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_5__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_6__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "Temp_object_Variable_6" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_6__pf = { "Temp_object_Variable_6", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWB_Icon_Base_C__pf2787112053, b0l__Temp_object_Variable_6__pf), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_6__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_6__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_7__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "Temp_object_Variable_7" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_7__pf = { "Temp_object_Variable_7", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWB_Icon_Base_C__pf2787112053, b0l__Temp_object_Variable_7__pf), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_7__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_7__pf_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_byte_Variable_1__pf_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_byte_Variable_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "Temp_byte_Variable_1" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_byte_Variable_1__pf = { "Temp_byte_Variable_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWB_Icon_Base_C__pf2787112053, b0l__Temp_byte_Variable_1__pf), Z_Construct_UEnum_NativizedAssets_E__E_IconBaseTypes__pf, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_byte_Variable_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_byte_Variable_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_8__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "Temp_object_Variable_8" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_8__pf = { "Temp_object_Variable_8", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWB_Icon_Base_C__pf2787112053, b0l__Temp_object_Variable_8__pf), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_8__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_8__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_9__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "Temp_object_Variable_9" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_9__pf = { "Temp_object_Variable_9", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWB_Icon_Base_C__pf2787112053, b0l__Temp_object_Variable_9__pf), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_9__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_9__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_10__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "Temp_object_Variable_10" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_10__pf = { "Temp_object_Variable_10", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWB_Icon_Base_C__pf2787112053, b0l__Temp_object_Variable_10__pf), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_10__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_10__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_11__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "Temp_object_Variable_11" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_11__pf = { "Temp_object_Variable_11", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWB_Icon_Base_C__pf2787112053, b0l__Temp_object_Variable_11__pf), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_11__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_11__pf_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_byte_Variable_2__pf_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_byte_Variable_2__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "Temp_byte_Variable_2" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_byte_Variable_2__pf = { "Temp_byte_Variable_2", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWB_Icon_Base_C__pf2787112053, b0l__Temp_byte_Variable_2__pf), Z_Construct_UEnum_NativizedAssets_E__E_IconBaseTypes__pf, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_byte_Variable_2__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_byte_Variable_2__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_12__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "Temp_object_Variable_12" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_12__pf = { "Temp_object_Variable_12", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWB_Icon_Base_C__pf2787112053, b0l__Temp_object_Variable_12__pf), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_12__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_12__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_13__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "Temp_object_Variable_13" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_13__pf = { "Temp_object_Variable_13", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWB_Icon_Base_C__pf2787112053, b0l__Temp_object_Variable_13__pf), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_13__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_13__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_14__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "Temp_object_Variable_14" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_14__pf = { "Temp_object_Variable_14", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWB_Icon_Base_C__pf2787112053, b0l__Temp_object_Variable_14__pf), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_14__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_14__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_15__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "Temp_object_Variable_15" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_15__pf = { "Temp_object_Variable_15", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWB_Icon_Base_C__pf2787112053, b0l__Temp_object_Variable_15__pf), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_15__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_15__pf_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_byte_Variable_3__pf_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_byte_Variable_3__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "Temp_byte_Variable_3" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_byte_Variable_3__pf = { "Temp_byte_Variable_3", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWB_Icon_Base_C__pf2787112053, b0l__Temp_byte_Variable_3__pf), Z_Construct_UEnum_NativizedAssets_E__E_IconBaseTypes__pf, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_byte_Variable_3__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_byte_Variable_3__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_16__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "Temp_object_Variable_16" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_16__pf = { "Temp_object_Variable_16", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWB_Icon_Base_C__pf2787112053, b0l__Temp_object_Variable_16__pf), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_16__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_16__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_17__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "Temp_object_Variable_17" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_17__pf = { "Temp_object_Variable_17", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWB_Icon_Base_C__pf2787112053, b0l__Temp_object_Variable_17__pf), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_17__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_17__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_18__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "Temp_object_Variable_18" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_18__pf = { "Temp_object_Variable_18", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWB_Icon_Base_C__pf2787112053, b0l__Temp_object_Variable_18__pf), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_18__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_18__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_19__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "Temp_object_Variable_19" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_19__pf = { "Temp_object_Variable_19", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWB_Icon_Base_C__pf2787112053, b0l__Temp_object_Variable_19__pf), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_19__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_19__pf_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_byte_Variable_4__pf_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_byte_Variable_4__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "Temp_byte_Variable_4" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_byte_Variable_4__pf = { "Temp_byte_Variable_4", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWB_Icon_Base_C__pf2787112053, b0l__Temp_byte_Variable_4__pf), Z_Construct_UEnum_NativizedAssets_E__E_IconBaseTypes__pf, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_byte_Variable_4__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_byte_Variable_4__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_20__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "Temp_object_Variable_20" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_20__pf = { "Temp_object_Variable_20", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWB_Icon_Base_C__pf2787112053, b0l__Temp_object_Variable_20__pf), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_20__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_20__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_21__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "Temp_object_Variable_21" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_21__pf = { "Temp_object_Variable_21", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWB_Icon_Base_C__pf2787112053, b0l__Temp_object_Variable_21__pf), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_21__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_21__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_22__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "Temp_object_Variable_22" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_22__pf = { "Temp_object_Variable_22", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWB_Icon_Base_C__pf2787112053, b0l__Temp_object_Variable_22__pf), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_22__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_22__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_23__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "Temp_object_Variable_23" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_23__pf = { "Temp_object_Variable_23", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWB_Icon_Base_C__pf2787112053, b0l__Temp_object_Variable_23__pf), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_23__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_23__pf_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_byte_Variable_5__pf_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_byte_Variable_5__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "Temp_byte_Variable_5" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_byte_Variable_5__pf = { "Temp_byte_Variable_5", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWB_Icon_Base_C__pf2787112053, b0l__Temp_byte_Variable_5__pf), Z_Construct_UEnum_NativizedAssets_E__E_IconBaseTypes__pf, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_byte_Variable_5__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_byte_Variable_5__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_24__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "Temp_object_Variable_24" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_24__pf = { "Temp_object_Variable_24", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWB_Icon_Base_C__pf2787112053, b0l__Temp_object_Variable_24__pf), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_24__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_24__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_25__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "Temp_object_Variable_25" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_25__pf = { "Temp_object_Variable_25", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWB_Icon_Base_C__pf2787112053, b0l__Temp_object_Variable_25__pf), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_25__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_25__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_26__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "Temp_object_Variable_26" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_26__pf = { "Temp_object_Variable_26", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWB_Icon_Base_C__pf2787112053, b0l__Temp_object_Variable_26__pf), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_26__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_26__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_27__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "Temp_object_Variable_27" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_27__pf = { "Temp_object_Variable_27", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWB_Icon_Base_C__pf2787112053, b0l__Temp_object_Variable_27__pf), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_27__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_27__pf_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_byte_Variable_6__pf_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_byte_Variable_6__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "Temp_byte_Variable_6" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_byte_Variable_6__pf = { "Temp_byte_Variable_6", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWB_Icon_Base_C__pf2787112053, b0l__Temp_byte_Variable_6__pf), Z_Construct_UEnum_NativizedAssets_E__E_IconBaseTypes__pf, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_byte_Variable_6__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_byte_Variable_6__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_28__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "Temp_object_Variable_28" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_28__pf = { "Temp_object_Variable_28", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWB_Icon_Base_C__pf2787112053, b0l__Temp_object_Variable_28__pf), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_28__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_28__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_29__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "Temp_object_Variable_29" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_29__pf = { "Temp_object_Variable_29", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWB_Icon_Base_C__pf2787112053, b0l__Temp_object_Variable_29__pf), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_29__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_29__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_30__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "Temp_object_Variable_30" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_30__pf = { "Temp_object_Variable_30", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWB_Icon_Base_C__pf2787112053, b0l__Temp_object_Variable_30__pf), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_30__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_30__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_31__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "Temp_object_Variable_31" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_31__pf = { "Temp_object_Variable_31", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWB_Icon_Base_C__pf2787112053, b0l__Temp_object_Variable_31__pf), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_31__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_31__pf_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_byte_Variable_7__pf_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_byte_Variable_7__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "Temp_byte_Variable_7" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_byte_Variable_7__pf = { "Temp_byte_Variable_7", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWB_Icon_Base_C__pf2787112053, b0l__Temp_byte_Variable_7__pf), Z_Construct_UEnum_NativizedAssets_E__E_Sizes__pf, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_byte_Variable_7__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_byte_Variable_7__pf_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_byte_Variable_8__pf_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_byte_Variable_8__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "Temp_byte_Variable_8" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_byte_Variable_8__pf = { "Temp_byte_Variable_8", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWB_Icon_Base_C__pf2787112053, b0l__Temp_byte_Variable_8__pf), Z_Construct_UEnum_NativizedAssets_E__E_IconBaseTypes__pf, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_byte_Variable_8__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_byte_Variable_8__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_32__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "Temp_object_Variable_32" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_32__pf = { "Temp_object_Variable_32", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWB_Icon_Base_C__pf2787112053, b0l__Temp_object_Variable_32__pf), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_32__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_32__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_33__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "Temp_object_Variable_33" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_33__pf = { "Temp_object_Variable_33", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWB_Icon_Base_C__pf2787112053, b0l__Temp_object_Variable_33__pf), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_33__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_33__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_34__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "Temp_object_Variable_34" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_34__pf = { "Temp_object_Variable_34", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWB_Icon_Base_C__pf2787112053, b0l__Temp_object_Variable_34__pf), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_34__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_34__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_35__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "Temp_object_Variable_35" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_35__pf = { "Temp_object_Variable_35", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWB_Icon_Base_C__pf2787112053, b0l__Temp_object_Variable_35__pf), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_35__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_35__pf_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_byte_Variable_9__pf_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_byte_Variable_9__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "Temp_byte_Variable_9" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_byte_Variable_9__pf = { "Temp_byte_Variable_9", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWB_Icon_Base_C__pf2787112053, b0l__Temp_byte_Variable_9__pf), Z_Construct_UEnum_NativizedAssets_E__E_Sizes__pf, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_byte_Variable_9__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_byte_Variable_9__pf_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_byte_Variable_10__pf_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_byte_Variable_10__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "Temp_byte_Variable_10" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_byte_Variable_10__pf = { "Temp_byte_Variable_10", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWB_Icon_Base_C__pf2787112053, b0l__Temp_byte_Variable_10__pf), Z_Construct_UEnum_NativizedAssets_E__E_Sizes__pf, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_byte_Variable_10__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_byte_Variable_10__pf_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_byte_Variable_11__pf_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_byte_Variable_11__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "Temp_byte_Variable_11" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_byte_Variable_11__pf = { "Temp_byte_Variable_11", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWB_Icon_Base_C__pf2787112053, b0l__Temp_byte_Variable_11__pf), Z_Construct_UEnum_NativizedAssets_E__E_Sizes__pf, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_byte_Variable_11__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_byte_Variable_11__pf_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_byte_Variable_12__pf_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_byte_Variable_12__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "Temp_byte_Variable_12" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_byte_Variable_12__pf = { "Temp_byte_Variable_12", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWB_Icon_Base_C__pf2787112053, b0l__Temp_byte_Variable_12__pf), Z_Construct_UEnum_NativizedAssets_E__E_IconBaseTypes__pf, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_byte_Variable_12__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_byte_Variable_12__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_36__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "Temp_object_Variable_36" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_36__pf = { "Temp_object_Variable_36", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWB_Icon_Base_C__pf2787112053, b0l__Temp_object_Variable_36__pf), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_36__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_36__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_37__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "Temp_object_Variable_37" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_37__pf = { "Temp_object_Variable_37", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWB_Icon_Base_C__pf2787112053, b0l__Temp_object_Variable_37__pf), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_37__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_37__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_38__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "Temp_object_Variable_38" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_38__pf = { "Temp_object_Variable_38", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWB_Icon_Base_C__pf2787112053, b0l__Temp_object_Variable_38__pf), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_38__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_38__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_39__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "Temp_object_Variable_39" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_39__pf = { "Temp_object_Variable_39", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWB_Icon_Base_C__pf2787112053, b0l__Temp_object_Variable_39__pf), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_39__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_39__pf_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_byte_Variable_13__pf_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_byte_Variable_13__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "Temp_byte_Variable_13" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_byte_Variable_13__pf = { "Temp_byte_Variable_13", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWB_Icon_Base_C__pf2787112053, b0l__Temp_byte_Variable_13__pf), Z_Construct_UEnum_NativizedAssets_E__E_IconBaseTypes__pf, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_byte_Variable_13__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_byte_Variable_13__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_40__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "Temp_object_Variable_40" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_40__pf = { "Temp_object_Variable_40", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWB_Icon_Base_C__pf2787112053, b0l__Temp_object_Variable_40__pf), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_40__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_40__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_41__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "Temp_object_Variable_41" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_41__pf = { "Temp_object_Variable_41", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWB_Icon_Base_C__pf2787112053, b0l__Temp_object_Variable_41__pf), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_41__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_41__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_42__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "Temp_object_Variable_42" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_42__pf = { "Temp_object_Variable_42", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWB_Icon_Base_C__pf2787112053, b0l__Temp_object_Variable_42__pf), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_42__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_42__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_43__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "Temp_object_Variable_43" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_43__pf = { "Temp_object_Variable_43", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWB_Icon_Base_C__pf2787112053, b0l__Temp_object_Variable_43__pf), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_43__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_43__pf_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_byte_Variable_14__pf_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_byte_Variable_14__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "Temp_byte_Variable_14" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_byte_Variable_14__pf = { "Temp_byte_Variable_14", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWB_Icon_Base_C__pf2787112053, b0l__Temp_byte_Variable_14__pf), Z_Construct_UEnum_NativizedAssets_E__E_IconBaseTypes__pf, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_byte_Variable_14__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_byte_Variable_14__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_44__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "Temp_object_Variable_44" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_44__pf = { "Temp_object_Variable_44", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWB_Icon_Base_C__pf2787112053, b0l__Temp_object_Variable_44__pf), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_44__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_44__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_45__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "Temp_object_Variable_45" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_45__pf = { "Temp_object_Variable_45", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWB_Icon_Base_C__pf2787112053, b0l__Temp_object_Variable_45__pf), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_45__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_45__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_46__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "Temp_object_Variable_46" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_46__pf = { "Temp_object_Variable_46", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWB_Icon_Base_C__pf2787112053, b0l__Temp_object_Variable_46__pf), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_46__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_46__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_47__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "Temp_object_Variable_47" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_47__pf = { "Temp_object_Variable_47", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWB_Icon_Base_C__pf2787112053, b0l__Temp_object_Variable_47__pf), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_47__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_47__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_bool_Variable__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "Temp_bool_Variable" },
	};
#endif
	void Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_bool_Variable__pf_SetBit(void* Obj)
	{
		((UWB_Icon_Base_C__pf2787112053*)Obj)->b0l__Temp_bool_Variable__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_bool_Variable__pf = { "Temp_bool_Variable", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UWB_Icon_Base_C__pf2787112053), &Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_bool_Variable__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_bool_Variable__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_bool_Variable__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_struct_Variable_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "Temp_struct_Variable_1" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_struct_Variable_1__pf = { "Temp_struct_Variable_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWB_Icon_Base_C__pf2787112053, b0l__Temp_struct_Variable_1__pf), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_struct_Variable_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_struct_Variable_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_Select_Default__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "K2Node_Select_Default" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_Select_Default__pf = { "K2Node_Select_Default", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWB_Icon_Base_C__pf2787112053, b0l__K2Node_Select_Default__pf), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_Select_Default__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_Select_Default__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_Select_Default_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "K2Node_Select_Default_1" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_Select_Default_1__pf = { "K2Node_Select_Default_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWB_Icon_Base_C__pf2787112053, b0l__K2Node_Select_Default_1__pf), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_Select_Default_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_Select_Default_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_Select_Default_2__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "K2Node_Select_Default_2" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_Select_Default_2__pf = { "K2Node_Select_Default_2", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWB_Icon_Base_C__pf2787112053, b0l__K2Node_Select_Default_2__pf), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_Select_Default_2__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_Select_Default_2__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_bool_Variable_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "Temp_bool_Variable_1" },
	};
#endif
	void Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_bool_Variable_1__pf_SetBit(void* Obj)
	{
		((UWB_Icon_Base_C__pf2787112053*)Obj)->b0l__Temp_bool_Variable_1__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_bool_Variable_1__pf = { "Temp_bool_Variable_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UWB_Icon_Base_C__pf2787112053), &Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_bool_Variable_1__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_bool_Variable_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_bool_Variable_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_struct_Variable_2__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "Temp_struct_Variable_2" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_struct_Variable_2__pf = { "Temp_struct_Variable_2", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWB_Icon_Base_C__pf2787112053, b0l__Temp_struct_Variable_2__pf), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_struct_Variable_2__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_struct_Variable_2__pf_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_byte_Variable_15__pf_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_byte_Variable_15__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "Temp_byte_Variable_15" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_byte_Variable_15__pf = { "Temp_byte_Variable_15", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWB_Icon_Base_C__pf2787112053, b0l__Temp_byte_Variable_15__pf), Z_Construct_UEnum_NativizedAssets_E__E_IconBaseTypes__pf, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_byte_Variable_15__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_byte_Variable_15__pf_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_byte_Variable_16__pf_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_byte_Variable_16__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "Temp_byte_Variable_16" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_byte_Variable_16__pf = { "Temp_byte_Variable_16", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWB_Icon_Base_C__pf2787112053, b0l__Temp_byte_Variable_16__pf), Z_Construct_UEnum_NativizedAssets_E__E_Sizes__pf, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_byte_Variable_16__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_byte_Variable_16__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_Select_Default_3__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "K2Node_Select_Default_3" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_Select_Default_3__pf = { "K2Node_Select_Default_3", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWB_Icon_Base_C__pf2787112053, b0l__K2Node_Select_Default_3__pf), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_Select_Default_3__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_Select_Default_3__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_Select_Default_4__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "K2Node_Select_Default_4" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_Select_Default_4__pf = { "K2Node_Select_Default_4", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWB_Icon_Base_C__pf2787112053, b0l__K2Node_Select_Default_4__pf), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_Select_Default_4__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_Select_Default_4__pf_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_byte_Variable_17__pf_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_byte_Variable_17__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "Temp_byte_Variable_17" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_byte_Variable_17__pf = { "Temp_byte_Variable_17", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWB_Icon_Base_C__pf2787112053, b0l__Temp_byte_Variable_17__pf), Z_Construct_UEnum_NativizedAssets_E__E_Sizes__pf, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_byte_Variable_17__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_byte_Variable_17__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_Select_Default_5__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "K2Node_Select_Default_5" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_Select_Default_5__pf = { "K2Node_Select_Default_5", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWB_Icon_Base_C__pf2787112053, b0l__K2Node_Select_Default_5__pf), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_Select_Default_5__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_Select_Default_5__pf_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_byte_Variable_18__pf_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_byte_Variable_18__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "Temp_byte_Variable_18" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_byte_Variable_18__pf = { "Temp_byte_Variable_18", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWB_Icon_Base_C__pf2787112053, b0l__Temp_byte_Variable_18__pf), Z_Construct_UEnum_NativizedAssets_E__E_GlassMaskTypes__pf, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_byte_Variable_18__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_byte_Variable_18__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_struct_Variable_3__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "Temp_struct_Variable_3" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_struct_Variable_3__pf = { "Temp_struct_Variable_3", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWB_Icon_Base_C__pf2787112053, b0l__Temp_struct_Variable_3__pf), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_struct_Variable_3__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_struct_Variable_3__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_Select_Default_6__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "K2Node_Select_Default_6" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_Select_Default_6__pf = { "K2Node_Select_Default_6", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWB_Icon_Base_C__pf2787112053, b0l__K2Node_Select_Default_6__pf), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_Select_Default_6__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_Select_Default_6__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_Select_Default_7__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "K2Node_Select_Default_7" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_Select_Default_7__pf = { "K2Node_Select_Default_7", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWB_Icon_Base_C__pf2787112053, b0l__K2Node_Select_Default_7__pf), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_Select_Default_7__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_Select_Default_7__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_Select_Default_8__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "K2Node_Select_Default_8" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_Select_Default_8__pf = { "K2Node_Select_Default_8", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWB_Icon_Base_C__pf2787112053, b0l__K2Node_Select_Default_8__pf), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_Select_Default_8__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_Select_Default_8__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_Select_Default_9__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "K2Node_Select_Default_9" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_Select_Default_9__pf = { "K2Node_Select_Default_9", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWB_Icon_Base_C__pf2787112053, b0l__K2Node_Select_Default_9__pf), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_Select_Default_9__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_Select_Default_9__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_Select_Default_10__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "K2Node_Select_Default_10" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_Select_Default_10__pf = { "K2Node_Select_Default_10", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWB_Icon_Base_C__pf2787112053, b0l__K2Node_Select_Default_10__pf), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_Select_Default_10__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_Select_Default_10__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_Select_Default_11__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "K2Node_Select_Default_11" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_Select_Default_11__pf = { "K2Node_Select_Default_11", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWB_Icon_Base_C__pf2787112053, b0l__K2Node_Select_Default_11__pf), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_Select_Default_11__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_Select_Default_11__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_Select_Default_12__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "K2Node_Select_Default_12" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_Select_Default_12__pf = { "K2Node_Select_Default_12", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWB_Icon_Base_C__pf2787112053, b0l__K2Node_Select_Default_12__pf), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_Select_Default_12__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_Select_Default_12__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_Select_Default_13__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "K2Node_Select_Default_13" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_Select_Default_13__pf = { "K2Node_Select_Default_13", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWB_Icon_Base_C__pf2787112053, b0l__K2Node_Select_Default_13__pf), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_Select_Default_13__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_Select_Default_13__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_Select_Default_14__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "K2Node_Select_Default_14" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_Select_Default_14__pf = { "K2Node_Select_Default_14", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWB_Icon_Base_C__pf2787112053, b0l__K2Node_Select_Default_14__pf), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_Select_Default_14__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_Select_Default_14__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_Select_Default_15__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "K2Node_Select_Default_15" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_Select_Default_15__pf = { "K2Node_Select_Default_15", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWB_Icon_Base_C__pf2787112053, b0l__K2Node_Select_Default_15__pf), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_Select_Default_15__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_Select_Default_15__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_Select_Default_16__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "K2Node_Select_Default_16" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_Select_Default_16__pf = { "K2Node_Select_Default_16", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWB_Icon_Base_C__pf2787112053, b0l__K2Node_Select_Default_16__pf), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_Select_Default_16__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_Select_Default_16__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_Select_Default_17__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "K2Node_Select_Default_17" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_Select_Default_17__pf = { "K2Node_Select_Default_17", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWB_Icon_Base_C__pf2787112053, b0l__K2Node_Select_Default_17__pf), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_Select_Default_17__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_Select_Default_17__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_bool_Variable_2__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "Temp_bool_Variable_2" },
	};
#endif
	void Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_bool_Variable_2__pf_SetBit(void* Obj)
	{
		((UWB_Icon_Base_C__pf2787112053*)Obj)->b0l__Temp_bool_Variable_2__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_bool_Variable_2__pf = { "Temp_bool_Variable_2", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UWB_Icon_Base_C__pf2787112053), &Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_bool_Variable_2__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_bool_Variable_2__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_bool_Variable_2__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_MakeStruct_SlateBrush__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "K2Node_MakeStruct_SlateBrush" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_MakeStruct_SlateBrush__pf = { "K2Node_MakeStruct_SlateBrush", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWB_Icon_Base_C__pf2787112053, b0l__K2Node_MakeStruct_SlateBrush__pf), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_MakeStruct_SlateBrush__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_MakeStruct_SlateBrush__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_MakeStruct_SlateBrush_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "K2Node_MakeStruct_SlateBrush_1" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_MakeStruct_SlateBrush_1__pf = { "K2Node_MakeStruct_SlateBrush_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWB_Icon_Base_C__pf2787112053, b0l__K2Node_MakeStruct_SlateBrush_1__pf), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_MakeStruct_SlateBrush_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_MakeStruct_SlateBrush_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_MakeStruct_SlateBrush_2__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "K2Node_MakeStruct_SlateBrush_2" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_MakeStruct_SlateBrush_2__pf = { "K2Node_MakeStruct_SlateBrush_2", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWB_Icon_Base_C__pf2787112053, b0l__K2Node_MakeStruct_SlateBrush_2__pf), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_MakeStruct_SlateBrush_2__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_MakeStruct_SlateBrush_2__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_MakeStruct_SlateBrush_3__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "K2Node_MakeStruct_SlateBrush_3" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_MakeStruct_SlateBrush_3__pf = { "K2Node_MakeStruct_SlateBrush_3", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWB_Icon_Base_C__pf2787112053, b0l__K2Node_MakeStruct_SlateBrush_3__pf), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_MakeStruct_SlateBrush_3__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_MakeStruct_SlateBrush_3__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_bool_Variable_3__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "Temp_bool_Variable_3" },
	};
#endif
	void Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_bool_Variable_3__pf_SetBit(void* Obj)
	{
		((UWB_Icon_Base_C__pf2787112053*)Obj)->b0l__Temp_bool_Variable_3__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_bool_Variable_3__pf = { "Temp_bool_Variable_3", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UWB_Icon_Base_C__pf2787112053), &Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_bool_Variable_3__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_bool_Variable_3__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_bool_Variable_3__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_struct_Variable_4__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "Temp_struct_Variable_4" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_struct_Variable_4__pf = { "Temp_struct_Variable_4", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWB_Icon_Base_C__pf2787112053, b0l__Temp_struct_Variable_4__pf), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_struct_Variable_4__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_struct_Variable_4__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_Event_IsDesignTime__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "K2Node_Event_IsDesignTime" },
	};
#endif
	void Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_Event_IsDesignTime__pf_SetBit(void* Obj)
	{
		((UWB_Icon_Base_C__pf2787112053*)Obj)->b0l__K2Node_Event_IsDesignTime__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_Event_IsDesignTime__pf = { "K2Node_Event_IsDesignTime", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UWB_Icon_Base_C__pf2787112053), &Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_Event_IsDesignTime__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_Event_IsDesignTime__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_Event_IsDesignTime__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_MakeStruct_SlateBrush_4__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "K2Node_MakeStruct_SlateBrush_4" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_MakeStruct_SlateBrush_4__pf = { "K2Node_MakeStruct_SlateBrush_4", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWB_Icon_Base_C__pf2787112053, b0l__K2Node_MakeStruct_SlateBrush_4__pf), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_MakeStruct_SlateBrush_4__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_MakeStruct_SlateBrush_4__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_Select_Default_18__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "K2Node_Select_Default_18" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_Select_Default_18__pf = { "K2Node_Select_Default_18", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWB_Icon_Base_C__pf2787112053, b0l__K2Node_Select_Default_18__pf), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_Select_Default_18__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_Select_Default_18__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_Select_Default_19__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "K2Node_Select_Default_19" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_Select_Default_19__pf = { "K2Node_Select_Default_19", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWB_Icon_Base_C__pf2787112053, b0l__K2Node_Select_Default_19__pf), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_Select_Default_19__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_Select_Default_19__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_Select_Default_20__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "K2Node_Select_Default_20" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_Select_Default_20__pf = { "K2Node_Select_Default_20", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWB_Icon_Base_C__pf2787112053, b0l__K2Node_Select_Default_20__pf), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_Select_Default_20__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_Select_Default_20__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_Select_Default_21__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "K2Node_Select_Default_21" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_Select_Default_21__pf = { "K2Node_Select_Default_21", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWB_Icon_Base_C__pf2787112053, b0l__K2Node_Select_Default_21__pf), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_Select_Default_21__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_Select_Default_21__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_Select_Default_22__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "K2Node_Select_Default_22" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_Select_Default_22__pf = { "K2Node_Select_Default_22", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWB_Icon_Base_C__pf2787112053, b0l__K2Node_Select_Default_22__pf), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_Select_Default_22__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_Select_Default_22__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_MakeStruct_SlateBrush_5__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "K2Node_MakeStruct_SlateBrush_5" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_MakeStruct_SlateBrush_5__pf = { "K2Node_MakeStruct_SlateBrush_5", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWB_Icon_Base_C__pf2787112053, b0l__K2Node_MakeStruct_SlateBrush_5__pf), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_MakeStruct_SlateBrush_5__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_MakeStruct_SlateBrush_5__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_bool_Has_Been_Initd_Variable__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "Temp_bool_Has_Been_Initd_Variable" },
	};
#endif
	void Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_bool_Has_Been_Initd_Variable__pf_SetBit(void* Obj)
	{
		((UWB_Icon_Base_C__pf2787112053*)Obj)->b0l__Temp_bool_Has_Been_Initd_Variable__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_bool_Has_Been_Initd_Variable__pf = { "Temp_bool_Has_Been_Initd_Variable", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UWB_Icon_Base_C__pf2787112053), &Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_bool_Has_Been_Initd_Variable__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_bool_Has_Been_Initd_Variable__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_bool_Has_Been_Initd_Variable__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_bool_Variable_4__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "Temp_bool_Variable_4" },
	};
#endif
	void Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_bool_Variable_4__pf_SetBit(void* Obj)
	{
		((UWB_Icon_Base_C__pf2787112053*)Obj)->b0l__Temp_bool_Variable_4__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_bool_Variable_4__pf = { "Temp_bool_Variable_4", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UWB_Icon_Base_C__pf2787112053), &Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_bool_Variable_4__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_bool_Variable_4__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_bool_Variable_4__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_Select_Default_23__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "K2Node_Select_Default_23" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_Select_Default_23__pf = { "K2Node_Select_Default_23", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWB_Icon_Base_C__pf2787112053, b0l__K2Node_Select_Default_23__pf), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_Select_Default_23__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_Select_Default_23__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_bool_IsClosed_Variable__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/WB_Icon_Base__pf2787112053.h" },
		{ "OverrideNativeName", "Temp_bool_IsClosed_Variable" },
	};
#endif
	void Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_bool_IsClosed_Variable__pf_SetBit(void* Obj)
	{
		((UWB_Icon_Base_C__pf2787112053*)Obj)->b0l__Temp_bool_IsClosed_Variable__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_bool_IsClosed_Variable__pf = { "Temp_bool_IsClosed_Variable", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UWB_Icon_Base_C__pf2787112053), &Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_bool_IsClosed_Variable__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_bool_IsClosed_Variable__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_bool_IsClosed_Variable__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__img_Icon__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__img_Icon_Base__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__img_Icon_Mask1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__img_Icon_Mask2__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__img_Icon_Outline1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__img_Icon_Outline2__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__Text_IconText__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__Icon__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__bBaseColor__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__BaseColor__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__bBaseMask__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__BaseMaskColor__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__bOutline1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__Outline1_Color__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__bContour__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__Contour_Color__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__bGlassMask__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__GlassMask_Color__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__GlassMaskxTypes__pfT_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__GlassMaskxTypes__pfT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__IconColor__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__IconScale__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__Overall_Angle__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__IconBaseTypes__pf_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__IconBaseTypes__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__IconBaseSize__pf_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__IconBaseSize__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__Custom_BaseIcon__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__Custom_Mask1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__Custom_Mask2__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__Custom_Outline1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__Custom_Outline2__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__Icon_Translation_X__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__Icon_Translation_Y__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__bUseIconText__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__IconText__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__IconText_Transform__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__IconText_Color__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_bpv__IconTextFont__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_struct_Variable__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_2__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_3__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_byte_Variable__pf_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_byte_Variable__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_4__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_5__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_6__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_7__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_byte_Variable_1__pf_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_byte_Variable_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_8__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_9__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_10__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_11__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_byte_Variable_2__pf_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_byte_Variable_2__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_12__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_13__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_14__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_15__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_byte_Variable_3__pf_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_byte_Variable_3__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_16__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_17__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_18__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_19__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_byte_Variable_4__pf_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_byte_Variable_4__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_20__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_21__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_22__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_23__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_byte_Variable_5__pf_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_byte_Variable_5__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_24__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_25__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_26__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_27__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_byte_Variable_6__pf_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_byte_Variable_6__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_28__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_29__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_30__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_31__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_byte_Variable_7__pf_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_byte_Variable_7__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_byte_Variable_8__pf_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_byte_Variable_8__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_32__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_33__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_34__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_35__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_byte_Variable_9__pf_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_byte_Variable_9__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_byte_Variable_10__pf_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_byte_Variable_10__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_byte_Variable_11__pf_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_byte_Variable_11__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_byte_Variable_12__pf_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_byte_Variable_12__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_36__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_37__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_38__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_39__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_byte_Variable_13__pf_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_byte_Variable_13__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_40__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_41__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_42__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_43__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_byte_Variable_14__pf_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_byte_Variable_14__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_44__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_45__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_46__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_object_Variable_47__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_bool_Variable__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_struct_Variable_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_Select_Default__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_Select_Default_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_Select_Default_2__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_bool_Variable_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_struct_Variable_2__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_byte_Variable_15__pf_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_byte_Variable_15__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_byte_Variable_16__pf_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_byte_Variable_16__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_Select_Default_3__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_Select_Default_4__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_byte_Variable_17__pf_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_byte_Variable_17__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_Select_Default_5__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_byte_Variable_18__pf_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_byte_Variable_18__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_struct_Variable_3__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_Select_Default_6__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_Select_Default_7__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_Select_Default_8__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_Select_Default_9__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_Select_Default_10__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_Select_Default_11__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_Select_Default_12__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_Select_Default_13__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_Select_Default_14__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_Select_Default_15__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_Select_Default_16__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_Select_Default_17__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_bool_Variable_2__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_MakeStruct_SlateBrush__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_MakeStruct_SlateBrush_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_MakeStruct_SlateBrush_2__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_MakeStruct_SlateBrush_3__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_bool_Variable_3__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_struct_Variable_4__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_Event_IsDesignTime__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_MakeStruct_SlateBrush_4__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_Select_Default_18__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_Select_Default_19__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_Select_Default_20__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_Select_Default_21__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_Select_Default_22__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_MakeStruct_SlateBrush_5__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_bool_Has_Been_Initd_Variable__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_bool_Variable_4__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__K2Node_Select_Default_23__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::NewProp_b0l__Temp_bool_IsClosed_Variable__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWB_Icon_Base_C__pf2787112053>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::ClassParams = {
		&UWB_Icon_Base_C__pf2787112053::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/ProIconPack/UI/WB_Icon_Base"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("WB_Icon_Base_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(UWB_Icon_Base_C__pf2787112053, TEXT("WB_Icon_Base_C"), 169025989);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<UWB_Icon_Base_C__pf2787112053>()
	{
		return UWB_Icon_Base_C__pf2787112053::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWB_Icon_Base_C__pf2787112053(Z_Construct_UClass_UWB_Icon_Base_C__pf2787112053, &UWB_Icon_Base_C__pf2787112053::StaticClass, TEXT("/Game/ProIconPack/UI/WB_Icon_Base"), TEXT("WB_Icon_Base_C"), true, TEXT("/Game/ProIconPack/UI/WB_Icon_Base"), TEXT("/Game/ProIconPack/UI/WB_Icon_Base.WB_Icon_Base_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWB_Icon_Base_C__pf2787112053);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
