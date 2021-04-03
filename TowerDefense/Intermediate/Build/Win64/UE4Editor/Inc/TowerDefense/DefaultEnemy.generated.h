// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TOWERDEFENSE_DefaultEnemy_generated_h
#error "DefaultEnemy.generated.h already included, missing '#pragma once' in DefaultEnemy.h"
#endif
#define TOWERDEFENSE_DefaultEnemy_generated_h

#define TowerDefense_Source_TowerDefense_DefaultEnemy_h_23_SPARSE_DATA
#define TowerDefense_Source_TowerDefense_DefaultEnemy_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDeath); \
	DECLARE_FUNCTION(execMoveToTarget);


#define TowerDefense_Source_TowerDefense_DefaultEnemy_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDeath); \
	DECLARE_FUNCTION(execMoveToTarget);


#define TowerDefense_Source_TowerDefense_DefaultEnemy_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADefaultEnemy(); \
	friend struct Z_Construct_UClass_ADefaultEnemy_Statics; \
public: \
	DECLARE_CLASS(ADefaultEnemy, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TowerDefense"), NO_API) \
	DECLARE_SERIALIZER(ADefaultEnemy)


#define TowerDefense_Source_TowerDefense_DefaultEnemy_h_23_INCLASS \
private: \
	static void StaticRegisterNativesADefaultEnemy(); \
	friend struct Z_Construct_UClass_ADefaultEnemy_Statics; \
public: \
	DECLARE_CLASS(ADefaultEnemy, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TowerDefense"), NO_API) \
	DECLARE_SERIALIZER(ADefaultEnemy)


#define TowerDefense_Source_TowerDefense_DefaultEnemy_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADefaultEnemy(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADefaultEnemy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADefaultEnemy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADefaultEnemy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADefaultEnemy(ADefaultEnemy&&); \
	NO_API ADefaultEnemy(const ADefaultEnemy&); \
public:


#define TowerDefense_Source_TowerDefense_DefaultEnemy_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADefaultEnemy(ADefaultEnemy&&); \
	NO_API ADefaultEnemy(const ADefaultEnemy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADefaultEnemy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADefaultEnemy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADefaultEnemy)


#define TowerDefense_Source_TowerDefense_DefaultEnemy_h_23_PRIVATE_PROPERTY_OFFSET
#define TowerDefense_Source_TowerDefense_DefaultEnemy_h_20_PROLOG
#define TowerDefense_Source_TowerDefense_DefaultEnemy_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TowerDefense_Source_TowerDefense_DefaultEnemy_h_23_PRIVATE_PROPERTY_OFFSET \
	TowerDefense_Source_TowerDefense_DefaultEnemy_h_23_SPARSE_DATA \
	TowerDefense_Source_TowerDefense_DefaultEnemy_h_23_RPC_WRAPPERS \
	TowerDefense_Source_TowerDefense_DefaultEnemy_h_23_INCLASS \
	TowerDefense_Source_TowerDefense_DefaultEnemy_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TowerDefense_Source_TowerDefense_DefaultEnemy_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TowerDefense_Source_TowerDefense_DefaultEnemy_h_23_PRIVATE_PROPERTY_OFFSET \
	TowerDefense_Source_TowerDefense_DefaultEnemy_h_23_SPARSE_DATA \
	TowerDefense_Source_TowerDefense_DefaultEnemy_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	TowerDefense_Source_TowerDefense_DefaultEnemy_h_23_INCLASS_NO_PURE_DECLS \
	TowerDefense_Source_TowerDefense_DefaultEnemy_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOWERDEFENSE_API UClass* StaticClass<class ADefaultEnemy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TowerDefense_Source_TowerDefense_DefaultEnemy_h


#define FOREACH_ENUM_EENEMYMOVEMENTSTATUS(op) \
	op(EEnemyMovementStatus::EMS_Idle) \
	op(EEnemyMovementStatus::EMS_MoveToTarget) \
	op(EEnemyMovementStatus::EMS_Attacking) \
	op(EEnemyMovementStatus::EMS_Dead) 

enum class EEnemyMovementStatus : uint8;
template<> TOWERDEFENSE_API UEnum* StaticEnum<EEnemyMovementStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
