#include "NativizedAssets.h"
#include "E_Sizes__pf1973725292.h"
FText E__E_Sizes__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__E_Sizes__pf>(InValue);
	switch(EnumValue)
	{
		case E__E_Sizes__pf::NewEnumerator0: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[4DC4BB0140C145E5E82A78BE863194BE]\", \"D09F7FB94EEB9AEED52F05A689164B61\", \"64 x 64\")"), Text); break;
		case E__E_Sizes__pf::NewEnumerator1: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[4DC4BB0140C145E5E82A78BE863194BE]\", \"793AA7DB4FD64ABA612D629B163AE00F\", \"256 x 256\")"), Text); break;
		case E__E_Sizes__pf::E__E_Sizes__pf_MAX: FTextStringHelper::ReadFromBuffer(TEXT("E MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
