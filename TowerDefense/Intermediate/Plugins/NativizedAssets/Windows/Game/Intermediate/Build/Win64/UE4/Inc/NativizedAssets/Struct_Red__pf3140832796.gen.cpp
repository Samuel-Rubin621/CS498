// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/Struct_Red__pf3140832796.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStruct_Red__pf3140832796() {}
// Cross Module References
	NATIVIZEDASSETS_API UScriptStruct* Z_Construct_UScriptStruct_FStruct_Red__pf3140832796();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateColor();
// End Cross Module References
class UScriptStruct* FStruct_Red__pf3140832796::StaticStruct()
{
	class UPackage* StructPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/flat_dark_themed_gui/theme_colors/Struct_Red"));
	class UScriptStruct* Singleton = Cast<UScriptStruct>(StaticFindObjectFast(UScriptStruct::StaticClass(), StructPackage, TEXT("Struct_Red")));
	if (!Singleton)
	{
		extern NATIVIZEDASSETS_API uint32 Get_Z_Construct_UScriptStruct_FStruct_Red__pf3140832796_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStruct_Red__pf3140832796, StructPackage, TEXT("Struct_Red"), sizeof(FStruct_Red__pf3140832796), Get_Z_Construct_UScriptStruct_FStruct_Red__pf3140832796_Hash());
	}
	return Singleton;
}
template<> NATIVIZEDASSETS_API UScriptStruct* StaticStruct<FStruct_Red__pf3140832796>()
{
	return FStruct_Red__pf3140832796::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStruct_Red__pf3140832796(FStruct_Red__pf3140832796::StaticStruct, TEXT("/Game/flat_dark_themed_gui/theme_colors/Struct_Red"), TEXT("Struct_Red"), true, TEXT("/Game/flat_dark_themed_gui/theme_colors/Struct_Red"), TEXT("/Game/flat_dark_themed_gui/theme_colors/Struct_Red.Struct_Red"));
static struct FScriptStruct_NativizedAssets_StaticRegisterNativesFStruct_Red__pf3140832796
{
	FScriptStruct_NativizedAssets_StaticRegisterNativesFStruct_Red__pf3140832796()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("Struct_Red")),new UScriptStruct::TCppStructOps<FStruct_Red__pf3140832796>);
	}
} ScriptStruct_NativizedAssets_StaticRegisterNativesFStruct_Red__pf3140832796;
	struct Z_Construct_UScriptStruct_FStruct_Red__pf3140832796_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__BackgroundColor_39_4C75C0134265468A24E20CB8810F039B__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__BackgroundColor_39_4C75C0134265468A24E20CB8810F039B__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__PanelLightColor_46_A473EE8A42982FDFABC6D88D7216F4E2__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__PanelLightColor_46_A473EE8A42982FDFABC6D88D7216F4E2__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__PanelDarkColor_45_B6E0AAAD489250CAAB99FDB74AF27DCA__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__PanelDarkColor_45_B6E0AAAD489250CAAB99FDB74AF27DCA__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__DropdownNormalColor_30_B3A3030A44B0B2200C42CFBE84931721__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__DropdownNormalColor_30_B3A3030A44B0B2200C42CFBE84931721__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__DropdownHoveredColor_35_F39BB1A74EDB82A4849623BC2E45F049__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__DropdownHoveredColor_35_F39BB1A74EDB82A4849623BC2E45F049__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
	UObject* Z_Construct_UScriptStruct_FStruct_Red__pf3140832796_Statics::OuterFuncGetter()
	{
		return FindOrConstructDynamicTypePackage(TEXT("/Game/flat_dark_themed_gui/theme_colors/Struct_Red"));	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStruct_Red__pf3140832796_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Struct_Red__pf3140832796.h" },
		{ "OverrideNativeName", "Struct_Red" },
		{ "ReplaceConverted", "/Game/flat_dark_themed_gui/theme_colors/Struct_Red.Struct_Red" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStruct_Red__pf3140832796_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStruct_Red__pf3140832796>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStruct_Red__pf3140832796_Statics::NewProp_bpv__ThemeColor_21_5F7B3F7D441CFA27B4047AB401C1385A__pf_MetaData[] = {
		{ "Category", "Struct_Red__pf3140832796" },
		{ "DisplayName", "ThemeColor" },
		{ "ModuleRelativePath", "Public/Struct_Red__pf3140832796.h" },
		{ "OverrideNativeName", "ThemeColor_21_5F7B3F7D441CFA27B4047AB401C1385A" },
		{ "Tooltip", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStruct_Red__pf3140832796_Statics::NewProp_bpv__ThemeColor_21_5F7B3F7D441CFA27B4047AB401C1385A__pf = { "ThemeColor_21_5F7B3F7D441CFA27B4047AB401C1385A", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStruct_Red__pf3140832796, bpv__ThemeColor_21_5F7B3F7D441CFA27B4047AB401C1385A__pf), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FStruct_Red__pf3140832796_Statics::NewProp_bpv__ThemeColor_21_5F7B3F7D441CFA27B4047AB401C1385A__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStruct_Red__pf3140832796_Statics::NewProp_bpv__ThemeColor_21_5F7B3F7D441CFA27B4047AB401C1385A__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStruct_Red__pf3140832796_Statics::NewProp_bpv__BackgroundColor_39_4C75C0134265468A24E20CB8810F039B__pf_MetaData[] = {
		{ "Category", "Struct_Red__pf3140832796" },
		{ "DisplayName", "BackgroundColor" },
		{ "ModuleRelativePath", "Public/Struct_Red__pf3140832796.h" },
		{ "OverrideNativeName", "BackgroundColor_39_4C75C0134265468A24E20CB8810F039B" },
		{ "Tooltip", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStruct_Red__pf3140832796_Statics::NewProp_bpv__BackgroundColor_39_4C75C0134265468A24E20CB8810F039B__pf = { "BackgroundColor_39_4C75C0134265468A24E20CB8810F039B", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStruct_Red__pf3140832796, bpv__BackgroundColor_39_4C75C0134265468A24E20CB8810F039B__pf), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FStruct_Red__pf3140832796_Statics::NewProp_bpv__BackgroundColor_39_4C75C0134265468A24E20CB8810F039B__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStruct_Red__pf3140832796_Statics::NewProp_bpv__BackgroundColor_39_4C75C0134265468A24E20CB8810F039B__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStruct_Red__pf3140832796_Statics::NewProp_bpv__PanelLightColor_46_A473EE8A42982FDFABC6D88D7216F4E2__pf_MetaData[] = {
		{ "Category", "Struct_Red__pf3140832796" },
		{ "DisplayName", "PanelLightColor" },
		{ "ModuleRelativePath", "Public/Struct_Red__pf3140832796.h" },
		{ "OverrideNativeName", "PanelLightColor_46_A473EE8A42982FDFABC6D88D7216F4E2" },
		{ "Tooltip", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStruct_Red__pf3140832796_Statics::NewProp_bpv__PanelLightColor_46_A473EE8A42982FDFABC6D88D7216F4E2__pf = { "PanelLightColor_46_A473EE8A42982FDFABC6D88D7216F4E2", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStruct_Red__pf3140832796, bpv__PanelLightColor_46_A473EE8A42982FDFABC6D88D7216F4E2__pf), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FStruct_Red__pf3140832796_Statics::NewProp_bpv__PanelLightColor_46_A473EE8A42982FDFABC6D88D7216F4E2__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStruct_Red__pf3140832796_Statics::NewProp_bpv__PanelLightColor_46_A473EE8A42982FDFABC6D88D7216F4E2__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStruct_Red__pf3140832796_Statics::NewProp_bpv__PanelDarkColor_45_B6E0AAAD489250CAAB99FDB74AF27DCA__pf_MetaData[] = {
		{ "Category", "Struct_Red__pf3140832796" },
		{ "DisplayName", "PanelDarkColor" },
		{ "ModuleRelativePath", "Public/Struct_Red__pf3140832796.h" },
		{ "OverrideNativeName", "PanelDarkColor_45_B6E0AAAD489250CAAB99FDB74AF27DCA" },
		{ "Tooltip", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStruct_Red__pf3140832796_Statics::NewProp_bpv__PanelDarkColor_45_B6E0AAAD489250CAAB99FDB74AF27DCA__pf = { "PanelDarkColor_45_B6E0AAAD489250CAAB99FDB74AF27DCA", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStruct_Red__pf3140832796, bpv__PanelDarkColor_45_B6E0AAAD489250CAAB99FDB74AF27DCA__pf), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FStruct_Red__pf3140832796_Statics::NewProp_bpv__PanelDarkColor_45_B6E0AAAD489250CAAB99FDB74AF27DCA__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStruct_Red__pf3140832796_Statics::NewProp_bpv__PanelDarkColor_45_B6E0AAAD489250CAAB99FDB74AF27DCA__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStruct_Red__pf3140832796_Statics::NewProp_bpv__DropdownNormalColor_30_B3A3030A44B0B2200C42CFBE84931721__pf_MetaData[] = {
		{ "Category", "Struct_Red__pf3140832796" },
		{ "DisplayName", "DropdownNormalColor" },
		{ "ModuleRelativePath", "Public/Struct_Red__pf3140832796.h" },
		{ "OverrideNativeName", "DropdownNormalColor_30_B3A3030A44B0B2200C42CFBE84931721" },
		{ "Tooltip", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStruct_Red__pf3140832796_Statics::NewProp_bpv__DropdownNormalColor_30_B3A3030A44B0B2200C42CFBE84931721__pf = { "DropdownNormalColor_30_B3A3030A44B0B2200C42CFBE84931721", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStruct_Red__pf3140832796, bpv__DropdownNormalColor_30_B3A3030A44B0B2200C42CFBE84931721__pf), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FStruct_Red__pf3140832796_Statics::NewProp_bpv__DropdownNormalColor_30_B3A3030A44B0B2200C42CFBE84931721__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStruct_Red__pf3140832796_Statics::NewProp_bpv__DropdownNormalColor_30_B3A3030A44B0B2200C42CFBE84931721__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStruct_Red__pf3140832796_Statics::NewProp_bpv__DropdownHoveredColor_35_F39BB1A74EDB82A4849623BC2E45F049__pf_MetaData[] = {
		{ "Category", "Struct_Red__pf3140832796" },
		{ "DisplayName", "DropdownHoveredColor" },
		{ "ModuleRelativePath", "Public/Struct_Red__pf3140832796.h" },
		{ "OverrideNativeName", "DropdownHoveredColor_35_F39BB1A74EDB82A4849623BC2E45F049" },
		{ "Tooltip", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStruct_Red__pf3140832796_Statics::NewProp_bpv__DropdownHoveredColor_35_F39BB1A74EDB82A4849623BC2E45F049__pf = { "DropdownHoveredColor_35_F39BB1A74EDB82A4849623BC2E45F049", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStruct_Red__pf3140832796, bpv__DropdownHoveredColor_35_F39BB1A74EDB82A4849623BC2E45F049__pf), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FStruct_Red__pf3140832796_Statics::NewProp_bpv__DropdownHoveredColor_35_F39BB1A74EDB82A4849623BC2E45F049__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStruct_Red__pf3140832796_Statics::NewProp_bpv__DropdownHoveredColor_35_F39BB1A74EDB82A4849623BC2E45F049__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStruct_Red__pf3140832796_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStruct_Red__pf3140832796_Statics::NewProp_bpv__ThemeColor_21_5F7B3F7D441CFA27B4047AB401C1385A__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStruct_Red__pf3140832796_Statics::NewProp_bpv__BackgroundColor_39_4C75C0134265468A24E20CB8810F039B__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStruct_Red__pf3140832796_Statics::NewProp_bpv__PanelLightColor_46_A473EE8A42982FDFABC6D88D7216F4E2__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStruct_Red__pf3140832796_Statics::NewProp_bpv__PanelDarkColor_45_B6E0AAAD489250CAAB99FDB74AF27DCA__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStruct_Red__pf3140832796_Statics::NewProp_bpv__DropdownNormalColor_30_B3A3030A44B0B2200C42CFBE84931721__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStruct_Red__pf3140832796_Statics::NewProp_bpv__DropdownHoveredColor_35_F39BB1A74EDB82A4849623BC2E45F049__pf,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStruct_Red__pf3140832796_Statics::ReturnStructParams = {
		(UObject* (*)())&OuterFuncGetter,
		nullptr,
		&NewStructOps,
		"Struct_Red",
		sizeof(FStruct_Red__pf3140832796),
		alignof(FStruct_Red__pf3140832796),
		Z_Construct_UScriptStruct_FStruct_Red__pf3140832796_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStruct_Red__pf3140832796_Statics::PropPointers),
		RF_Public|RF_Transient,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStruct_Red__pf3140832796_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStruct_Red__pf3140832796_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStruct_Red__pf3140832796()
	{
		extern uint32 Get_Z_Construct_UScriptStruct_FStruct_Red__pf3140832796_Hash();
		UPackage* Outer = FindOrConstructDynamicTypePackage(TEXT("/Game/flat_dark_themed_gui/theme_colors/Struct_Red"));
		UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Struct_Red"), sizeof(FStruct_Red__pf3140832796), Get_Z_Construct_UScriptStruct_FStruct_Red__pf3140832796_Hash(), true);
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStruct_Red__pf3140832796_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStruct_Red__pf3140832796_Hash() { return 1174450101U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
