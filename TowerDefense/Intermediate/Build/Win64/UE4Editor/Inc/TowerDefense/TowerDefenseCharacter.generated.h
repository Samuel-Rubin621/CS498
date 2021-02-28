// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TOWERDEFENSE_TowerDefenseCharacter_generated_h
#error "TowerDefenseCharacter.generated.h already included, missing '#pragma once' in TowerDefenseCharacter.h"
#endif
#define TOWERDEFENSE_TowerDefenseCharacter_generated_h

#define TowerDefense_Source_TowerDefense_TowerDefenseCharacter_h_12_SPARSE_DATA
#define TowerDefense_Source_TowerDefense_TowerDefenseCharacter_h_12_RPC_WRAPPERS
#define TowerDefense_Source_TowerDefense_TowerDefenseCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define TowerDefense_Source_TowerDefense_TowerDefenseCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATowerDefenseCharacter(); \
	friend struct Z_Construct_UClass_ATowerDefenseCharacter_Statics; \
public: \
	DECLARE_CLASS(ATowerDefenseCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TowerDefense"), NO_API) \
	DECLARE_SERIALIZER(ATowerDefenseCharacter)


#define TowerDefense_Source_TowerDefense_TowerDefenseCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesATowerDefenseCharacter(); \
	friend struct Z_Construct_UClass_ATowerDefenseCharacter_Statics; \
public: \
	DECLARE_CLASS(ATowerDefenseCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TowerDefense"), NO_API) \
	DECLARE_SERIALIZER(ATowerDefenseCharacter)


#define TowerDefense_Source_TowerDefense_TowerDefenseCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATowerDefenseCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATowerDefenseCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATowerDefenseCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATowerDefenseCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATowerDefenseCharacter(ATowerDefenseCharacter&&); \
	NO_API ATowerDefenseCharacter(const ATowerDefenseCharacter&); \
public:


#define TowerDefense_Source_TowerDefense_TowerDefenseCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATowerDefenseCharacter(ATowerDefenseCharacter&&); \
	NO_API ATowerDefenseCharacter(const ATowerDefenseCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATowerDefenseCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATowerDefenseCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATowerDefenseCharacter)


#define TowerDefense_Source_TowerDefense_TowerDefenseCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TopDownCameraComponent() { return STRUCT_OFFSET(ATowerDefenseCharacter, TopDownCameraComponent); } \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ATowerDefenseCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__CursorToWorld() { return STRUCT_OFFSET(ATowerDefenseCharacter, CursorToWorld); }


#define TowerDefense_Source_TowerDefense_TowerDefenseCharacter_h_9_PROLOG
#define TowerDefense_Source_TowerDefense_TowerDefenseCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TowerDefense_Source_TowerDefense_TowerDefenseCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	TowerDefense_Source_TowerDefense_TowerDefenseCharacter_h_12_SPARSE_DATA \
	TowerDefense_Source_TowerDefense_TowerDefenseCharacter_h_12_RPC_WRAPPERS \
	TowerDefense_Source_TowerDefense_TowerDefenseCharacter_h_12_INCLASS \
	TowerDefense_Source_TowerDefense_TowerDefenseCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TowerDefense_Source_TowerDefense_TowerDefenseCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TowerDefense_Source_TowerDefense_TowerDefenseCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	TowerDefense_Source_TowerDefense_TowerDefenseCharacter_h_12_SPARSE_DATA \
	TowerDefense_Source_TowerDefense_TowerDefenseCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	TowerDefense_Source_TowerDefense_TowerDefenseCharacter_h_12_INCLASS_NO_PURE_DECLS \
	TowerDefense_Source_TowerDefense_TowerDefenseCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOWERDEFENSE_API UClass* StaticClass<class ATowerDefenseCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TowerDefense_Source_TowerDefense_TowerDefenseCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
