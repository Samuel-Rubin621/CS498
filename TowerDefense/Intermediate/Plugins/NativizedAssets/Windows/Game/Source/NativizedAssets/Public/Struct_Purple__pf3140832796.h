#pragma once
#include "GeneratedCodeHelpers.h"
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/SlateCore/Public/Styling/SlateColor.h"
#include "Struct_Purple__pf3140832796.generated.h"

USTRUCT(BlueprintType, meta=(ReplaceConverted="/Game/flat_dark_themed_gui/theme_colors/Struct_Purple.Struct_Purple", OverrideNativeName="Struct_Purple"))
struct FStruct_Purple__pf3140832796
{
public:
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="ThemeColor", Tooltip, OverrideNativeName="ThemeColor_21_5F7B3F7D441CFA27B4047AB401C1385A"))
	FSlateColor bpv__ThemeColor_21_5F7B3F7D441CFA27B4047AB401C1385A__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="BackgroundColor", Tooltip, OverrideNativeName="BackgroundColor_36_4C75C0134265468A24E20CB8810F039B"))
	FSlateColor bpv__BackgroundColor_36_4C75C0134265468A24E20CB8810F039B__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="PanelLightColor", Tooltip, OverrideNativeName="PanelLightColor_43_68E78BBA4D87D36B0B93FB981DFC75B5"))
	FSlateColor bpv__PanelLightColor_43_68E78BBA4D87D36B0B93FB981DFC75B5__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="PanelDarkColor", Tooltip, OverrideNativeName="PanelDarkColor_42_6BD7BCFC4B5E8C14921614A9F8FFB32C"))
	FSlateColor bpv__PanelDarkColor_42_6BD7BCFC4B5E8C14921614A9F8FFB32C__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="DropdownNormalColor", Tooltip, OverrideNativeName="DropdownNormalColor_27_B8A5F6754D7BBB75A30D61A6D2758E65"))
	FSlateColor bpv__DropdownNormalColor_27_B8A5F6754D7BBB75A30D61A6D2758E65__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="DropdownHoveredColor", Tooltip, OverrideNativeName="DropdownHoveredColor_32_5AFA48DA4972B45158996C97EEDD3A8E"))
	FSlateColor bpv__DropdownHoveredColor_32_5AFA48DA4972B45158996C97EEDD3A8E__pf;
	FStruct_Purple__pf3140832796();
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	bool operator== (const FStruct_Purple__pf3140832796& __Other) const
	{
		return FStruct_Purple__pf3140832796::StaticStruct()->CompareScriptStruct(this, &__Other, 0);
	};
};
