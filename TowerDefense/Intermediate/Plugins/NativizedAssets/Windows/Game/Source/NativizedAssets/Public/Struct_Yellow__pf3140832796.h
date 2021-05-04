#pragma once
#include "GeneratedCodeHelpers.h"
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/SlateCore/Public/Styling/SlateColor.h"
#include "Struct_Yellow__pf3140832796.generated.h"

USTRUCT(BlueprintType, meta=(ReplaceConverted="/Game/flat_dark_themed_gui/theme_colors/Struct_Yellow.Struct_Yellow", OverrideNativeName="Struct_Yellow"))
struct FStruct_Yellow__pf3140832796
{
public:
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="ThemeColor", Tooltip, OverrideNativeName="ThemeColor_21_5F7B3F7D441CFA27B4047AB401C1385A"))
	FSlateColor bpv__ThemeColor_21_5F7B3F7D441CFA27B4047AB401C1385A__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="BackgroundColor", Tooltip, OverrideNativeName="BackgroundColor_36_4C75C0134265468A24E20CB8810F039B"))
	FSlateColor bpv__BackgroundColor_36_4C75C0134265468A24E20CB8810F039B__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="PanelLightColor", Tooltip, OverrideNativeName="PanelLightColor_43_4E626EA44A95EB120CE4869BBEB22E4B"))
	FSlateColor bpv__PanelLightColor_43_4E626EA44A95EB120CE4869BBEB22E4B__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="PanelDarkColor", Tooltip, OverrideNativeName="PanelDarkColor_42_C0789BCA483E319E6C09DEA5B215B210"))
	FSlateColor bpv__PanelDarkColor_42_C0789BCA483E319E6C09DEA5B215B210__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="DropdownNormalColor", Tooltip, OverrideNativeName="DropdownNormalColor_27_85EFE0AD4037ED524BC3D1B1E169D662"))
	FSlateColor bpv__DropdownNormalColor_27_85EFE0AD4037ED524BC3D1B1E169D662__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="DropdownHoveredColor", Tooltip, OverrideNativeName="DropdownHoveredColor_32_A646502745AA9627107441BD1564EF4E"))
	FSlateColor bpv__DropdownHoveredColor_32_A646502745AA9627107441BD1564EF4E__pf;
	FStruct_Yellow__pf3140832796();
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	bool operator== (const FStruct_Yellow__pf3140832796& __Other) const
	{
		return FStruct_Yellow__pf3140832796::StaticStruct()->CompareScriptStruct(this, &__Other, 0);
	};
};
