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
struct FVector;
struct FHitResult;
#ifdef SHOOTAROUND_ShootARoundProjectile_generated_h
#error "ShootARoundProjectile.generated.h already included, missing '#pragma once' in ShootARoundProjectile.h"
#endif
#define SHOOTAROUND_ShootARoundProjectile_generated_h

#define ShootARound_Source_ShootARound_ShootARoundProjectile_h_15_SPARSE_DATA
#define ShootARound_Source_ShootARound_ShootARoundProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define ShootARound_Source_ShootARound_ShootARoundProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define ShootARound_Source_ShootARound_ShootARoundProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAShootARoundProjectile(); \
	friend struct Z_Construct_UClass_AShootARoundProjectile_Statics; \
public: \
	DECLARE_CLASS(AShootARoundProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShootARound"), NO_API) \
	DECLARE_SERIALIZER(AShootARoundProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define ShootARound_Source_ShootARound_ShootARoundProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAShootARoundProjectile(); \
	friend struct Z_Construct_UClass_AShootARoundProjectile_Statics; \
public: \
	DECLARE_CLASS(AShootARoundProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShootARound"), NO_API) \
	DECLARE_SERIALIZER(AShootARoundProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define ShootARound_Source_ShootARound_ShootARoundProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AShootARoundProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AShootARoundProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShootARoundProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShootARoundProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShootARoundProjectile(AShootARoundProjectile&&); \
	NO_API AShootARoundProjectile(const AShootARoundProjectile&); \
public:


#define ShootARound_Source_ShootARound_ShootARoundProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShootARoundProjectile(AShootARoundProjectile&&); \
	NO_API AShootARoundProjectile(const AShootARoundProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShootARoundProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShootARoundProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AShootARoundProjectile)


#define ShootARound_Source_ShootARound_ShootARoundProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AShootARoundProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AShootARoundProjectile, ProjectileMovement); }


#define ShootARound_Source_ShootARound_ShootARoundProjectile_h_12_PROLOG
#define ShootARound_Source_ShootARound_ShootARoundProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ShootARound_Source_ShootARound_ShootARoundProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	ShootARound_Source_ShootARound_ShootARoundProjectile_h_15_SPARSE_DATA \
	ShootARound_Source_ShootARound_ShootARoundProjectile_h_15_RPC_WRAPPERS \
	ShootARound_Source_ShootARound_ShootARoundProjectile_h_15_INCLASS \
	ShootARound_Source_ShootARound_ShootARoundProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ShootARound_Source_ShootARound_ShootARoundProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ShootARound_Source_ShootARound_ShootARoundProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	ShootARound_Source_ShootARound_ShootARoundProjectile_h_15_SPARSE_DATA \
	ShootARound_Source_ShootARound_ShootARoundProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	ShootARound_Source_ShootARound_ShootARoundProjectile_h_15_INCLASS_NO_PURE_DECLS \
	ShootARound_Source_ShootARound_ShootARoundProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTAROUND_API UClass* StaticClass<class AShootARoundProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ShootARound_Source_ShootARound_ShootARoundProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
