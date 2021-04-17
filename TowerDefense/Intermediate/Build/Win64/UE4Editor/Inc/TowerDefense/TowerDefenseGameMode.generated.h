// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ADefaultEnemy;
#ifdef TOWERDEFENSE_TowerDefenseGameMode_generated_h
#error "TowerDefenseGameMode.generated.h already included, missing '#pragma once' in TowerDefenseGameMode.h"
#endif
#define TOWERDEFENSE_TowerDefenseGameMode_generated_h

#define TowerDefense_Source_TowerDefense_TowerDefenseGameMode_h_11_DELEGATE \
struct _Script_TowerDefense_eventOnLivesChange_Parms \
{ \
	int32 Value; \
}; \
static inline void FOnLivesChange_DelegateWrapper(const FMulticastScriptDelegate& OnLivesChange, int32 Value) \
{ \
	_Script_TowerDefense_eventOnLivesChange_Parms Parms; \
	Parms.Value=Value; \
	OnLivesChange.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define TowerDefense_Source_TowerDefense_TowerDefenseGameMode_h_10_DELEGATE \
struct _Script_TowerDefense_eventOnMoneyChange_Parms \
{ \
	int32 Value; \
}; \
static inline void FOnMoneyChange_DelegateWrapper(const FMulticastScriptDelegate& OnMoneyChange, int32 Value) \
{ \
	_Script_TowerDefense_eventOnMoneyChange_Parms Parms; \
	Parms.Value=Value; \
	OnMoneyChange.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define TowerDefense_Source_TowerDefense_TowerDefenseGameMode_h_16_SPARSE_DATA
#define TowerDefense_Source_TowerDefense_TowerDefenseGameMode_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execEndOfRound); \
	DECLARE_FUNCTION(execRemoveEnemyFromList); \
	DECLARE_FUNCTION(execCheckCurrentMoney); \
	DECLARE_FUNCTION(execIncreaseMoney); \
	DECLARE_FUNCTION(execDecreaseMoney); \
	DECLARE_FUNCTION(execGameOver); \
	DECLARE_FUNCTION(execIncreaseLives); \
	DECLARE_FUNCTION(execDecreaseLives);


#define TowerDefense_Source_TowerDefense_TowerDefenseGameMode_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEndOfRound); \
	DECLARE_FUNCTION(execRemoveEnemyFromList); \
	DECLARE_FUNCTION(execCheckCurrentMoney); \
	DECLARE_FUNCTION(execIncreaseMoney); \
	DECLARE_FUNCTION(execDecreaseMoney); \
	DECLARE_FUNCTION(execGameOver); \
	DECLARE_FUNCTION(execIncreaseLives); \
	DECLARE_FUNCTION(execDecreaseLives);


#define TowerDefense_Source_TowerDefense_TowerDefenseGameMode_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATowerDefenseGameMode(); \
	friend struct Z_Construct_UClass_ATowerDefenseGameMode_Statics; \
public: \
	DECLARE_CLASS(ATowerDefenseGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/TowerDefense"), TOWERDEFENSE_API) \
	DECLARE_SERIALIZER(ATowerDefenseGameMode)


#define TowerDefense_Source_TowerDefense_TowerDefenseGameMode_h_16_INCLASS \
private: \
	static void StaticRegisterNativesATowerDefenseGameMode(); \
	friend struct Z_Construct_UClass_ATowerDefenseGameMode_Statics; \
public: \
	DECLARE_CLASS(ATowerDefenseGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/TowerDefense"), TOWERDEFENSE_API) \
	DECLARE_SERIALIZER(ATowerDefenseGameMode)


#define TowerDefense_Source_TowerDefense_TowerDefenseGameMode_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TOWERDEFENSE_API ATowerDefenseGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATowerDefenseGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TOWERDEFENSE_API, ATowerDefenseGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATowerDefenseGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	TOWERDEFENSE_API ATowerDefenseGameMode(ATowerDefenseGameMode&&); \
	TOWERDEFENSE_API ATowerDefenseGameMode(const ATowerDefenseGameMode&); \
public:


#define TowerDefense_Source_TowerDefense_TowerDefenseGameMode_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	TOWERDEFENSE_API ATowerDefenseGameMode(ATowerDefenseGameMode&&); \
	TOWERDEFENSE_API ATowerDefenseGameMode(const ATowerDefenseGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TOWERDEFENSE_API, ATowerDefenseGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATowerDefenseGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATowerDefenseGameMode)


#define TowerDefense_Source_TowerDefense_TowerDefenseGameMode_h_16_PRIVATE_PROPERTY_OFFSET
#define TowerDefense_Source_TowerDefense_TowerDefenseGameMode_h_13_PROLOG
#define TowerDefense_Source_TowerDefense_TowerDefenseGameMode_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TowerDefense_Source_TowerDefense_TowerDefenseGameMode_h_16_PRIVATE_PROPERTY_OFFSET \
	TowerDefense_Source_TowerDefense_TowerDefenseGameMode_h_16_SPARSE_DATA \
	TowerDefense_Source_TowerDefense_TowerDefenseGameMode_h_16_RPC_WRAPPERS \
	TowerDefense_Source_TowerDefense_TowerDefenseGameMode_h_16_INCLASS \
	TowerDefense_Source_TowerDefense_TowerDefenseGameMode_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TowerDefense_Source_TowerDefense_TowerDefenseGameMode_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TowerDefense_Source_TowerDefense_TowerDefenseGameMode_h_16_PRIVATE_PROPERTY_OFFSET \
	TowerDefense_Source_TowerDefense_TowerDefenseGameMode_h_16_SPARSE_DATA \
	TowerDefense_Source_TowerDefense_TowerDefenseGameMode_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	TowerDefense_Source_TowerDefense_TowerDefenseGameMode_h_16_INCLASS_NO_PURE_DECLS \
	TowerDefense_Source_TowerDefense_TowerDefenseGameMode_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOWERDEFENSE_API UClass* StaticClass<class ATowerDefenseGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TowerDefense_Source_TowerDefense_TowerDefenseGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
