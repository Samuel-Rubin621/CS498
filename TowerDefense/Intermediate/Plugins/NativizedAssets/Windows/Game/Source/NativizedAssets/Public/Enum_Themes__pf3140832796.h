#pragma once
#include "Enum_Themes__pf3140832796.generated.h"
UENUM(BlueprintType, meta=(ReplaceConverted="/Game/flat_dark_themed_gui/theme_colors/Enum_Themes.Enum_Themes", OverrideNativeName="Enum_Themes", EnumDisplayNameFn="E__Enum_Themes__pf__GetUserFriendlyName") )
enum class E__Enum_Themes__pf  : uint8
{
	NewEnumerator0 = 0 UMETA(DisplayName = "Red",OverrideName = "Enum_Themes::NewEnumerator0"),
	NewEnumerator1 = 1 UMETA(DisplayName = "Black",OverrideName = "Enum_Themes::NewEnumerator1"),
	NewEnumerator2 = 2 UMETA(DisplayName = "Green",OverrideName = "Enum_Themes::NewEnumerator2"),
	NewEnumerator3 = 3 UMETA(DisplayName = "Yellow",OverrideName = "Enum_Themes::NewEnumerator3"),
	NewEnumerator4 = 4 UMETA(DisplayName = "Pink",OverrideName = "Enum_Themes::NewEnumerator4"),
	NewEnumerator5 = 5 UMETA(DisplayName = "Purple",OverrideName = "Enum_Themes::NewEnumerator5"),
	E__Enum_Themes__pf_MAX = 6 UMETA(OverrideName = "Enum_Themes::Enum_MAX"),
};
FText E__Enum_Themes__pf__GetUserFriendlyName(int32 InValue);
