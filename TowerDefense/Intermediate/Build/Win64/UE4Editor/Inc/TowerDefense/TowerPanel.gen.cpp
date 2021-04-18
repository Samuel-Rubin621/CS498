// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TowerDefense/UI/TowerPanel.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTowerPanel() {}
// Cross Module References
	TOWERDEFENSE_API UEnum* Z_Construct_UEnum_TowerDefense_ETowerName();
	UPackage* Z_Construct_UPackage__Script_TowerDefense();
	TOWERDEFENSE_API UClass* Z_Construct_UClass_UTowerPanel_NoRegister();
	TOWERDEFENSE_API UClass* Z_Construct_UClass_UTowerPanel();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	TOWERDEFENSE_API UClass* Z_Construct_UClass_ATowerDefenseGameMode_NoRegister();
	TOWERDEFENSE_API UClass* Z_Construct_UClass_ADefaultTower_NoRegister();
// End Cross Module References
	static UEnum* ETowerName_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_TowerDefense_ETowerName, Z_Construct_UPackage__Script_TowerDefense(), TEXT("ETowerName"));
		}
		return Singleton;
	}
	template<> TOWERDEFENSE_API UEnum* StaticEnum<ETowerName>()
	{
		return ETowerName_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETowerName(ETowerName_StaticEnum, TEXT("/Script/TowerDefense"), TEXT("ETowerName"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_TowerDefense_ETowerName_Hash() { return 1275060743U; }
	UEnum* Z_Construct_UEnum_TowerDefense_ETowerName()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_TowerDefense();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETowerName"), 0, Get_Z_Construct_UEnum_TowerDefense_ETowerName_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETowerName::TN_BP_Ballista_C", (int64)ETowerName::TN_BP_Ballista_C },
				{ "ETowerName::TN_BP_Cannon_C", (int64)ETowerName::TN_BP_Cannon_C },
				{ "ETowerName::TN_BP_Catapult_C", (int64)ETowerName::TN_BP_Catapult_C },
				{ "ETowerName::TN_BP_Turret_C", (int64)ETowerName::TN_BP_Turret_C },
				{ "ETowerName::TN_MAX", (int64)ETowerName::TN_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "UI/TowerPanel.h" },
				{ "TN_BP_Ballista_C.DisplayName", "Ballista" },
				{ "TN_BP_Ballista_C.Name", "ETowerName::TN_BP_Ballista_C" },
				{ "TN_BP_Cannon_C.DisplayName", "Cannon" },
				{ "TN_BP_Cannon_C.Name", "ETowerName::TN_BP_Cannon_C" },
				{ "TN_BP_Catapult_C.DisplayName", "Catapult" },
				{ "TN_BP_Catapult_C.Name", "ETowerName::TN_BP_Catapult_C" },
				{ "TN_BP_Turret_C.DisplayName", "Turret" },
				{ "TN_BP_Turret_C.Name", "ETowerName::TN_BP_Turret_C" },
				{ "TN_MAX.DisplayName", "DefaultMax" },
				{ "TN_MAX.Name", "ETowerName::TN_MAX" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_TowerDefense,
				nullptr,
				"ETowerName",
				"ETowerName",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	DEFINE_FUNCTION(UTowerPanel::execCloseMenuButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CloseMenuButtonClicked();
		P_NATIVE_END;
	}
	void UTowerPanel::StaticRegisterNativesUTowerPanel()
	{
		UClass* Class = UTowerPanel::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CloseMenuButtonClicked", &UTowerPanel::execCloseMenuButtonClicked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTowerPanel_CloseMenuButtonClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTowerPanel_CloseMenuButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Function delegates for pressing a button on the widget\n" },
		{ "ModuleRelativePath", "UI/TowerPanel.h" },
		{ "ToolTip", "Function delegates for pressing a button on the widget" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTowerPanel_CloseMenuButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTowerPanel, nullptr, "CloseMenuButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTowerPanel_CloseMenuButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTowerPanel_CloseMenuButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTowerPanel_CloseMenuButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTowerPanel_CloseMenuButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTowerPanel_NoRegister()
	{
		return UTowerPanel::StaticClass();
	}
	struct Z_Construct_UClass_UTowerPanel_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CloseMenuButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CloseMenuButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GameMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectedTower_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SelectedTower;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTowerPanel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_TowerDefense,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTowerPanel_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTowerPanel_CloseMenuButtonClicked, "CloseMenuButtonClicked" }, // 2941571367
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTowerPanel_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/TowerPanel.h" },
		{ "ModuleRelativePath", "UI/TowerPanel.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTowerPanel_Statics::NewProp_CloseMenuButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "TowerPanel" },
		{ "Comment", "/***** Only variables declared beyond this point! *****/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/TowerPanel.h" },
		{ "ToolTip", "** Only variables declared beyond this point! ****" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTowerPanel_Statics::NewProp_CloseMenuButton = { "CloseMenuButton", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTowerPanel, CloseMenuButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTowerPanel_Statics::NewProp_CloseMenuButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTowerPanel_Statics::NewProp_CloseMenuButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTowerPanel_Statics::NewProp_GameMode_MetaData[] = {
		{ "Category", "References" },
		{ "ModuleRelativePath", "UI/TowerPanel.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTowerPanel_Statics::NewProp_GameMode = { "GameMode", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTowerPanel, GameMode), Z_Construct_UClass_ATowerDefenseGameMode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTowerPanel_Statics::NewProp_GameMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTowerPanel_Statics::NewProp_GameMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTowerPanel_Statics::NewProp_SelectedTower_MetaData[] = {
		{ "Category", "References" },
		{ "ModuleRelativePath", "UI/TowerPanel.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTowerPanel_Statics::NewProp_SelectedTower = { "SelectedTower", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTowerPanel, SelectedTower), Z_Construct_UClass_ADefaultTower_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTowerPanel_Statics::NewProp_SelectedTower_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTowerPanel_Statics::NewProp_SelectedTower_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTowerPanel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTowerPanel_Statics::NewProp_CloseMenuButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTowerPanel_Statics::NewProp_GameMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTowerPanel_Statics::NewProp_SelectedTower,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTowerPanel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTowerPanel>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTowerPanel_Statics::ClassParams = {
		&UTowerPanel::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTowerPanel_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTowerPanel_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTowerPanel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTowerPanel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTowerPanel()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTowerPanel_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTowerPanel, 2090481545);
	template<> TOWERDEFENSE_API UClass* StaticClass<UTowerPanel>()
	{
		return UTowerPanel::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTowerPanel(Z_Construct_UClass_UTowerPanel, &UTowerPanel::StaticClass, TEXT("/Script/TowerDefense"), TEXT("UTowerPanel"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTowerPanel);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
