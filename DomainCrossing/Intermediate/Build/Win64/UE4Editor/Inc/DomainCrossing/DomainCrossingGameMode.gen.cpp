// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DomainCrossing/DomainCrossingGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDomainCrossingGameMode() {}
// Cross Module References
	DOMAINCROSSING_API UClass* Z_Construct_UClass_ADomainCrossingGameMode_NoRegister();
	DOMAINCROSSING_API UClass* Z_Construct_UClass_ADomainCrossingGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_DomainCrossing();
// End Cross Module References
	void ADomainCrossingGameMode::StaticRegisterNativesADomainCrossingGameMode()
	{
	}
	UClass* Z_Construct_UClass_ADomainCrossingGameMode_NoRegister()
	{
		return ADomainCrossingGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ADomainCrossingGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADomainCrossingGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DomainCrossing,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADomainCrossingGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "DomainCrossingGameMode.h" },
		{ "ModuleRelativePath", "DomainCrossingGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADomainCrossingGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADomainCrossingGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADomainCrossingGameMode_Statics::ClassParams = {
		&ADomainCrossingGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ADomainCrossingGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ADomainCrossingGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADomainCrossingGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADomainCrossingGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADomainCrossingGameMode, 1148383160);
	template<> DOMAINCROSSING_API UClass* StaticClass<ADomainCrossingGameMode>()
	{
		return ADomainCrossingGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADomainCrossingGameMode(Z_Construct_UClass_ADomainCrossingGameMode, &ADomainCrossingGameMode::StaticClass, TEXT("/Script/DomainCrossing"), TEXT("ADomainCrossingGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADomainCrossingGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
