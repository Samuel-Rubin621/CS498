#pragma once
#include "GeneratedCodeHelpers.h"
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/SlateCore/Public/Styling/SlateColor.h"
#include "Struct_Black__pf3140832796.generated.h"

USTRUCT(BlueprintType, meta=(ReplaceConverted="/Game/flat_dark_themed_gui/theme_colors/Struct_Black.Struct_Black", OverrideNativeName="Struct_Black"))
struct FStruct_Black__pf3140832796
{
public:
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="ThemeColor", Tooltip, OverrideNativeName="ThemeColor_21_5F7B3F7D441CFA27B4047AB401C1385A"))
	FSlateColor bpv__ThemeColor_21_5F7B3F7D441CFA27B4047AB401C1385A__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="BackgroundColor", Tooltip, OverrideNativeName="BackgroundColor_35_4C75C0134265468A24E20CB8810F039B"))
	FSlateColor bpv__BackgroundColor_35_4C75C0134265468A24E20CB8810F039B__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="PanelLightColor", Tooltip, OverrideNativeName="PanelLightColor_42_116F0D9142CDDA86F5B3C896EFF1C5D5"))
	FSlateColor bpv__PanelLightColor_42_116F0D9142CDDA86F5B3C896EFF1C5D5__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="PanelDarkColor", Tooltip, OverrideNativeName="PanelDarkColor_41_B8F562DF4B4F61587FEFED928EB02A7B"))
	FSlateColor bpv__PanelDarkColor_41_B8F562DF4B4F61587FEFED928EB02A7B__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="DropdownNormalColor", Tooltip, OverrideNativeName="DropdownNormalColor_27_5912B83F42FC3B7F3C45FEA3E9C863C7"))
	FSlateColor bpv__DropdownNormalColor_27_5912B83F42FC3B7F3C45FEA3E9C863C7__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="DropdownHoveredColor", Tooltip, OverrideNativeName="DropdownHoveredColor_31_6ECB20AB4FE65CBEA72B8A989F3868FB"))
	FSlateColor bpv__DropdownHoveredColor_31_6ECB20AB4FE65CBEA72B8A989F3868FB__pf;
	FStruct_Black__pf3140832796();
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	bool operator== (const FStruct_Black__pf3140832796& __Other) const
	{
		return FStruct_Black__pf3140832796::StaticStruct()->CompareScriptStruct(this, &__Other, 0);
	};
};
