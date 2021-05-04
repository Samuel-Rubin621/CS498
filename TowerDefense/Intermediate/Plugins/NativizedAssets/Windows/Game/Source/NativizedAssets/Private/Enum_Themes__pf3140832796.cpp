#include "NativizedAssets.h"
#include "Enum_Themes__pf3140832796.h"
FText E__Enum_Themes__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__Enum_Themes__pf>(InValue);
	switch(EnumValue)
	{
		case E__Enum_Themes__pf::NewEnumerator0: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[8C3974144A11461E530CBA8D960207FB]\", \"7393BD4F4EE632227DC43BB69935E385\", \"Red\")"), Text); break;
		case E__Enum_Themes__pf::NewEnumerator1: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[8C3974144A11461E530CBA8D960207FB]\", \"AFE695A645D7F1F5DFF4DE90529E062C\", \"Black\")"), Text); break;
		case E__Enum_Themes__pf::NewEnumerator2: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[8C3974144A11461E530CBA8D960207FB]\", \"ACA3329841293B80F47E2EB2D9E725B3\", \"Green\")"), Text); break;
		case E__Enum_Themes__pf::NewEnumerator3: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[8C3974144A11461E530CBA8D960207FB]\", \"B7A91CA94D7EE5A09731BA97C34AAED1\", \"Yellow\")"), Text); break;
		case E__Enum_Themes__pf::NewEnumerator4: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[8C3974144A11461E530CBA8D960207FB]\", \"22EB634D44D22583C0DF5EB2FADB39C2\", \"Pink\")"), Text); break;
		case E__Enum_Themes__pf::NewEnumerator5: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[8C3974144A11461E530CBA8D960207FB]\", \"3CCAF6474525C68484A4A0A7D480733F\", \"Purple\")"), Text); break;
		case E__Enum_Themes__pf::E__Enum_Themes__pf_MAX: FTextStringHelper::ReadFromBuffer(TEXT("Enum MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
