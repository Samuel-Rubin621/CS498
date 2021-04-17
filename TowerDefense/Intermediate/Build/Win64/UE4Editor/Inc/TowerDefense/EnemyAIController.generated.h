// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TOWERDEFENSE_EnemyAIController_generated_h
#error "EnemyAIController.generated.h already included, missing '#pragma once' in EnemyAIController.h"
#endif
#define TOWERDEFENSE_EnemyAIController_generated_h

#define TowerDefense_Source_TowerDefense_EnemyAIController_h_15_SPARSE_DATA
#define TowerDefense_Source_TowerDefense_EnemyAIController_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execMoveToNextPathPoint);


#define TowerDefense_Source_TowerDefense_EnemyAIController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMoveToNextPathPoint);


#define TowerDefense_Source_TowerDefense_EnemyAIController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemyAIController(); \
	friend struct Z_Construct_UClass_AEnemyAIController_Statics; \
public: \
	DECLARE_CLASS(AEnemyAIController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TowerDefense"), NO_API) \
	DECLARE_SERIALIZER(AEnemyAIController)


#define TowerDefense_Source_TowerDefense_EnemyAIController_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAEnemyAIController(); \
	friend struct Z_Construct_UClass_AEnemyAIController_Statics; \
public: \
	DECLARE_CLASS(AEnemyAIController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TowerDefense"), NO_API) \
	DECLARE_SERIALIZER(AEnemyAIController)


#define TowerDefense_Source_TowerDefense_EnemyAIController_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEnemyAIController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEnemyAIController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyAIController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyAIController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemyAIController(AEnemyAIController&&); \
	NO_API AEnemyAIController(const AEnemyAIController&); \
public:


#define TowerDefense_Source_TowerDefense_EnemyAIController_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemyAIController(AEnemyAIController&&); \
	NO_API AEnemyAIController(const AEnemyAIController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyAIController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyAIController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemyAIController)


#define TowerDefense_Source_TowerDefense_EnemyAIController_h_15_PRIVATE_PROPERTY_OFFSET
#define TowerDefense_Source_TowerDefense_EnemyAIController_h_12_PROLOG
#define TowerDefense_Source_TowerDefense_EnemyAIController_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TowerDefense_Source_TowerDefense_EnemyAIController_h_15_PRIVATE_PROPERTY_OFFSET \
	TowerDefense_Source_TowerDefense_EnemyAIController_h_15_SPARSE_DATA \
	TowerDefense_Source_TowerDefense_EnemyAIController_h_15_RPC_WRAPPERS \
	TowerDefense_Source_TowerDefense_EnemyAIController_h_15_INCLASS \
	TowerDefense_Source_TowerDefense_EnemyAIController_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TowerDefense_Source_TowerDefense_EnemyAIController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TowerDefense_Source_TowerDefense_EnemyAIController_h_15_PRIVATE_PROPERTY_OFFSET \
	TowerDefense_Source_TowerDefense_EnemyAIController_h_15_SPARSE_DATA \
	TowerDefense_Source_TowerDefense_EnemyAIController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	TowerDefense_Source_TowerDefense_EnemyAIController_h_15_INCLASS_NO_PURE_DECLS \
	TowerDefense_Source_TowerDefense_EnemyAIController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOWERDEFENSE_API UClass* StaticClass<class AEnemyAIController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TowerDefense_Source_TowerDefense_EnemyAIController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
