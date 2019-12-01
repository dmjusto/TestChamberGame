// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestChamber/BP_Portal.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBP_Portal() {}
// Cross Module References
	TESTCHAMBER_API UClass* Z_Construct_UClass_UBP_Portal_NoRegister();
	TESTCHAMBER_API UClass* Z_Construct_UClass_UBP_Portal();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_TestChamber();
// End Cross Module References
	void UBP_Portal::StaticRegisterNativesUBP_Portal()
	{
	}
	UClass* Z_Construct_UClass_UBP_Portal_NoRegister()
	{
		return UBP_Portal::StaticClass();
	}
	struct Z_Construct_UClass_UBP_Portal_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBP_Portal_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TestChamber,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBP_Portal_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "BP_Portal.h" },
		{ "ModuleRelativePath", "BP_Portal.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBP_Portal_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBP_Portal>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBP_Portal_Statics::ClassParams = {
		&UBP_Portal::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBP_Portal_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBP_Portal_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBP_Portal()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBP_Portal_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBP_Portal, 2179323175);
	template<> TESTCHAMBER_API UClass* StaticClass<UBP_Portal>()
	{
		return UBP_Portal::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBP_Portal(Z_Construct_UClass_UBP_Portal, &UBP_Portal::StaticClass, TEXT("/Script/TestChamber"), TEXT("UBP_Portal"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBP_Portal);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
