#include "NativizedAssets.h"
#include "Struct_Red__pf3140832796.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
FStruct_Red__pf3140832796::FStruct_Red__pf3140832796()
{
	auto& __Local__0 = (*(AccessPrivateProperty<FLinearColor >(&(bpv__ThemeColor_21_5F7B3F7D441CFA27B4047AB401C1385A__pf), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__0 = FLinearColor(0.814847, 0.008568, 0.038204, 1.000000);
	auto& __Local__1 = (*(AccessPrivateProperty<FLinearColor >(&(bpv__BackgroundColor_39_4C75C0134265468A24E20CB8810F039B__pf), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__1 = FLinearColor(0.018500, 0.015209, 0.022174, 1.000000);
	auto& __Local__2 = (*(AccessPrivateProperty<FLinearColor >(&(bpv__PanelLightColor_46_A473EE8A42982FDFABC6D88D7216F4E2__pf), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__2 = FLinearColor(0.034340, 0.029557, 0.038204, 1.000000);
	auto& __Local__3 = (*(AccessPrivateProperty<FLinearColor >(&(bpv__PanelDarkColor_45_B6E0AAAD489250CAAB99FDB74AF27DCA__pf), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__3 = FLinearColor(0.023153, 0.020289, 0.026241, 1.000000);
	auto& __Local__4 = (*(AccessPrivateProperty<FLinearColor >(&(bpv__DropdownNormalColor_30_B3A3030A44B0B2200C42CFBE84931721__pf), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__4 = FLinearColor(0.018500, 0.015209, 0.022174, 1.000000);
	auto& __Local__5 = (*(AccessPrivateProperty<FLinearColor >(&(bpv__DropdownHoveredColor_35_F39BB1A74EDB82A4849623BC2E45F049__pf), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__5 = FLinearColor(0.040915, 0.035601, 0.046665, 1.000000);
}
PRAGMA_DISABLE_OPTIMIZATION
void FStruct_Red__pf3140832796::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
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
struct FRegisterHelper__FStruct_Red__pf3140832796
{
	FRegisterHelper__FStruct_Red__pf3140832796()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/flat_dark_themed_gui/theme_colors/Struct_Red"), &FStruct_Red__pf3140832796::__StaticDependenciesAssets);
	}
	static FRegisterHelper__FStruct_Red__pf3140832796 Instance;
};
FRegisterHelper__FStruct_Red__pf3140832796 FRegisterHelper__FStruct_Red__pf3140832796::Instance;
