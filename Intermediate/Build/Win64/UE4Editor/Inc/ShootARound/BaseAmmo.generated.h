// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SHOOTAROUND_BaseAmmo_generated_h
#error "BaseAmmo.generated.h already included, missing '#pragma once' in BaseAmmo.h"
#endif
#define SHOOTAROUND_BaseAmmo_generated_h

#define ShootARound_Source_ShootARound_BaseAmmo_h_14_SPARSE_DATA
#define ShootARound_Source_ShootARound_BaseAmmo_h_14_RPC_WRAPPERS
#define ShootARound_Source_ShootARound_BaseAmmo_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define ShootARound_Source_ShootARound_BaseAmmo_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseAmmo(); \
	friend struct Z_Construct_UClass_ABaseAmmo_Statics; \
public: \
	DECLARE_CLASS(ABaseAmmo, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShootARound"), NO_API) \
	DECLARE_SERIALIZER(ABaseAmmo)


#define ShootARound_Source_ShootARound_BaseAmmo_h_14_INCLASS \
private: \
	static void StaticRegisterNativesABaseAmmo(); \
	friend struct Z_Construct_UClass_ABaseAmmo_Statics; \
public: \
	DECLARE_CLASS(ABaseAmmo, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShootARound"), NO_API) \
	DECLARE_SERIALIZER(ABaseAmmo)


#define ShootARound_Source_ShootARound_BaseAmmo_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABaseAmmo(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaseAmmo) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseAmmo); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseAmmo); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseAmmo(ABaseAmmo&&); \
	NO_API ABaseAmmo(const ABaseAmmo&); \
public:


#define ShootARound_Source_ShootARound_BaseAmmo_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseAmmo(ABaseAmmo&&); \
	NO_API ABaseAmmo(const ABaseAmmo&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseAmmo); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseAmmo); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseAmmo)


#define ShootARound_Source_ShootARound_BaseAmmo_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ammoAmount() { return STRUCT_OFFSET(ABaseAmmo, ammoAmount); } \
	FORCEINLINE static uint32 __PPO__ammoType() { return STRUCT_OFFSET(ABaseAmmo, ammoType); }


#define ShootARound_Source_ShootARound_BaseAmmo_h_11_PROLOG
#define ShootARound_Source_ShootARound_BaseAmmo_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ShootARound_Source_ShootARound_BaseAmmo_h_14_PRIVATE_PROPERTY_OFFSET \
	ShootARound_Source_ShootARound_BaseAmmo_h_14_SPARSE_DATA \
	ShootARound_Source_ShootARound_BaseAmmo_h_14_RPC_WRAPPERS \
	ShootARound_Source_ShootARound_BaseAmmo_h_14_INCLASS \
	ShootARound_Source_ShootARound_BaseAmmo_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ShootARound_Source_ShootARound_BaseAmmo_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ShootARound_Source_ShootARound_BaseAmmo_h_14_PRIVATE_PROPERTY_OFFSET \
	ShootARound_Source_ShootARound_BaseAmmo_h_14_SPARSE_DATA \
	ShootARound_Source_ShootARound_BaseAmmo_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	ShootARound_Source_ShootARound_BaseAmmo_h_14_INCLASS_NO_PURE_DECLS \
	ShootARound_Source_ShootARound_BaseAmmo_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTAROUND_API UClass* StaticClass<class ABaseAmmo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ShootARound_Source_ShootARound_BaseAmmo_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
