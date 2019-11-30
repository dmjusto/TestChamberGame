// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
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
#ifdef TESTCHAMBER_TestChamberProjectile_generated_h
#error "TestChamberProjectile.generated.h already included, missing '#pragma once' in TestChamberProjectile.h"
#endif
#define TESTCHAMBER_TestChamberProjectile_generated_h

#define TestChamber_Source_TestChamber_TestChamberProjectile_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define TestChamber_Source_TestChamber_TestChamberProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define TestChamber_Source_TestChamber_TestChamberProjectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATestChamberProjectile(); \
	friend struct Z_Construct_UClass_ATestChamberProjectile_Statics; \
public: \
	DECLARE_CLASS(ATestChamberProjectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TestChamber"), NO_API) \
	DECLARE_SERIALIZER(ATestChamberProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define TestChamber_Source_TestChamber_TestChamberProjectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesATestChamberProjectile(); \
	friend struct Z_Construct_UClass_ATestChamberProjectile_Statics; \
public: \
	DECLARE_CLASS(ATestChamberProjectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TestChamber"), NO_API) \
	DECLARE_SERIALIZER(ATestChamberProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define TestChamber_Source_TestChamber_TestChamberProjectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATestChamberProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATestChamberProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATestChamberProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATestChamberProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATestChamberProjectile(ATestChamberProjectile&&); \
	NO_API ATestChamberProjectile(const ATestChamberProjectile&); \
public:


#define TestChamber_Source_TestChamber_TestChamberProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATestChamberProjectile(ATestChamberProjectile&&); \
	NO_API ATestChamberProjectile(const ATestChamberProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATestChamberProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATestChamberProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATestChamberProjectile)


#define TestChamber_Source_TestChamber_TestChamberProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(ATestChamberProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(ATestChamberProjectile, ProjectileMovement); }


#define TestChamber_Source_TestChamber_TestChamberProjectile_h_9_PROLOG
#define TestChamber_Source_TestChamber_TestChamberProjectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestChamber_Source_TestChamber_TestChamberProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	TestChamber_Source_TestChamber_TestChamberProjectile_h_12_RPC_WRAPPERS \
	TestChamber_Source_TestChamber_TestChamberProjectile_h_12_INCLASS \
	TestChamber_Source_TestChamber_TestChamberProjectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TestChamber_Source_TestChamber_TestChamberProjectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestChamber_Source_TestChamber_TestChamberProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	TestChamber_Source_TestChamber_TestChamberProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	TestChamber_Source_TestChamber_TestChamberProjectile_h_12_INCLASS_NO_PURE_DECLS \
	TestChamber_Source_TestChamber_TestChamberProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TESTCHAMBER_API UClass* StaticClass<class ATestChamberProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TestChamber_Source_TestChamber_TestChamberProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
