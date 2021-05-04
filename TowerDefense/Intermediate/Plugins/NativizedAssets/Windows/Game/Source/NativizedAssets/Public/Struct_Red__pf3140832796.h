#pragma once
#include "GeneratedCodeHelpers.h"
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/SlateCore/Public/Styling/SlateColor.h"
#include "Struct_Red__pf3140832796.generated.h"

USTRUCT(BlueprintType, meta=(ReplaceConverted="/Game/flat_dark_themed_gui/theme_colors/Struct_Red.Struct_Red", OverrideNativeName="Struct_Red"))
struct FStruct_Red__pf3140832796
{
public:
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="ThemeColor", Tooltip, OverrideNativeName="ThemeColor_21_5F7B3F7D441CFA27B4047AB401C1385A"))
	FSlateColor bpv__ThemeColor_21_5F7B3F7D441CFA27B4047AB401C1385A__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="BackgroundColor", Tooltip, OverrideNativeName="BackgroundColor_39_4C75C0134265468A24E20CB8810F039B"))
	FSlateColor bpv__BackgroundColor_39_4C75C0134265468A24E20CB8810F039B__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="PanelLightColor", Tooltip, OverrideNativeName="PanelLightColor_46_A473EE8A42982FDFABC6D88D7216F4E2"))
	FSlateColor bpv__PanelLightColor_46_A473EE8A42982FDFABC6D88D7216F4E2__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="PanelDarkColor", Tooltip, OverrideNativeName="PanelDarkColor_45_B6E0AAAD489250CAAB99FDB74AF27DCA"))
	FSlateColor bpv__PanelDarkColor_45_B6E0AAAD489250CAAB99FDB74AF27DCA__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="DropdownNormalColor", Tooltip, OverrideNativeName="DropdownNormalColor_30_B3A3030A44B0B2200C42CFBE84931721"))
	FSlateColor bpv__DropdownNormalColor_30_B3A3030A44B0B2200C42CFBE84931721__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="DropdownHoveredColor", Tooltip, OverrideNativeName="DropdownHoveredColor_35_F39BB1A74EDB82A4849623BC2E45F049"))
	FSlateColor bpv__DropdownHoveredColor_35_F39BB1A74EDB82A4849623BC2E45F049__pf;
	FStruct_Red__pf3140832796();
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	bool operator== (const FStruct_Red__pf3140832796& __Other) const
	{
		return FStruct_Red__pf3140832796::StaticStruct()->CompareScriptStruct(this, &__Other, 0);
	};
};
