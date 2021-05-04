#include "NativizedAssets.h"
#include "Struct_Pink__pf3140832796.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
FStruct_Pink__pf3140832796::FStruct_Pink__pf3140832796()
{
	auto& __Local__0 = (*(AccessPrivateProperty<FLinearColor >(&(bpv__ThemeColor_21_5F7B3F7D441CFA27B4047AB401C1385A__pf), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__0 = FLinearColor(0.775822, 0.097587, 0.242281, 1.000000);
	auto& __Local__1 = (*(AccessPrivateProperty<FLinearColor >(&(bpv__BackgroundColor_36_4C75C0134265468A24E20CB8810F039B__pf), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__1 = FLinearColor(0.012286, 0.017642, 0.038204, 1.000000);
	auto& __Local__2 = (*(AccessPrivateProperty<FLinearColor >(&(bpv__PanelLightColor_43_BDCC61C140854497F68DF1AAF5C6969A__pf), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__2 = FLinearColor(0.052861, 0.051269, 0.124772, 1.000000);
	auto& __Local__3 = (*(AccessPrivateProperty<FLinearColor >(&(bpv__PanelDarkColor_42_ED5E21FA41B953CAFEB940961675F5DA__pf), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__3 = FLinearColor(0.012286, 0.017642, 0.038204, 1.000000);
	auto& __Local__4 = (*(AccessPrivateProperty<FLinearColor >(&(bpv__DropdownNormalColor_28_BF54DDE2478270234B20BAA2DE421D8E__pf), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__4 = FLinearColor(0.015996, 0.023153, 0.049707, 1.000000);
	auto& __Local__5 = (*(AccessPrivateProperty<FLinearColor >(&(bpv__DropdownHoveredColor_32_7611633345608F14927179A0A7D05D23__pf), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__5 = FLinearColor(0.052861, 0.051269, 0.124772, 1.000000);
}
PRAGMA_DISABLE_OPTIMIZATION
void FStruct_Pink__pf3140832796::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{0, FBlueprintDependencyType(true, false, false, false)},  //  ScriptStruct /Script/SlateCore.SlateColor 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__FStruct_Pink__pf3140832796
{
	FRegisterHelper__FStruct_Pink__pf3140832796()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/flat_dark_themed_gui/theme_colors/Struct_Pink"), &FStruct_Pink__pf3140832796::__StaticDependenciesAssets);
	}
	static FRegisterHelper__FStruct_Pink__pf3140832796 Instance;
};
FRegisterHelper__FStruct_Pink__pf3140832796 FRegisterHelper__FStruct_Pink__pf3140832796::Instance;
