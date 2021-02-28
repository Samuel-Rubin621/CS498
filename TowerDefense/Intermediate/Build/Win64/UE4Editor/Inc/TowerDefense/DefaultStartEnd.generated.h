// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TOWERDEFENSE_DefaultStartEnd_generated_h
#error "DefaultStartEnd.generated.h already included, missing '#pragma once' in DefaultStartEnd.h"
#endif
#define TOWERDEFENSE_DefaultStartEnd_generated_h

#define TowerDefense_Source_TowerDefense_DefaultStartEnd_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRoundInformation_Statics; \
	TOWERDEFENSE_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> TOWERDEFENSE_API UScriptStruct* StaticStruct<struct FRoundInformation>();

#define TowerDefense_Source_TowerDefense_DefaultStartEnd_h_29_SPARSE_DATA
#define TowerDefense_Source_TowerDefense_DefaultStartEnd_h_29_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execStartRound); \
	DECLARE_FUNCTION(execPreloadNextRound);


#define TowerDefense_Source_TowerDefense_DefaultStartEnd_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execStartRound); \
	DECLARE_FUNCTION(execPreloadNextRound);


#define TowerDefense_Source_TowerDefense_DefaultStartEnd_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADefaultStartEnd(); \
	friend struct Z_Construct_UClass_ADefaultStartEnd_Statics; \
public: \
	DECLARE_CLASS(ADefaultStartEnd, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TowerDefense"), NO_API) \
	DECLARE_SERIALIZER(ADefaultStartEnd)


#define TowerDefense_Source_TowerDefense_DefaultStartEnd_h_29_INCLASS \
private: \
	static void StaticRegisterNativesADefaultStartEnd(); \
	friend struct Z_Construct_UClass_ADefaultStartEnd_Statics; \
public: \
	DECLARE_CLASS(ADefaultStartEnd, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TowerDefense"), NO_API) \
	DECLARE_SERIALIZER(ADefaultStartEnd)


#define TowerDefense_Source_TowerDefense_DefaultStartEnd_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADefaultStartEnd(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADefaultStartEnd) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADefaultStartEnd); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADefaultStartEnd); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADefaultStartEnd(ADefaultStartEnd&&); \
	NO_API ADefaultStartEnd(const ADefaultStartEnd&); \
public:


#define TowerDefense_Source_TowerDefense_DefaultStartEnd_h_29_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADefaultStartEnd(ADefaultStartEnd&&); \
	NO_API ADefaultStartEnd(const ADefaultStartEnd&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADefaultStartEnd); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADefaultStartEnd); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADefaultStartEnd)


#define TowerDefense_Source_TowerDefense_DefaultStartEnd_h_29_PRIVATE_PROPERTY_OFFSET
#define TowerDefense_Source_TowerDefense_DefaultStartEnd_h_26_PROLOG
#define TowerDefense_Source_TowerDefense_DefaultStartEnd_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TowerDefense_Source_TowerDefense_DefaultStartEnd_h_29_PRIVATE_PROPERTY_OFFSET \
	TowerDefense_Source_TowerDefense_DefaultStartEnd_h_29_SPARSE_DATA \
	TowerDefense_Source_TowerDefense_DefaultStartEnd_h_29_RPC_WRAPPERS \
	TowerDefense_Source_TowerDefense_DefaultStartEnd_h_29_INCLASS \
	TowerDefense_Source_TowerDefense_DefaultStartEnd_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TowerDefense_Source_TowerDefense_DefaultStartEnd_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TowerDefense_Source_TowerDefense_DefaultStartEnd_h_29_PRIVATE_PROPERTY_OFFSET \
	TowerDefense_Source_TowerDefense_DefaultStartEnd_h_29_SPARSE_DATA \
	TowerDefense_Source_TowerDefense_DefaultStartEnd_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	TowerDefense_Source_TowerDefense_DefaultStartEnd_h_29_INCLASS_NO_PURE_DECLS \
	TowerDefense_Source_TowerDefense_DefaultStartEnd_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOWERDEFENSE_API UClass* StaticClass<class ADefaultStartEnd>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TowerDefense_Source_TowerDefense_DefaultStartEnd_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
