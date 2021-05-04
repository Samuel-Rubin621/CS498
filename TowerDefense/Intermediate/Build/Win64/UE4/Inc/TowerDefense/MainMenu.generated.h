// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TOWERDEFENSE_MainMenu_generated_h
#error "MainMenu.generated.h already included, missing '#pragma once' in MainMenu.h"
#endif
#define TOWERDEFENSE_MainMenu_generated_h

#define TowerDefense_Source_TowerDefense_UI_MainMenu_h_17_SPARSE_DATA
#define TowerDefense_Source_TowerDefense_UI_MainMenu_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnExitButtonPressed); \
	DECLARE_FUNCTION(execOnSettingsButtonPressed); \
	DECLARE_FUNCTION(execOnPlayButtonPressed);


#define TowerDefense_Source_TowerDefense_UI_MainMenu_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnExitButtonPressed); \
	DECLARE_FUNCTION(execOnSettingsButtonPressed); \
	DECLARE_FUNCTION(execOnPlayButtonPressed);


#define TowerDefense_Source_TowerDefense_UI_MainMenu_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMainMenu(); \
	friend struct Z_Construct_UClass_UMainMenu_Statics; \
public: \
	DECLARE_CLASS(UMainMenu, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TowerDefense"), NO_API) \
	DECLARE_SERIALIZER(UMainMenu)


#define TowerDefense_Source_TowerDefense_UI_MainMenu_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUMainMenu(); \
	friend struct Z_Construct_UClass_UMainMenu_Statics; \
public: \
	DECLARE_CLASS(UMainMenu, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TowerDefense"), NO_API) \
	DECLARE_SERIALIZER(UMainMenu)


#define TowerDefense_Source_TowerDefense_UI_MainMenu_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMainMenu(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMainMenu) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMainMenu); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMainMenu); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMainMenu(UMainMenu&&); \
	NO_API UMainMenu(const UMainMenu&); \
public:


#define TowerDefense_Source_TowerDefense_UI_MainMenu_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMainMenu(UMainMenu&&); \
	NO_API UMainMenu(const UMainMenu&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMainMenu); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMainMenu); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMainMenu)


#define TowerDefense_Source_TowerDefense_UI_MainMenu_h_17_PRIVATE_PROPERTY_OFFSET
#define TowerDefense_Source_TowerDefense_UI_MainMenu_h_14_PROLOG
#define TowerDefense_Source_TowerDefense_UI_MainMenu_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TowerDefense_Source_TowerDefense_UI_MainMenu_h_17_PRIVATE_PROPERTY_OFFSET \
	TowerDefense_Source_TowerDefense_UI_MainMenu_h_17_SPARSE_DATA \
	TowerDefense_Source_TowerDefense_UI_MainMenu_h_17_RPC_WRAPPERS \
	TowerDefense_Source_TowerDefense_UI_MainMenu_h_17_INCLASS \
	TowerDefense_Source_TowerDefense_UI_MainMenu_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TowerDefense_Source_TowerDefense_UI_MainMenu_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TowerDefense_Source_TowerDefense_UI_MainMenu_h_17_PRIVATE_PROPERTY_OFFSET \
	TowerDefense_Source_TowerDefense_UI_MainMenu_h_17_SPARSE_DATA \
	TowerDefense_Source_TowerDefense_UI_MainMenu_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	TowerDefense_Source_TowerDefense_UI_MainMenu_h_17_INCLASS_NO_PURE_DECLS \
	TowerDefense_Source_TowerDefense_UI_MainMenu_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOWERDEFENSE_API UClass* StaticClass<class UMainMenu>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TowerDefense_Source_TowerDefense_UI_MainMenu_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
