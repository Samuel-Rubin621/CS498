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
#ifdef TOWERDEFENSE_DefaultProjectile_generated_h
#error "DefaultProjectile.generated.h already included, missing '#pragma once' in DefaultProjectile.h"
#endif
#define TOWERDEFENSE_DefaultProjectile_generated_h

#define TowerDefense_Source_TowerDefense_DefaultProjectile_h_12_SPARSE_DATA
#define TowerDefense_Source_TowerDefense_DefaultProjectile_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnProjectileOverlapBegin);


#define TowerDefense_Source_TowerDefense_DefaultProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnProjectileOverlapBegin);


#define TowerDefense_Source_TowerDefense_DefaultProjectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADefaultProjectile(); \
	friend struct Z_Construct_UClass_ADefaultProjectile_Statics; \
public: \
	DECLARE_CLASS(ADefaultProjectile, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TowerDefense"), NO_API) \
	DECLARE_SERIALIZER(ADefaultProjectile)


#define TowerDefense_Source_TowerDefense_DefaultProjectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesADefaultProjectile(); \
	friend struct Z_Construct_UClass_ADefaultProjectile_Statics; \
public: \
	DECLARE_CLASS(ADefaultProjectile, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TowerDefense"), NO_API) \
	DECLARE_SERIALIZER(ADefaultProjectile)


#define TowerDefense_Source_TowerDefense_DefaultProjectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADefaultProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADefaultProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADefaultProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADefaultProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADefaultProjectile(ADefaultProjectile&&); \
	NO_API ADefaultProjectile(const ADefaultProjectile&); \
public:


#define TowerDefense_Source_TowerDefense_DefaultProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADefaultProjectile(ADefaultProjectile&&); \
	NO_API ADefaultProjectile(const ADefaultProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADefaultProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADefaultProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADefaultProjectile)


#define TowerDefense_Source_TowerDefense_DefaultProjectile_h_12_PRIVATE_PROPERTY_OFFSET
#define TowerDefense_Source_TowerDefense_DefaultProjectile_h_9_PROLOG
#define TowerDefense_Source_TowerDefense_DefaultProjectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TowerDefense_Source_TowerDefense_DefaultProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	TowerDefense_Source_TowerDefense_DefaultProjectile_h_12_SPARSE_DATA \
	TowerDefense_Source_TowerDefense_DefaultProjectile_h_12_RPC_WRAPPERS \
	TowerDefense_Source_TowerDefense_DefaultProjectile_h_12_INCLASS \
	TowerDefense_Source_TowerDefense_DefaultProjectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TowerDefense_Source_TowerDefense_DefaultProjectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TowerDefense_Source_TowerDefense_DefaultProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	TowerDefense_Source_TowerDefense_DefaultProjectile_h_12_SPARSE_DATA \
	TowerDefense_Source_TowerDefense_DefaultProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	TowerDefense_Source_TowerDefense_DefaultProjectile_h_12_INCLASS_NO_PURE_DECLS \
	TowerDefense_Source_TowerDefense_DefaultProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOWERDEFENSE_API UClass* StaticClass<class ADefaultProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TowerDefense_Source_TowerDefense_DefaultProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
