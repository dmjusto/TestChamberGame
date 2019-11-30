// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestChamber/TestChamberHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestChamberHUD() {}
// Cross Module References
	TESTCHAMBER_API UClass* Z_Construct_UClass_ATestChamberHUD_NoRegister();
	TESTCHAMBER_API UClass* Z_Construct_UClass_ATestChamberHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_TestChamber();
// End Cross Module References
	void ATestChamberHUD::StaticRegisterNativesATestChamberHUD()
	{
	}
	UClass* Z_Construct_UClass_ATestChamberHUD_NoRegister()
	{
		return ATestChamberHUD::StaticClass();
	}
	struct Z_Construct_UClass_ATestChamberHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATestChamberHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_TestChamber,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestChamberHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "TestChamberHUD.h" },
		{ "ModuleRelativePath", "TestChamberHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATestChamberHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATestChamberHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATestChamberHUD_Statics::ClassParams = {
		&ATestChamberHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ATestChamberHUD_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ATestChamberHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATestChamberHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATestChamberHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATestChamberHUD, 2756368393);
	template<> TESTCHAMBER_API UClass* StaticClass<ATestChamberHUD>()
	{
		return ATestChamberHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATestChamberHUD(Z_Construct_UClass_ATestChamberHUD, &ATestChamberHUD::StaticClass, TEXT("/Script/TestChamber"), TEXT("ATestChamberHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATestChamberHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
