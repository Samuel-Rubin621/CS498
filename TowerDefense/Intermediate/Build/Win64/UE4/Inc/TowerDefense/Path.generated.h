// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FEnemyData;
#ifdef TOWERDEFENSE_Path_generated_h
#error "Path.generated.h already included, missing '#pragma once' in Path.h"
#endif
#define TOWERDEFENSE_Path_generated_h

#define TowerDefense_Source_TowerDefense_Path_h_31_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEnemyData_Statics; \
	TOWERDEFENSE_API static class UScriptStruct* StaticStruct();


template<> TOWERDEFENSE_API UScriptStruct* StaticStruct<struct FEnemyData>();

#define TowerDefense_Source_TowerDefense_Path_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRoundInformation_Statics; \
	TOWERDEFENSE_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> TOWERDEFENSE_API UScriptStruct* StaticStruct<struct FRoundInformation>();

#define TowerDefense_Source_TowerDefense_Path_h_44_SPARSE_DATA
#define TowerDefense_Source_TowerDefense_Path_h_44_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSpawnEnemy); \
	DECLARE_FUNCTION(execCallSpawner); \
	DECLARE_FUNCTION(execStartRound); \
	DECLARE_FUNCTION(execPreloadNextRound);


#define TowerDefense_Source_TowerDefense_Path_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSpawnEnemy); \
	DECLARE_FUNCTION(execCallSpawner); \
	DECLARE_FUNCTION(execStartRound); \
	DECLARE_FUNCTION(execPreloadNextRound);


#define TowerDefense_Source_TowerDefense_Path_h_44_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPath(); \
	friend struct Z_Construct_UClass_APath_Statics; \
public: \
	DECLARE_CLASS(APath, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TowerDefense"), NO_API) \
	DECLARE_SERIALIZER(APath)


#define TowerDefense_Source_TowerDefense_Path_h_44_INCLASS \
private: \
	static void StaticRegisterNativesAPath(); \
	friend struct Z_Construct_UClass_APath_Statics; \
public: \
	DECLARE_CLASS(APath, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TowerDefense"), NO_API) \
	DECLARE_SERIALIZER(APath)


#define TowerDefense_Source_TowerDefense_Path_h_44_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APath(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APath) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APath); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APath); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APath(APath&&); \
	NO_API APath(const APath&); \
public:


#define TowerDefense_Source_TowerDefense_Path_h_44_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APath(APath&&); \
	NO_API APath(const APath&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APath); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APath); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APath)


#define TowerDefense_Source_TowerDefense_Path_h_44_PRIVATE_PROPERTY_OFFSET
#define TowerDefense_Source_TowerDefense_Path_h_41_PROLOG
#define TowerDefense_Source_TowerDefense_Path_h_44_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TowerDefense_Source_TowerDefense_Path_h_44_PRIVATE_PROPERTY_OFFSET \
	TowerDefense_Source_TowerDefense_Path_h_44_SPARSE_DATA \
	TowerDefense_Source_TowerDefense_Path_h_44_RPC_WRAPPERS \
	TowerDefense_Source_TowerDefense_Path_h_44_INCLASS \
	TowerDefense_Source_TowerDefense_Path_h_44_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TowerDefense_Source_TowerDefense_Path_h_44_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TowerDefense_Source_TowerDefense_Path_h_44_PRIVATE_PROPERTY_OFFSET \
	TowerDefense_Source_TowerDefense_Path_h_44_SPARSE_DATA \
	TowerDefense_Source_TowerDefense_Path_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	TowerDefense_Source_TowerDefense_Path_h_44_INCLASS_NO_PURE_DECLS \
	TowerDefense_Source_TowerDefense_Path_h_44_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOWERDEFENSE_API UClass* StaticClass<class APath>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TowerDefense_Source_TowerDefense_Path_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
