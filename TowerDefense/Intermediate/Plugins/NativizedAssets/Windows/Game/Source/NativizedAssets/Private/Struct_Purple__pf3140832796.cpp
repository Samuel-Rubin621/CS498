#include "NativizedAssets.h"
#include "Struct_Purple__pf3140832796.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
FStruct_Purple__pf3140832796::FStruct_Purple__pf3140832796()
{
	auto& __Local__0 = (*(AccessPrivateProperty<FLinearColor >(&(bpv__ThemeColor_21_5F7B3F7D441CFA27B4047AB401C1385A__pf), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__0 = FLinearColor(0.223228, 0.191202, 0.947307, 1.000000);
	auto& __Local__1 = (*(AccessPrivateProperty<FLinearColor >(&(bpv__BackgroundColor_36_4C75C0134265468A24E20CB8810F039B__pf), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__1 = FLinearColor(0.025187, 0.021219, 0.042311, 1.000000);
	auto& __Local__2 = (*(AccessPrivateProperty<FLinearColor >(&(bpv__PanelLightColor_43_68E78BBA4D87D36B0B93FB981DFC75B5__pf), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__2 = FLinearColor(0.052861, 0.051269, 0.124772, 1.000000);
	auto& __Local__3 = (*(AccessPrivateProperty<FLinearColor >(&(bpv__PanelDarkColor_42_6BD7BCFC4B5E8C14921614A9F8FFB32C__pf), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__3 = FLinearColor(0.025187, 0.021219, 0.040915, 1.000000);
	auto& __Local__4 = (*(AccessPrivateProperty<FLinearColor >(&(bpv__DropdownNormalColor_27_B8A5F6754D7BBB75A30D61A6D2758E65__pf), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__4 = FLinearColor(0.052861, 0.051269, 0.124772, 1.000000);
	auto& __Local__5 = (*(AccessPrivateProperty<FLinearColor >(&(bpv__DropdownHoveredColor_32_5AFA48DA4972B45158996C97EEDD3A8E__pf), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__5 = FLinearColor(0.025187, 0.021219, 0.042311, 1.000000);
}
PRAGMA_DISABLE_OPTIMIZATION
void FStruct_Purple__pf3140832796::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
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
struct FRegisterHelper__FStruct_Purple__pf3140832796
{
	FRegisterHelper__FStruct_Purple__pf3140832796()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/flat_dark_themed_gui/theme_colors/Struct_Purple"), &FStruct_Purple__pf3140832796::__StaticDependenciesAssets);
	}
	static FRegisterHelper__FStruct_Purple__pf3140832796 Instance;
};
FRegisterHelper__FStruct_Purple__pf3140832796 FRegisterHelper__FStruct_Purple__pf3140832796::Instance;
