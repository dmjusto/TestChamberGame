// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TESTCHAMBER_BP_Portal_generated_h
#error "BP_Portal.generated.h already included, missing '#pragma once' in BP_Portal.h"
#endif
#define TESTCHAMBER_BP_Portal_generated_h

#define TestChamber_Source_TestChamber_BP_Portal_h_13_RPC_WRAPPERS
#define TestChamber_Source_TestChamber_BP_Portal_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define TestChamber_Source_TestChamber_BP_Portal_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBP_Portal(); \
	friend struct Z_Construct_UClass_UBP_Portal_Statics; \
public: \
	DECLARE_CLASS(UBP_Portal, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TestChamber"), NO_API) \
	DECLARE_SERIALIZER(UBP_Portal)


#define TestChamber_Source_TestChamber_BP_Portal_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUBP_Portal(); \
	friend struct Z_Construct_UClass_UBP_Portal_Statics; \
public: \
	DECLARE_CLASS(UBP_Portal, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TestChamber"), NO_API) \
	DECLARE_SERIALIZER(UBP_Portal)


#define TestChamber_Source_TestChamber_BP_Portal_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBP_Portal(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBP_Portal) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBP_Portal); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBP_Portal); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBP_Portal(UBP_Portal&&); \
	NO_API UBP_Portal(const UBP_Portal&); \
public:


#define TestChamber_Source_TestChamber_BP_Portal_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBP_Portal(UBP_Portal&&); \
	NO_API UBP_Portal(const UBP_Portal&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBP_Portal); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBP_Portal); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBP_Portal)


#define TestChamber_Source_TestChamber_BP_Portal_h_13_PRIVATE_PROPERTY_OFFSET
#define TestChamber_Source_TestChamber_BP_Portal_h_10_PROLOG
#define TestChamber_Source_TestChamber_BP_Portal_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestChamber_Source_TestChamber_BP_Portal_h_13_PRIVATE_PROPERTY_OFFSET \
	TestChamber_Source_TestChamber_BP_Portal_h_13_RPC_WRAPPERS \
	TestChamber_Source_TestChamber_BP_Portal_h_13_INCLASS \
	TestChamber_Source_TestChamber_BP_Portal_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TestChamber_Source_TestChamber_BP_Portal_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestChamber_Source_TestChamber_BP_Portal_h_13_PRIVATE_PROPERTY_OFFSET \
	TestChamber_Source_TestChamber_BP_Portal_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	TestChamber_Source_TestChamber_BP_Portal_h_13_INCLASS_NO_PURE_DECLS \
	TestChamber_Source_TestChamber_BP_Portal_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TESTCHAMBER_API UClass* StaticClass<class UBP_Portal>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TestChamber_Source_TestChamber_BP_Portal_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
