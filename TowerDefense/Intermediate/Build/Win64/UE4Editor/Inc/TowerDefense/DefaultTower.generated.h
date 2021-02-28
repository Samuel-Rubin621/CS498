// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef TOWERDEFENSE_DefaultTower_generated_h
#error "DefaultTower.generated.h already included, missing '#pragma once' in DefaultTower.h"
#endif
#define TOWERDEFENSE_DefaultTower_generated_h

#define TowerDefense_Source_TowerDefense_DefaultTower_h_23_SPARSE_DATA
#define TowerDefense_Source_TowerDefense_DefaultTower_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetNewTarget); \
	DECLARE_FUNCTION(execOnRangeOverlapEnd); \
	DECLARE_FUNCTION(execOnRangeOverlapBegin);


#define TowerDefense_Source_TowerDefense_DefaultTower_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetNewTarget); \
	DECLARE_FUNCTION(execOnRangeOverlapEnd); \
	DECLARE_FUNCTION(execOnRangeOverlapBegin);


#define TowerDefense_Source_TowerDefense_DefaultTower_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADefaultTower(); \
	friend struct Z_Construct_UClass_ADefaultTower_Statics; \
public: \
	DECLARE_CLASS(ADefaultTower, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TowerDefense"), NO_API) \
	DECLARE_SERIALIZER(ADefaultTower)


#define TowerDefense_Source_TowerDefense_DefaultTower_h_23_INCLASS \
private: \
	static void StaticRegisterNativesADefaultTower(); \
	friend struct Z_Construct_UClass_ADefaultTower_Statics; \
public: \
	DECLARE_CLASS(ADefaultTower, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TowerDefense"), NO_API) \
	DECLARE_SERIALIZER(ADefaultTower)


#define TowerDefense_Source_TowerDefense_DefaultTower_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADefaultTower(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADefaultTower) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADefaultTower); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADefaultTower); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADefaultTower(ADefaultTower&&); \
	NO_API ADefaultTower(const ADefaultTower&); \
public:


#define TowerDefense_Source_TowerDefense_DefaultTower_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADefaultTower(ADefaultTower&&); \
	NO_API ADefaultTower(const ADefaultTower&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADefaultTower); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADefaultTower); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADefaultTower)


#define TowerDefense_Source_TowerDefense_DefaultTower_h_23_PRIVATE_PROPERTY_OFFSET
#define TowerDefense_Source_TowerDefense_DefaultTower_h_20_PROLOG
#define TowerDefense_Source_TowerDefense_DefaultTower_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TowerDefense_Source_TowerDefense_DefaultTower_h_23_PRIVATE_PROPERTY_OFFSET \
	TowerDefense_Source_TowerDefense_DefaultTower_h_23_SPARSE_DATA \
	TowerDefense_Source_TowerDefense_DefaultTower_h_23_RPC_WRAPPERS \
	TowerDefense_Source_TowerDefense_DefaultTower_h_23_INCLASS \
	TowerDefense_Source_TowerDefense_DefaultTower_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TowerDefense_Source_TowerDefense_DefaultTower_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TowerDefense_Source_TowerDefense_DefaultTower_h_23_PRIVATE_PROPERTY_OFFSET \
	TowerDefense_Source_TowerDefense_DefaultTower_h_23_SPARSE_DATA \
	TowerDefense_Source_TowerDefense_DefaultTower_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	TowerDefense_Source_TowerDefense_DefaultTower_h_23_INCLASS_NO_PURE_DECLS \
	TowerDefense_Source_TowerDefense_DefaultTower_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOWERDEFENSE_API UClass* StaticClass<class ADefaultTower>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TowerDefense_Source_TowerDefense_DefaultTower_h


#define FOREACH_ENUM_ETOWERPOSITIONTARGETING(op) \
	op(ETowerPositionTargeting::TPT_First) \
	op(ETowerPositionTargeting::TPT_Last) \
	op(ETowerPositionTargeting::TPT_Strongest) \
	op(ETowerPositionTargeting::TPT_Weakest) 

enum class ETowerPositionTargeting : uint8;
template<> TOWERDEFENSE_API UEnum* StaticEnum<ETowerPositionTargeting>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
