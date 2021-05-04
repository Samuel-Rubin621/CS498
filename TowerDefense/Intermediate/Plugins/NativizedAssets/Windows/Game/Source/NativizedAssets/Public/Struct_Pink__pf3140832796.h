#pragma once
#include "GeneratedCodeHelpers.h"
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/SlateCore/Public/Styling/SlateColor.h"
#include "Struct_Pink__pf3140832796.generated.h"

USTRUCT(BlueprintType, meta=(ReplaceConverted="/Game/flat_dark_themed_gui/theme_colors/Struct_Pink.Struct_Pink", OverrideNativeName="Struct_Pink"))
struct FStruct_Pink__pf3140832796
{
public:
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="ThemeColor", Tooltip, OverrideNativeName="ThemeColor_21_5F7B3F7D441CFA27B4047AB401C1385A"))
	FSlateColor bpv__ThemeColor_21_5F7B3F7D441CFA27B4047AB401C1385A__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="BackgroundColor", Tooltip, OverrideNativeName="BackgroundColor_36_4C75C0134265468A24E20CB8810F039B"))
	FSlateColor bpv__BackgroundColor_36_4C75C0134265468A24E20CB8810F039B__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="PanelLightColor", Tooltip, OverrideNativeName="PanelLightColor_43_BDCC61C140854497F68DF1AAF5C6969A"))
	FSlateColor bpv__PanelLightColor_43_BDCC61C140854497F68DF1AAF5C6969A__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="PanelDarkColor", Tooltip, OverrideNativeName="PanelDarkColor_42_ED5E21FA41B953CAFEB940961675F5DA"))
	FSlateColor bpv__PanelDarkColor_42_ED5E21FA41B953CAFEB940961675F5DA__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="DropdownNormalColor", Tooltip, OverrideNativeName="DropdownNormalColor_28_BF54DDE2478270234B20BAA2DE421D8E"))
	FSlateColor bpv__DropdownNormalColor_28_BF54DDE2478270234B20BAA2DE421D8E__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="DropdownHoveredColor", Tooltip, OverrideNativeName="DropdownHoveredColor_32_7611633345608F14927179A0A7D05D23"))
	FSlateColor bpv__DropdownHoveredColor_32_7611633345608F14927179A0A7D05D23__pf;
	FStruct_Pink__pf3140832796();
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	bool operator== (const FStruct_Pink__pf3140832796& __Other) const
	{
		return FStruct_Pink__pf3140832796::StaticStruct()->CompareScriptStruct(this, &__Other, 0);
	};
};
