#pragma once
#include "GeneratedCodeHelpers.h"
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/SlateCore/Public/Styling/SlateColor.h"
#include "Struct_Green__pf3140832796.generated.h"

USTRUCT(BlueprintType, meta=(ReplaceConverted="/Game/flat_dark_themed_gui/theme_colors/Struct_Green.Struct_Green", OverrideNativeName="Struct_Green"))
struct FStruct_Green__pf3140832796
{
public:
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="ThemeColor", Tooltip, OverrideNativeName="ThemeColor_21_5F7B3F7D441CFA27B4047AB401C1385A"))
	FSlateColor bpv__ThemeColor_21_5F7B3F7D441CFA27B4047AB401C1385A__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="BackgroundColor", Tooltip, OverrideNativeName="BackgroundColor_35_4C75C0134265468A24E20CB8810F039B"))
	FSlateColor bpv__BackgroundColor_35_4C75C0134265468A24E20CB8810F039B__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="PanelLightColor", Tooltip, OverrideNativeName="PanelLightColor_42_F70F5C424A1E66C40A26E3B45D004879"))
	FSlateColor bpv__PanelLightColor_42_F70F5C424A1E66C40A26E3B45D004879__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="PanelDarkColor", Tooltip, OverrideNativeName="PanelDarkColor_41_D9EE2D1047979A9B297180B8980E7356"))
	FSlateColor bpv__PanelDarkColor_41_D9EE2D1047979A9B297180B8980E7356__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="DropdownNormalColor", Tooltip, OverrideNativeName="DropdownNormalColor_26_800B6A34400390334230B19B9E9CEBBE"))
	FSlateColor bpv__DropdownNormalColor_26_800B6A34400390334230B19B9E9CEBBE__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="DropdownHoveredColor", Tooltip, OverrideNativeName="DropdownHoveredColor_31_35D782354E563625B03833ABEC0E1B7A"))
	FSlateColor bpv__DropdownHoveredColor_31_35D782354E563625B03833ABEC0E1B7A__pf;
	FStruct_Green__pf3140832796();
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	bool operator== (const FStruct_Green__pf3140832796& __Other) const
	{
		return FStruct_Green__pf3140832796::StaticStruct()->CompareScriptStruct(this, &__Other, 0);
	};
};
