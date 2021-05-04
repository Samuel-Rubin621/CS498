#include "NativizedAssets.h"
#include "Struct_Black__pf3140832796.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
FStruct_Black__pf3140832796::FStruct_Black__pf3140832796()
{
	auto& __Local__0 = (*(AccessPrivateProperty<FLinearColor >(&(bpv__ThemeColor_21_5F7B3F7D441CFA27B4047AB401C1385A__pf), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__0 = FLinearColor(0.814847, 0.008568, 0.038204, 1.000000);
	auto& __Local__1 = (*(AccessPrivateProperty<FLinearColor >(&(bpv__BackgroundColor_35_4C75C0134265468A24E20CB8810F039B__pf), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__1 = FLinearColor(0.008023, 0.012286, 0.015996, 1.000000);
	auto& __Local__2 = (*(AccessPrivateProperty<FLinearColor >(&(bpv__PanelLightColor_42_116F0D9142CDDA86F5B3C896EFF1C5D5__pf), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__2 = FLinearColor(0.025187, 0.030713, 0.040915, 1.000000);
	auto& __Local__3 = (*(AccessPrivateProperty<FLinearColor >(&(bpv__PanelDarkColor_41_B8F562DF4B4F61587FEFED928EB02A7B__pf), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__3 = FLinearColor(0.015209, 0.021219, 0.027321, 1.000000);
	auto& __Local__4 = (*(AccessPrivateProperty<FLinearColor >(&(bpv__DropdownNormalColor_27_5912B83F42FC3B7F3C45FEA3E9C863C7__pf), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__4 = FLinearColor(0.025187, 0.030713, 0.040915, 1.000000);
	auto& __Local__5 = (*(AccessPrivateProperty<FLinearColor >(&(bpv__DropdownHoveredColor_31_6ECB20AB4FE65CBEA72B8A989F3868FB__pf), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__5 = FLinearColor(0.015996, 0.020289, 0.028426, 1.000000);
}
PRAGMA_DISABLE_OPTIMIZATION
void FStruct_Black__pf3140832796::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
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
struct FRegisterHelper__FStruct_Black__pf3140832796
{
	FRegisterHelper__FStruct_Black__pf3140832796()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/flat_dark_themed_gui/theme_colors/Struct_Black"), &FStruct_Black__pf3140832796::__StaticDependenciesAssets);
	}
	static FRegisterHelper__FStruct_Black__pf3140832796 Instance;
};
FRegisterHelper__FStruct_Black__pf3140832796 FRegisterHelper__FStruct_Black__pf3140832796::Instance;
