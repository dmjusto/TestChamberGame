// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TESTCHAMBER_TestChamberCharacter_generated_h
#error "TestChamberCharacter.generated.h already included, missing '#pragma once' in TestChamberCharacter.h"
#endif
#define TESTCHAMBER_TestChamberCharacter_generated_h

#define TestChamber_Source_TestChamber_TestChamberCharacter_h_14_RPC_WRAPPERS
#define TestChamber_Source_TestChamber_TestChamberCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define TestChamber_Source_TestChamber_TestChamberCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATestChamberCharacter(); \
	friend struct Z_Construct_UClass_ATestChamberCharacter_Statics; \
public: \
	DECLARE_CLASS(ATestChamberCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TestChamber"), NO_API) \
	DECLARE_SERIALIZER(ATestChamberCharacter)


#define TestChamber_Source_TestChamber_TestChamberCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesATestChamberCharacter(); \
	friend struct Z_Construct_UClass_ATestChamberCharacter_Statics; \
public: \
	DECLARE_CLASS(ATestChamberCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TestChamber"), NO_API) \
	DECLARE_SERIALIZER(ATestChamberCharacter)


#define TestChamber_Source_TestChamber_TestChamberCharacter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATestChamberCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATestChamberCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATestChamberCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATestChamberCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATestChamberCharacter(ATestChamberCharacter&&); \
	NO_API ATestChamberCharacter(const ATestChamberCharacter&); \
public:


#define TestChamber_Source_TestChamber_TestChamberCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATestChamberCharacter(ATestChamberCharacter&&); \
	NO_API ATestChamberCharacter(const ATestChamberCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATestChamberCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATestChamberCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATestChamberCharacter)


#define TestChamber_Source_TestChamber_TestChamberCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(ATestChamberCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(ATestChamberCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(ATestChamberCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(ATestChamberCharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(ATestChamberCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(ATestChamberCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(ATestChamberCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(ATestChamberCharacter, L_MotionController); }


#define TestChamber_Source_TestChamber_TestChamberCharacter_h_11_PROLOG
#define TestChamber_Source_TestChamber_TestChamberCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestChamber_Source_TestChamber_TestChamberCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	TestChamber_Source_TestChamber_TestChamberCharacter_h_14_RPC_WRAPPERS \
	TestChamber_Source_TestChamber_TestChamberCharacter_h_14_INCLASS \
	TestChamber_Source_TestChamber_TestChamberCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TestChamber_Source_TestChamber_TestChamberCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestChamber_Source_TestChamber_TestChamberCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	TestChamber_Source_TestChamber_TestChamberCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	TestChamber_Source_TestChamber_TestChamberCharacter_h_14_INCLASS_NO_PURE_DECLS \
	TestChamber_Source_TestChamber_TestChamberCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TESTCHAMBER_API UClass* StaticClass<class ATestChamberCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TestChamber_Source_TestChamber_TestChamberCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
