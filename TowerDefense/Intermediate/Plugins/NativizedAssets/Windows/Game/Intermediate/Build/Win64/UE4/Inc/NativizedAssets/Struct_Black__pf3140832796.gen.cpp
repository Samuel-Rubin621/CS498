// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/Struct_Black__pf3140832796.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStruct_Black__pf3140832796() {}
// Cross Module References
	NATIVIZEDASSETS_API UScriptStruct* Z_Construct_UScriptStruct_FStruct_Black__pf3140832796();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateColor();
// End Cross Module References
class UScriptStruct* FStruct_Black__pf3140832796::StaticStruct()
{
	class UPackage* StructPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/flat_dark_themed_gui/theme_colors/Struct_Black"));
	class UScriptStruct* Singleton = Cast<UScriptStruct>(StaticFindObjectFast(UScriptStruct::StaticClass(), StructPackage, TEXT("Struct_Black")));
	if (!Singleton)
	{
		extern NATIVIZEDASSETS_API uint32 Get_Z_Construct_UScriptStruct_FStruct_Black__pf3140832796_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStruct_Black__pf3140832796, StructPackage, TEXT("Struct_Black"), sizeof(FStruct_Black__pf3140832796), Get_Z_Construct_UScriptStruct_FStruct_Black__pf3140832796_Hash());
	}
	return Singleton;
}
template<> NATIVIZEDASSETS_API UScriptStruct* StaticStruct<FStruct_Black__pf3140832796>()
{
	return FStruct_Black__pf3140832796::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStruct_Black__pf3140832796(FStruct_Black__pf3140832796::StaticStruct, TEXT("/Game/flat_dark_themed_gui/theme_colors/Struct_Black"), TEXT("Struct_Black"), true, TEXT("/Game/flat_dark_themed_gui/theme_colors/Struct_Black"), TEXT("/Game/flat_dark_themed_gui/theme_colors/Struct_Black.Struct_Black"));
static struct FScriptStruct_NativizedAssets_StaticRegisterNativesFStruct_Black__pf3140832796
{
	FScriptStruct_NativizedAssets_StaticRegisterNativesFStruct_Black__pf3140832796()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("Struct_Black")),new UScriptStruct::TCppStructOps<FStruct_Black__pf3140832796>);
	}
} ScriptStruct_NativizedAssets_StaticRegisterNativesFStruct_Black__pf3140832796;
	struct Z_Construct_UScriptStruct_FStruct_Black__pf3140832796_Statics
	{
		static UObject* OuterFuncGetter();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__ThemeColor_21_5F7B3F7D441CFA27B4047AB401C1385A__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__ThemeColor_21_5F7B3F7D441CFA27B4047AB401C1385A__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__BackgroundColor_35_4C75C0134265468A24E20CB8810F039B__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__BackgroundColor_35_4C75C0134265468A24E20CB8810F039B__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__PanelLightColor_42_116F0D9142CDDA86F5B3C896EFF1C5D5__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__PanelLightColor_42_116F0D9142CDDA86F5B3C896EFF1C5D5__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__PanelDarkColor_41_B8F562DF4B4F61587FEFED928EB02A7B__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__PanelDarkColor_41_B8F562DF4B4F61587FEFED928EB02A7B__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__DropdownNormalColor_27_5912B83F42FC3B7F3C45FEA3E9C863C7__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__DropdownNormalColor_27_5912B83F42FC3B7F3C45FEA3E9C863C7__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__DropdownHoveredColor_31_6ECB20AB4FE65CBEA72B8A989F3868FB__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__DropdownHoveredColor_31_6ECB20AB4FE65CBEA72B8A989F3868FB__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
	UObject* Z_Construct_UScriptStruct_FStruct_Black__pf3140832796_Statics::OuterFuncGetter()
	{
		return FindOrConstructDynamicTypePackage(TEXT("/Game/flat_dark_themed_gui/theme_colors/Struct_Black"));	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStruct_Black__pf3140832796_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Struct_Black__pf3140832796.h" },
		{ "OverrideNativeName", "Struct_Black" },
		{ "ReplaceConverted", "/Game/flat_dark_themed_gui/theme_colors/Struct_Black.Struct_Black" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStruct_Black__pf3140832796_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStruct_Black__pf3140832796>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStruct_Black__pf3140832796_Statics::NewProp_bpv__ThemeColor_21_5F7B3F7D441CFA27B4047AB401C1385A__pf_MetaData[] = {
		{ "Category", "Struct_Black__pf3140832796" },
		{ "DisplayName", "ThemeColor" },
		{ "ModuleRelativePath", "Public/Struct_Black__pf3140832796.h" },
		{ "OverrideNativeName", "ThemeColor_21_5F7B3F7D441CFA27B4047AB401C1385A" },
		{ "Tooltip", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStruct_Black__pf3140832796_Statics::NewProp_bpv__ThemeColor_21_5F7B3F7D441CFA27B4047AB401C1385A__pf = { "ThemeColor_21_5F7B3F7D441CFA27B4047AB401C1385A", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStruct_Black__pf3140832796, bpv__ThemeColor_21_5F7B3F7D441CFA27B4047AB401C1385A__pf), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FStruct_Black__pf3140832796_Statics::NewProp_bpv__ThemeColor_21_5F7B3F7D441CFA27B4047AB401C1385A__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStruct_Black__pf3140832796_Statics::NewProp_bpv__ThemeColor_21_5F7B3F7D441CFA27B4047AB401C1385A__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStruct_Black__pf3140832796_Statics::NewProp_bpv__BackgroundColor_35_4C75C0134265468A24E20CB8810F039B__pf_MetaData[] = {
		{ "Category", "Struct_Black__pf3140832796" },
		{ "DisplayName", "BackgroundColor" },
		{ "ModuleRelativePath", "Public/Struct_Black__pf3140832796.h" },
		{ "OverrideNativeName", "BackgroundColor_35_4C75C0134265468A24E20CB8810F039B" },
		{ "Tooltip", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStruct_Black__pf3140832796_Statics::NewProp_bpv__BackgroundColor_35_4C75C0134265468A24E20CB8810F039B__pf = { "BackgroundColor_35_4C75C0134265468A24E20CB8810F039B", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStruct_Black__pf3140832796, bpv__BackgroundColor_35_4C75C0134265468A24E20CB8810F039B__pf), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FStruct_Black__pf3140832796_Statics::NewProp_bpv__BackgroundColor_35_4C75C0134265468A24E20CB8810F039B__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStruct_Black__pf3140832796_Statics::NewProp_bpv__BackgroundColor_35_4C75C0134265468A24E20CB8810F039B__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStruct_Black__pf3140832796_Statics::NewProp_bpv__PanelLightColor_42_116F0D9142CDDA86F5B3C896EFF1C5D5__pf_MetaData[] = {
		{ "Category", "Struct_Black__pf3140832796" },
		{ "DisplayName", "PanelLightColor" },
		{ "ModuleRelativePath", "Public/Struct_Black__pf3140832796.h" },
		{ "OverrideNativeName", "PanelLightColor_42_116F0D9142CDDA86F5B3C896EFF1C5D5" },
		{ "Tooltip", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStruct_Black__pf3140832796_Statics::NewProp_bpv__PanelLightColor_42_116F0D9142CDDA86F5B3C896EFF1C5D5__pf = { "PanelLightColor_42_116F0D9142CDDA86F5B3C896EFF1C5D5", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStruct_Black__pf3140832796, bpv__PanelLightColor_42_116F0D9142CDDA86F5B3C896EFF1C5D5__pf), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FStruct_Black__pf3140832796_Statics::NewProp_bpv__PanelLightColor_42_116F0D9142CDDA86F5B3C896EFF1C5D5__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStruct_Black__pf3140832796_Statics::NewProp_bpv__PanelLightColor_42_116F0D9142CDDA86F5B3C896EFF1C5D5__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStruct_Black__pf3140832796_Statics::NewProp_bpv__PanelDarkColor_41_B8F562DF4B4F61587FEFED928EB02A7B__pf_MetaData[] = {
		{ "Category", "Struct_Black__pf3140832796" },
		{ "DisplayName", "PanelDarkColor" },
		{ "ModuleRelativePath", "Public/Struct_Black__pf3140832796.h" },
		{ "OverrideNativeName", "PanelDarkColor_41_B8F562DF4B4F61587FEFED928EB02A7B" },
		{ "Tooltip", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStruct_Black__pf3140832796_Statics::NewProp_bpv__PanelDarkColor_41_B8F562DF4B4F61587FEFED928EB02A7B__pf = { "PanelDarkColor_41_B8F562DF4B4F61587FEFED928EB02A7B", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStruct_Black__pf3140832796, bpv__PanelDarkColor_41_B8F562DF4B4F61587FEFED928EB02A7B__pf), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FStruct_Black__pf3140832796_Statics::NewProp_bpv__PanelDarkColor_41_B8F562DF4B4F61587FEFED928EB02A7B__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStruct_Black__pf3140832796_Statics::NewProp_bpv__PanelDarkColor_41_B8F562DF4B4F61587FEFED928EB02A7B__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStruct_Black__pf3140832796_Statics::NewProp_bpv__DropdownNormalColor_27_5912B83F42FC3B7F3C45FEA3E9C863C7__pf_MetaData[] = {
		{ "Category", "Struct_Black__pf3140832796" },
		{ "DisplayName", "DropdownNormalColor" },
		{ "ModuleRelativePath", "Public/Struct_Black__pf3140832796.h" },
		{ "OverrideNativeName", "DropdownNormalColor_27_5912B83F42FC3B7F3C45FEA3E9C863C7" },
		{ "Tooltip", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStruct_Black__pf3140832796_Statics::NewProp_bpv__DropdownNormalColor_27_5912B83F42FC3B7F3C45FEA3E9C863C7__pf = { "DropdownNormalColor_27_5912B83F42FC3B7F3C45FEA3E9C863C7", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStruct_Black__pf3140832796, bpv__DropdownNormalColor_27_5912B83F42FC3B7F3C45FEA3E9C863C7__pf), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FStruct_Black__pf3140832796_Statics::NewProp_bpv__DropdownNormalColor_27_5912B83F42FC3B7F3C45FEA3E9C863C7__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStruct_Black__pf3140832796_Statics::NewProp_bpv__DropdownNormalColor_27_5912B83F42FC3B7F3C45FEA3E9C863C7__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStruct_Black__pf3140832796_Statics::NewProp_bpv__DropdownHoveredColor_31_6ECB20AB4FE65CBEA72B8A989F3868FB__pf_MetaData[] = {
		{ "Category", "Struct_Black__pf3140832796" },
		{ "DisplayName", "DropdownHoveredColor" },
		{ "ModuleRelativePath", "Public/Struct_Black__pf3140832796.h" },
		{ "OverrideNativeName", "DropdownHoveredColor_31_6ECB20AB4FE65CBEA72B8A989F3868FB" },
		{ "Tooltip", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStruct_Black__pf3140832796_Statics::NewProp_bpv__DropdownHoveredColor_31_6ECB20AB4FE65CBEA72B8A989F3868FB__pf = { "DropdownHoveredColor_31_6ECB20AB4FE65CBEA72B8A989F3868FB", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStruct_Black__pf3140832796, bpv__DropdownHoveredColor_31_6ECB20AB4FE65CBEA72B8A989F3868FB__pf), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FStruct_Black__pf3140832796_Statics::NewProp_bpv__DropdownHoveredColor_31_6ECB20AB4FE65CBEA72B8A989F3868FB__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStruct_Black__pf3140832796_Statics::NewProp_bpv__DropdownHoveredColor_31_6ECB20AB4FE65CBEA72B8A989F3868FB__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStruct_Black__pf3140832796_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStruct_Black__pf3140832796_Statics::NewProp_bpv__ThemeColor_21_5F7B3F7D441CFA27B4047AB401C1385A__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStruct_Black__pf3140832796_Statics::NewProp_bpv__BackgroundColor_35_4C75C0134265468A24E20CB8810F039B__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStruct_Black__pf3140832796_Statics::NewProp_bpv__PanelLightColor_42_116F0D9142CDDA86F5B3C896EFF1C5D5__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStruct_Black__pf3140832796_Statics::NewProp_bpv__PanelDarkColor_41_B8F562DF4B4F61587FEFED928EB02A7B__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStruct_Black__pf3140832796_Statics::NewProp_bpv__DropdownNormalColor_27_5912B83F42FC3B7F3C45FEA3E9C863C7__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStruct_Black__pf3140832796_Statics::NewProp_bpv__DropdownHoveredColor_31_6ECB20AB4FE65CBEA72B8A989F3868FB__pf,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStruct_Black__pf3140832796_Statics::ReturnStructParams = {
		(UObject* (*)())&OuterFuncGetter,
		nullptr,
		&NewStructOps,
		"Struct_Black",
		sizeof(FStruct_Black__pf3140832796),
		alignof(FStruct_Black__pf3140832796),
		Z_Construct_UScriptStruct_FStruct_Black__pf3140832796_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStruct_Black__pf3140832796_Statics::PropPointers),
		RF_Public|RF_Transient,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStruct_Black__pf3140832796_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStruct_Black__pf3140832796_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStruct_Black__pf3140832796()
	{
		extern uint32 Get_Z_Construct_UScriptStruct_FStruct_Black__pf3140832796_Hash();
		UPackage* Outer = FindOrConstructDynamicTypePackage(TEXT("/Game/flat_dark_themed_gui/theme_colors/Struct_Black"));
		UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Struct_Black"), sizeof(FStruct_Black__pf3140832796), Get_Z_Construct_UScriptStruct_FStruct_Black__pf3140832796_Hash(), true);
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStruct_Black__pf3140832796_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStruct_Black__pf3140832796_Hash() { return 3946422371U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
