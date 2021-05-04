#include "NativizedAssets.h"
#include "Struct_Yellow__pf3140832796.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
FStruct_Yellow__pf3140832796::FStruct_Yellow__pf3140832796()
{
	auto& __Local__0 = (*(AccessPrivateProperty<FLinearColor >(&(bpv__ThemeColor_21_5F7B3F7D441CFA27B4047AB401C1385A__pf), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__0 = FLinearColor(0.921582, 0.590619, 0.056128, 1.000000);
	auto& __Local__1 = (*(AccessPrivateProperty<FLinearColor >(&(bpv__BackgroundColor_36_4C75C0134265468A24E20CB8810F039B__pf), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__1 = FLinearColor(0.022174, 0.033105, 0.046665, 1.000000);
	auto& __Local__2 = (*(AccessPrivateProperty<FLinearColor >(&(bpv__PanelLightColor_43_4E626EA44A95EB120CE4869BBEB22E4B__pf), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__2 = FLinearColor(0.035601, 0.052861, 0.078187, 1.000000);
	auto& __Local__3 = (*(AccessPrivateProperty<FLinearColor >(&(bpv__PanelDarkColor_42_C0789BCA483E319E6C09DEA5B215B210__pf), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__3 = FLinearColor(0.015996, 0.024158, 0.033105, 1.000000);
	auto& __Local__4 = (*(AccessPrivateProperty<FLinearColor >(&(bpv__DropdownNormalColor_27_85EFE0AD4037ED524BC3D1B1E169D662__pf), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__4 = FLinearColor(0.022174, 0.033105, 0.046665, 1.000000);
	auto& __Local__5 = (*(AccessPrivateProperty<FLinearColor >(&(bpv__DropdownHoveredColor_32_A646502745AA9627107441BD1564EF4E__pf), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__5 = FLinearColor(0.035601, 0.052861, 0.078187, 1.000000);
}
PRAGMA_DISABLE_OPTIMIZATION
void FStruct_Yellow__pf3140832796::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
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
struct FRegisterHelper__FStruct_Yellow__pf3140832796
{
	FRegisterHelper__FStruct_Yellow__pf3140832796()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/flat_dark_themed_gui/theme_colors/Struct_Yellow"), &FStruct_Yellow__pf3140832796::__StaticDependenciesAssets);
	}
	static FRegisterHelper__FStruct_Yellow__pf3140832796 Instance;
};
FRegisterHelper__FStruct_Yellow__pf3140832796 FRegisterHelper__FStruct_Yellow__pf3140832796::Instance;
