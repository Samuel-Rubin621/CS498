#include "NativizedAssets.h"
#include "E_GlassMaskTypes__pf1973725292.h"
FText E__E_GlassMaskTypes__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__E_GlassMaskTypes__pf>(InValue);
	switch(EnumValue)
	{
		case E__E_GlassMaskTypes__pf::NewEnumerator0: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[810189A447040E0B3D5B3BBDC7FEB9A8]\", \"5F843C644949EA63B54F72AF9A4E05F1\", \"GlassMask1\")"), Text); break;
		case E__E_GlassMaskTypes__pf::NewEnumerator1: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[810189A447040E0B3D5B3BBDC7FEB9A8]\", \"A1E96C4F4043FF7AC5B2958944E2A7FF\", \"GlassMask2\")"), Text); break;
		case E__E_GlassMaskTypes__pf::E__E_GlassMaskTypes__pf_MAX: FTextStringHelper::ReadFromBuffer(TEXT("E MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
