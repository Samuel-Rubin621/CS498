// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TowerDefense/UI/Lives.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLives() {}
// Cross Module References
	TOWERDEFENSE_API UClass* Z_Construct_UClass_ULives_NoRegister();
	TOWERDEFENSE_API UClass* Z_Construct_UClass_ULives();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_TowerDefense();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ULives::execUpdateLivesText)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateLivesText(Z_Param_Value);
		P_NATIVE_END;
	}
	void ULives::StaticRegisterNativesULives()
	{
		UClass* Class = ULives::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UpdateLivesText", &ULives::execUpdateLivesText },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULives_UpdateLivesText_Statics
	{
		struct Lives_eventUpdateLivesText_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULives_UpdateLivesText_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Lives_eventUpdateLivesText_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULives_UpdateLivesText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULives_UpdateLivesText_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULives_UpdateLivesText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/Lives.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULives_UpdateLivesText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULives, nullptr, "UpdateLivesText", nullptr, nullptr, sizeof(Lives_eventUpdateLivesText_Parms), Z_Construct_UFunction_ULives_UpdateLivesText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULives_UpdateLivesText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULives_UpdateLivesText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULives_UpdateLivesText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULives_UpdateLivesText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULives_UpdateLivesText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULives_NoRegister()
	{
		return ULives::StaticClass();
	}
	struct Z_Construct_UClass_ULives_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LivesText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LivesText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULives_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_TowerDefense,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULives_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULives_UpdateLivesText, "UpdateLivesText" }, // 1384939298
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULives_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/Lives.h" },
		{ "ModuleRelativePath", "UI/Lives.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULives_Statics::NewProp_LivesText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Lives" },
		{ "Comment", "/** All variables below this point! */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/Lives.h" },
		{ "ToolTip", "All variables below this point!" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULives_Statics::NewProp_LivesText = { "LivesText", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULives, LivesText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULives_Statics::NewProp_LivesText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULives_Statics::NewProp_LivesText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULives_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULives_Statics::NewProp_LivesText,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULives_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULives>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULives_Statics::ClassParams = {
		&ULives::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULives_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULives_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULives_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULives_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULives()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULives_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULives, 2879005329);
	template<> TOWERDEFENSE_API UClass* StaticClass<ULives>()
	{
		return ULives::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULives(Z_Construct_UClass_ULives, &ULives::StaticClass, TEXT("/Script/TowerDefense"), TEXT("ULives"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULives);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
