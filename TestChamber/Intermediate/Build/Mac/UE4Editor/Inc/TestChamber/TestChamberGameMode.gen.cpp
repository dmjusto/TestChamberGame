// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestChamber/TestChamberGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestChamberGameMode() {}
// Cross Module References
	TESTCHAMBER_API UClass* Z_Construct_UClass_ATestChamberGameMode_NoRegister();
	TESTCHAMBER_API UClass* Z_Construct_UClass_ATestChamberGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_TestChamber();
// End Cross Module References
	void ATestChamberGameMode::StaticRegisterNativesATestChamberGameMode()
	{
	}
	UClass* Z_Construct_UClass_ATestChamberGameMode_NoRegister()
	{
		return ATestChamberGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ATestChamberGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATestChamberGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TestChamber,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestChamberGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "TestChamberGameMode.h" },
		{ "ModuleRelativePath", "TestChamberGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATestChamberGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATestChamberGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATestChamberGameMode_Statics::ClassParams = {
		&ATestChamberGameMode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802A8u,
		METADATA_PARAMS(Z_Construct_UClass_ATestChamberGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ATestChamberGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATestChamberGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATestChamberGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATestChamberGameMode, 2127529146);
	template<> TESTCHAMBER_API UClass* StaticClass<ATestChamberGameMode>()
	{
		return ATestChamberGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATestChamberGameMode(Z_Construct_UClass_ATestChamberGameMode, &ATestChamberGameMode::StaticClass, TEXT("/Script/TestChamber"), TEXT("ATestChamberGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATestChamberGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
