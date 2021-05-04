// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/E_Sizes__pf1973725292.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeE_Sizes__pf1973725292() {}
// Cross Module References
	NATIVIZEDASSETS_API UEnum* Z_Construct_UEnum_NativizedAssets_E__E_Sizes__pf();
// End Cross Module References
	static UEnum* E__E_Sizes__pf_StaticEnum()
	{
		class UPackage* EnumPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/ProIconPack/UI/Enums/E_Sizes"));
		class UEnum* Singleton = Cast<UEnum>(StaticFindObjectFast(UEnum::StaticClass(), EnumPackage, TEXT("E_Sizes")));
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_NativizedAssets_E__E_Sizes__pf, EnumPackage, TEXT("E_Sizes"));
		}
		return Singleton;
	}
	template<> NATIVIZEDASSETS_API UEnum* StaticEnum<E__E_Sizes__pf>()
	{
		return E__E_Sizes__pf_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_E__E_Sizes__pf(E__E_Sizes__pf_StaticEnum, TEXT("/Game/ProIconPack/UI/Enums/E_Sizes"), TEXT("E_Sizes"), true, TEXT("/Game/ProIconPack/UI/Enums/E_Sizes"), TEXT("/Game/ProIconPack/UI/Enums/E_Sizes.E_Sizes"));
	uint32 Get_Z_Construct_UEnum_NativizedAssets_E__E_Sizes__pf_Hash() { return 3394667506U; }
	UEnum* Z_Construct_UEnum_NativizedAssets_E__E_Sizes__pf()
	{
		UPackage* Outer = FindOrConstructDynamicTypePackage(TEXT("/Game/ProIconPack/UI/Enums/E_Sizes"));		UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("E_Sizes"), 0, Get_Z_Construct_UEnum_NativizedAssets_E__E_Sizes__pf_Hash(), true);
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "E_Sizes::NewEnumerator0", (int64)E__E_Sizes__pf::NewEnumerator0 },
				{ "E_Sizes::NewEnumerator1", (int64)E__E_Sizes__pf::NewEnumerator1 },
				{ "E_Sizes::E_MAX", (int64)E__E_Sizes__pf::E__E_Sizes__pf_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "E__E_Sizes__pf_MAX.Name", "E__E_Sizes__pf::E__E_Sizes__pf_MAX" },
				{ "E__E_Sizes__pf_MAX.OverrideName", "E_Sizes::E_MAX" },
				{ "EnumDisplayNameFn", "E__E_Sizes__pf__GetUserFriendlyName" },
				{ "ModuleRelativePath", "Public/E_Sizes__pf1973725292.h" },
				{ "NewEnumerator0.Name", "E__E_Sizes__pf::NewEnumerator0" },
				{ "NewEnumerator0.OverrideName", "E_Sizes::NewEnumerator0" },
				{ "NewEnumerator1.Name", "E__E_Sizes__pf::NewEnumerator1" },
				{ "NewEnumerator1.OverrideName", "E_Sizes::NewEnumerator1" },
				{ "OverrideNativeName", "E_Sizes" },
				{ "ReplaceConverted", "/Game/ProIconPack/UI/Enums/E_Sizes.E_Sizes" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())[](){ return (UObject*)FindOrConstructDynamicTypePackage(TEXT("/Game/ProIconPack/UI/Enums/E_Sizes")); },
				E__E_Sizes__pf__GetUserFriendlyName,
				"E_Sizes",
				"E__E_Sizes__pf",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::Dynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
