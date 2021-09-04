// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SHOOTAROUND_ShootARoundCharacter_generated_h
#error "ShootARoundCharacter.generated.h already included, missing '#pragma once' in ShootARoundCharacter.h"
#endif
#define SHOOTAROUND_ShootARoundCharacter_generated_h

#define ShootARound_Source_ShootARound_ShootARoundCharacter_h_21_SPARSE_DATA
#define ShootARound_Source_ShootARound_ShootARoundCharacter_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTakeDamage);


#define ShootARound_Source_ShootARound_ShootARoundCharacter_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTakeDamage);


#define ShootARound_Source_ShootARound_ShootARoundCharacter_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAShootARoundCharacter(); \
	friend struct Z_Construct_UClass_AShootARoundCharacter_Statics; \
public: \
	DECLARE_CLASS(AShootARoundCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShootARound"), NO_API) \
	DECLARE_SERIALIZER(AShootARoundCharacter)


#define ShootARound_Source_ShootARound_ShootARoundCharacter_h_21_INCLASS \
private: \
	static void StaticRegisterNativesAShootARoundCharacter(); \
	friend struct Z_Construct_UClass_AShootARoundCharacter_Statics; \
public: \
	DECLARE_CLASS(AShootARoundCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShootARound"), NO_API) \
	DECLARE_SERIALIZER(AShootARoundCharacter)


#define ShootARound_Source_ShootARound_ShootARoundCharacter_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AShootARoundCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AShootARoundCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShootARoundCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShootARoundCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShootARoundCharacter(AShootARoundCharacter&&); \
	NO_API AShootARoundCharacter(const AShootARoundCharacter&); \
public:


#define ShootARound_Source_ShootARound_ShootARoundCharacter_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShootARoundCharacter(AShootARoundCharacter&&); \
	NO_API AShootARoundCharacter(const AShootARoundCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShootARoundCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShootARoundCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AShootARoundCharacter)


#define ShootARound_Source_ShootARound_ShootARoundCharacter_h_21_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(AShootARoundCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(AShootARoundCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(AShootARoundCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(AShootARoundCharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(AShootARoundCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(AShootARoundCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(AShootARoundCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(AShootARoundCharacter, L_MotionController); }


#define ShootARound_Source_ShootARound_ShootARoundCharacter_h_18_PROLOG
#define ShootARound_Source_ShootARound_ShootARoundCharacter_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ShootARound_Source_ShootARound_ShootARoundCharacter_h_21_PRIVATE_PROPERTY_OFFSET \
	ShootARound_Source_ShootARound_ShootARoundCharacter_h_21_SPARSE_DATA \
	ShootARound_Source_ShootARound_ShootARoundCharacter_h_21_RPC_WRAPPERS \
	ShootARound_Source_ShootARound_ShootARoundCharacter_h_21_INCLASS \
	ShootARound_Source_ShootARound_ShootARoundCharacter_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ShootARound_Source_ShootARound_ShootARoundCharacter_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ShootARound_Source_ShootARound_ShootARoundCharacter_h_21_PRIVATE_PROPERTY_OFFSET \
	ShootARound_Source_ShootARound_ShootARoundCharacter_h_21_SPARSE_DATA \
	ShootARound_Source_ShootARound_ShootARoundCharacter_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	ShootARound_Source_ShootARound_ShootARoundCharacter_h_21_INCLASS_NO_PURE_DECLS \
	ShootARound_Source_ShootARound_ShootARoundCharacter_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTAROUND_API UClass* StaticClass<class AShootARoundCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ShootARound_Source_ShootARound_ShootARoundCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
