#include "NativizedAssets.h"
#include "E_IconBaseTypes__pf1973725292.h"
FText E__E_IconBaseTypes__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__E_IconBaseTypes__pf>(InValue);
	switch(EnumValue)
	{
		case E__E_IconBaseTypes__pf::NewEnumerator0: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[23F8DC5D42855880FCB041A07249E9E3]\", \"43C8C5E84B1FCF64CF2242AF4061682B\", \"Square\")"), Text); break;
		case E__E_IconBaseTypes__pf::NewEnumerator1: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[23F8DC5D42855880FCB041A07249E9E3]\", \"E349178A449AB748B680AB87A6D5954C\", \"Square45\")"), Text); break;
		case E__E_IconBaseTypes__pf::NewEnumerator2: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[23F8DC5D42855880FCB041A07249E9E3]\", \"194781EB4F7909B4C5C6919C6F0FE683\", \"Ellipse\")"), Text); break;
		case E__E_IconBaseTypes__pf::NewEnumerator3: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[23F8DC5D42855880FCB041A07249E9E3]\", \"3D62EA554176FF733F10D5A00C1D9D05\", \"Hexagon\")"), Text); break;
		case E__E_IconBaseTypes__pf::NewEnumerator4: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[23F8DC5D42855880FCB041A07249E9E3]\", \"72A1C6BB4F75F320E92A65B60AF3D0A0\", \"Custom\")"), Text); break;
		case E__E_IconBaseTypes__pf::E__E_IconBaseTypes__pf_MAX: FTextStringHelper::ReadFromBuffer(TEXT("E MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
