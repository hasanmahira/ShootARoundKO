// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SHOOTAROUND_BaseEnemy_generated_h
#error "BaseEnemy.generated.h already included, missing '#pragma once' in BaseEnemy.h"
#endif
#define SHOOTAROUND_BaseEnemy_generated_h

#define ShootARound_Source_ShootARound_BaseEnemy_h_12_SPARSE_DATA
#define ShootARound_Source_ShootARound_BaseEnemy_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTakeDamage);


#define ShootARound_Source_ShootARound_BaseEnemy_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTakeDamage);


#define ShootARound_Source_ShootARound_BaseEnemy_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseEnemy(); \
	friend struct Z_Construct_UClass_ABaseEnemy_Statics; \
public: \
	DECLARE_CLASS(ABaseEnemy, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShootARound"), NO_API) \
	DECLARE_SERIALIZER(ABaseEnemy)


#define ShootARound_Source_ShootARound_BaseEnemy_h_12_INCLASS \
private: \
	static void StaticRegisterNativesABaseEnemy(); \
	friend struct Z_Construct_UClass_ABaseEnemy_Statics; \
public: \
	DECLARE_CLASS(ABaseEnemy, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShootARound"), NO_API) \
	DECLARE_SERIALIZER(ABaseEnemy)


#define ShootARound_Source_ShootARound_BaseEnemy_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABaseEnemy(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaseEnemy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseEnemy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseEnemy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseEnemy(ABaseEnemy&&); \
	NO_API ABaseEnemy(const ABaseEnemy&); \
public:


#define ShootARound_Source_ShootARound_BaseEnemy_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseEnemy(ABaseEnemy&&); \
	NO_API ABaseEnemy(const ABaseEnemy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseEnemy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseEnemy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseEnemy)


#define ShootARound_Source_ShootARound_BaseEnemy_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__health() { return STRUCT_OFFSET(ABaseEnemy, health); }


#define ShootARound_Source_ShootARound_BaseEnemy_h_9_PROLOG
#define ShootARound_Source_ShootARound_BaseEnemy_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ShootARound_Source_ShootARound_BaseEnemy_h_12_PRIVATE_PROPERTY_OFFSET \
	ShootARound_Source_ShootARound_BaseEnemy_h_12_SPARSE_DATA \
	ShootARound_Source_ShootARound_BaseEnemy_h_12_RPC_WRAPPERS \
	ShootARound_Source_ShootARound_BaseEnemy_h_12_INCLASS \
	ShootARound_Source_ShootARound_BaseEnemy_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ShootARound_Source_ShootARound_BaseEnemy_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ShootARound_Source_ShootARound_BaseEnemy_h_12_PRIVATE_PROPERTY_OFFSET \
	ShootARound_Source_ShootARound_BaseEnemy_h_12_SPARSE_DATA \
	ShootARound_Source_ShootARound_BaseEnemy_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	ShootARound_Source_ShootARound_BaseEnemy_h_12_INCLASS_NO_PURE_DECLS \
	ShootARound_Source_ShootARound_BaseEnemy_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTAROUND_API UClass* StaticClass<class ABaseEnemy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ShootARound_Source_ShootARound_BaseEnemy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
