// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TESTCHAMBER_Portal_generated_h
#error "Portal.generated.h already included, missing '#pragma once' in Portal.h"
#endif
#define TESTCHAMBER_Portal_generated_h

#define TestChamber_Source_TestChamber_Portal_h_12_RPC_WRAPPERS
#define TestChamber_Source_TestChamber_Portal_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define TestChamber_Source_TestChamber_Portal_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPortal(); \
	friend struct Z_Construct_UClass_APortal_Statics; \
public: \
	DECLARE_CLASS(APortal, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TestChamber"), NO_API) \
	DECLARE_SERIALIZER(APortal)


#define TestChamber_Source_TestChamber_Portal_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAPortal(); \
	friend struct Z_Construct_UClass_APortal_Statics; \
public: \
	DECLARE_CLASS(APortal, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TestChamber"), NO_API) \
	DECLARE_SERIALIZER(APortal)


#define TestChamber_Source_TestChamber_Portal_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APortal(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APortal) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APortal); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APortal); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APortal(APortal&&); \
	NO_API APortal(const APortal&); \
public:


#define TestChamber_Source_TestChamber_Portal_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APortal(APortal&&); \
	NO_API APortal(const APortal&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APortal); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APortal); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APortal)


#define TestChamber_Source_TestChamber_Portal_h_12_PRIVATE_PROPERTY_OFFSET
#define TestChamber_Source_TestChamber_Portal_h_9_PROLOG
#define TestChamber_Source_TestChamber_Portal_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestChamber_Source_TestChamber_Portal_h_12_PRIVATE_PROPERTY_OFFSET \
	TestChamber_Source_TestChamber_Portal_h_12_RPC_WRAPPERS \
	TestChamber_Source_TestChamber_Portal_h_12_INCLASS \
	TestChamber_Source_TestChamber_Portal_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TestChamber_Source_TestChamber_Portal_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestChamber_Source_TestChamber_Portal_h_12_PRIVATE_PROPERTY_OFFSET \
	TestChamber_Source_TestChamber_Portal_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	TestChamber_Source_TestChamber_Portal_h_12_INCLASS_NO_PURE_DECLS \
	TestChamber_Source_TestChamber_Portal_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TESTCHAMBER_API UClass* StaticClass<class APortal>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TestChamber_Source_TestChamber_Portal_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
