// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/Struct_Purple__pf3140832796.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStruct_Purple__pf3140832796() {}
// Cross Module References
	NATIVIZEDASSETS_API UScriptStruct* Z_Construct_UScriptStruct_FStruct_Purple__pf3140832796();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateColor();
// End Cross Module References
class UScriptStruct* FStruct_Purple__pf3140832796::StaticStruct()
{
	class UPackage* StructPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/flat_dark_themed_gui/theme_colors/Struct_Purple"));
	class UScriptStruct* Singleton = Cast<UScriptStruct>(StaticFindObjectFast(UScriptStruct::StaticClass(), StructPackage, TEXT("Struct_Purple")));
	if (!Singleton)
	{
		extern NATIVIZEDASSETS_API uint32 Get_Z_Construct_UScriptStruct_FStruct_Purple__pf3140832796_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStruct_Purple__pf3140832796, StructPackage, TEXT("Struct_Purple"), sizeof(FStruct_Purple__pf3140832796), Get_Z_Construct_UScriptStruct_FStruct_Purple__pf3140832796_Hash());
	}
	return Singleton;
}
template<> NATIVIZEDASSETS_API UScriptStruct* StaticStruct<FStruct_Purple__pf3140832796>()
{
	return FStruct_Purple__pf3140832796::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStruct_Purple__pf3140832796(FStruct_Purple__pf3140832796::StaticStruct, TEXT("/Game/flat_dark_themed_gui/theme_colors/Struct_Purple"), TEXT("Struct_Purple"), true, TEXT("/Game/flat_dark_themed_gui/theme_colors/Struct_Purple"), TEXT("/Game/flat_dark_themed_gui/theme_colors/Struct_Purple.Struct_Purple"));
static struct FScriptStruct_NativizedAssets_StaticRegisterNativesFStruct_Purple__pf3140832796
{
	FScriptStruct_NativizedAssets_StaticRegisterNativesFStruct_Purple__pf3140832796()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("Struct_Purple")),new UScriptStruct::TCppStructOps<FStruct_Purple__pf3140832796>);
	}
} ScriptStruct_NativizedAssets_StaticRegisterNativesFStruct_Purple__pf3140832796;
	struct Z_Construct_UScriptStruct_FStruct_Purple__pf3140832796_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__BackgroundColor_36_4C75C0134265468A24E20CB8810F039B__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__BackgroundColor_36_4C75C0134265468A24E20CB8810F039B__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__PanelLightColor_43_68E78BBA4D87D36B0B93FB981DFC75B5__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__PanelLightColor_43_68E78BBA4D87D36B0B93FB981DFC75B5__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__PanelDarkColor_42_6BD7BCFC4B5E8C14921614A9F8FFB32C__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__PanelDarkColor_42_6BD7BCFC4B5E8C14921614A9F8FFB32C__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__DropdownNormalColor_27_B8A5F6754D7BBB75A30D61A6D2758E65__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__DropdownNormalColor_27_B8A5F6754D7BBB75A30D61A6D2758E65__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__DropdownHoveredColor_32_5AFA48DA4972B45158996C97EEDD3A8E__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__DropdownHoveredColor_32_5AFA48DA4972B45158996C97EEDD3A8E__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
	UObject* Z_Construct_UScriptStruct_FStruct_Purple__pf3140832796_Statics::OuterFuncGetter()
	{
		return FindOrConstructDynamicTypePackage(TEXT("/Game/flat_dark_themed_gui/theme_colors/Struct_Purple"));	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStruct_Purple__pf3140832796_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Struct_Purple__pf3140832796.h" },
		{ "OverrideNativeName", "Struct_Purple" },
		{ "ReplaceConverted", "/Game/flat_dark_themed_gui/theme_colors/Struct_Purple.Struct_Purple" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStruct_Purple__pf3140832796_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStruct_Purple__pf3140832796>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStruct_Purple__pf3140832796_Statics::NewProp_bpv__ThemeColor_21_5F7B3F7D441CFA27B4047AB401C1385A__pf_MetaData[] = {
		{ "Category", "Struct_Purple__pf3140832796" },
		{ "DisplayName", "ThemeColor" },
		{ "ModuleRelativePath", "Public/Struct_Purple__pf3140832796.h" },
		{ "OverrideNativeName", "ThemeColor_21_5F7B3F7D441CFA27B4047AB401C1385A" },
		{ "Tooltip", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStruct_Purple__pf3140832796_Statics::NewProp_bpv__ThemeColor_21_5F7B3F7D441CFA27B4047AB401C1385A__pf = { "ThemeColor_21_5F7B3F7D441CFA27B4047AB401C1385A", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStruct_Purple__pf3140832796, bpv__ThemeColor_21_5F7B3F7D441CFA27B4047AB401C1385A__pf), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FStruct_Purple__pf3140832796_Statics::NewProp_bpv__ThemeColor_21_5F7B3F7D441CFA27B4047AB401C1385A__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStruct_Purple__pf3140832796_Statics::NewProp_bpv__ThemeColor_21_5F7B3F7D441CFA27B4047AB401C1385A__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStruct_Purple__pf3140832796_Statics::NewProp_bpv__BackgroundColor_36_4C75C0134265468A24E20CB8810F039B__pf_MetaData[] = {
		{ "Category", "Struct_Purple__pf3140832796" },
		{ "DisplayName", "BackgroundColor" },
		{ "ModuleRelativePath", "Public/Struct_Purple__pf3140832796.h" },
		{ "OverrideNativeName", "BackgroundColor_36_4C75C0134265468A24E20CB8810F039B" },
		{ "Tooltip", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStruct_Purple__pf3140832796_Statics::NewProp_bpv__BackgroundColor_36_4C75C0134265468A24E20CB8810F039B__pf = { "BackgroundColor_36_4C75C0134265468A24E20CB8810F039B", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStruct_Purple__pf3140832796, bpv__BackgroundColor_36_4C75C0134265468A24E20CB8810F039B__pf), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FStruct_Purple__pf3140832796_Statics::NewProp_bpv__BackgroundColor_36_4C75C0134265468A24E20CB8810F039B__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStruct_Purple__pf3140832796_Statics::NewProp_bpv__BackgroundColor_36_4C75C0134265468A24E20CB8810F039B__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStruct_Purple__pf3140832796_Statics::NewProp_bpv__PanelLightColor_43_68E78BBA4D87D36B0B93FB981DFC75B5__pf_MetaData[] = {
		{ "Category", "Struct_Purple__pf3140832796" },
		{ "DisplayName", "PanelLightColor" },
		{ "ModuleRelativePath", "Public/Struct_Purple__pf3140832796.h" },
		{ "OverrideNativeName", "PanelLightColor_43_68E78BBA4D87D36B0B93FB981DFC75B5" },
		{ "Tooltip", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStruct_Purple__pf3140832796_Statics::NewProp_bpv__PanelLightColor_43_68E78BBA4D87D36B0B93FB981DFC75B5__pf = { "PanelLightColor_43_68E78BBA4D87D36B0B93FB981DFC75B5", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStruct_Purple__pf3140832796, bpv__PanelLightColor_43_68E78BBA4D87D36B0B93FB981DFC75B5__pf), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FStruct_Purple__pf3140832796_Statics::NewProp_bpv__PanelLightColor_43_68E78BBA4D87D36B0B93FB981DFC75B5__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStruct_Purple__pf3140832796_Statics::NewProp_bpv__PanelLightColor_43_68E78BBA4D87D36B0B93FB981DFC75B5__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStruct_Purple__pf3140832796_Statics::NewProp_bpv__PanelDarkColor_42_6BD7BCFC4B5E8C14921614A9F8FFB32C__pf_MetaData[] = {
		{ "Category", "Struct_Purple__pf3140832796" },
		{ "DisplayName", "PanelDarkColor" },
		{ "ModuleRelativePath", "Public/Struct_Purple__pf3140832796.h" },
		{ "OverrideNativeName", "PanelDarkColor_42_6BD7BCFC4B5E8C14921614A9F8FFB32C" },
		{ "Tooltip", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStruct_Purple__pf3140832796_Statics::NewProp_bpv__PanelDarkColor_42_6BD7BCFC4B5E8C14921614A9F8FFB32C__pf = { "PanelDarkColor_42_6BD7BCFC4B5E8C14921614A9F8FFB32C", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStruct_Purple__pf3140832796, bpv__PanelDarkColor_42_6BD7BCFC4B5E8C14921614A9F8FFB32C__pf), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FStruct_Purple__pf3140832796_Statics::NewProp_bpv__PanelDarkColor_42_6BD7BCFC4B5E8C14921614A9F8FFB32C__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStruct_Purple__pf3140832796_Statics::NewProp_bpv__PanelDarkColor_42_6BD7BCFC4B5E8C14921614A9F8FFB32C__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStruct_Purple__pf3140832796_Statics::NewProp_bpv__DropdownNormalColor_27_B8A5F6754D7BBB75A30D61A6D2758E65__pf_MetaData[] = {
		{ "Category", "Struct_Purple__pf3140832796" },
		{ "DisplayName", "DropdownNormalColor" },
		{ "ModuleRelativePath", "Public/Struct_Purple__pf3140832796.h" },
		{ "OverrideNativeName", "DropdownNormalColor_27_B8A5F6754D7BBB75A30D61A6D2758E65" },
		{ "Tooltip", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStruct_Purple__pf3140832796_Statics::NewProp_bpv__DropdownNormalColor_27_B8A5F6754D7BBB75A30D61A6D2758E65__pf = { "DropdownNormalColor_27_B8A5F6754D7BBB75A30D61A6D2758E65", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStruct_Purple__pf3140832796, bpv__DropdownNormalColor_27_B8A5F6754D7BBB75A30D61A6D2758E65__pf), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FStruct_Purple__pf3140832796_Statics::NewProp_bpv__DropdownNormalColor_27_B8A5F6754D7BBB75A30D61A6D2758E65__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStruct_Purple__pf3140832796_Statics::NewProp_bpv__DropdownNormalColor_27_B8A5F6754D7BBB75A30D61A6D2758E65__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStruct_Purple__pf3140832796_Statics::NewProp_bpv__DropdownHoveredColor_32_5AFA48DA4972B45158996C97EEDD3A8E__pf_MetaData[] = {
		{ "Category", "Struct_Purple__pf3140832796" },
		{ "DisplayName", "DropdownHoveredColor" },
		{ "ModuleRelativePath", "Public/Struct_Purple__pf3140832796.h" },
		{ "OverrideNativeName", "DropdownHoveredColor_32_5AFA48DA4972B45158996C97EEDD3A8E" },
		{ "Tooltip", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStruct_Purple__pf3140832796_Statics::NewProp_bpv__DropdownHoveredColor_32_5AFA48DA4972B45158996C97EEDD3A8E__pf = { "DropdownHoveredColor_32_5AFA48DA4972B45158996C97EEDD3A8E", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStruct_Purple__pf3140832796, bpv__DropdownHoveredColor_32_5AFA48DA4972B45158996C97EEDD3A8E__pf), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FStruct_Purple__pf3140832796_Statics::NewProp_bpv__DropdownHoveredColor_32_5AFA48DA4972B45158996C97EEDD3A8E__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStruct_Purple__pf3140832796_Statics::NewProp_bpv__DropdownHoveredColor_32_5AFA48DA4972B45158996C97EEDD3A8E__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStruct_Purple__pf3140832796_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStruct_Purple__pf3140832796_Statics::NewProp_bpv__ThemeColor_21_5F7B3F7D441CFA27B4047AB401C1385A__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStruct_Purple__pf3140832796_Statics::NewProp_bpv__BackgroundColor_36_4C75C0134265468A24E20CB8810F039B__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStruct_Purple__pf3140832796_Statics::NewProp_bpv__PanelLightColor_43_68E78BBA4D87D36B0B93FB981DFC75B5__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStruct_Purple__pf3140832796_Statics::NewProp_bpv__PanelDarkColor_42_6BD7BCFC4B5E8C14921614A9F8FFB32C__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStruct_Purple__pf3140832796_Statics::NewProp_bpv__DropdownNormalColor_27_B8A5F6754D7BBB75A30D61A6D2758E65__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStruct_Purple__pf3140832796_Statics::NewProp_bpv__DropdownHoveredColor_32_5AFA48DA4972B45158996C97EEDD3A8E__pf,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStruct_Purple__pf3140832796_Statics::ReturnStructParams = {
		(UObject* (*)())&OuterFuncGetter,
		nullptr,
		&NewStructOps,
		"Struct_Purple",
		sizeof(FStruct_Purple__pf3140832796),
		alignof(FStruct_Purple__pf3140832796),
		Z_Construct_UScriptStruct_FStruct_Purple__pf3140832796_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStruct_Purple__pf3140832796_Statics::PropPointers),
		RF_Public|RF_Transient,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStruct_Purple__pf3140832796_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStruct_Purple__pf3140832796_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStruct_Purple__pf3140832796()
	{
		extern uint32 Get_Z_Construct_UScriptStruct_FStruct_Purple__pf3140832796_Hash();
		UPackage* Outer = FindOrConstructDynamicTypePackage(TEXT("/Game/flat_dark_themed_gui/theme_colors/Struct_Purple"));
		UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Struct_Purple"), sizeof(FStruct_Purple__pf3140832796), Get_Z_Construct_UScriptStruct_FStruct_Purple__pf3140832796_Hash(), true);
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStruct_Purple__pf3140832796_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStruct_Purple__pf3140832796_Hash() { return 3022325207U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
