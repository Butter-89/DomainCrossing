// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DomainCrossing/Public/PlayerInteract.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerInteract() {}
// Cross Module References
	DOMAINCROSSING_API UClass* Z_Construct_UClass_UPlayerInteract_NoRegister();
	DOMAINCROSSING_API UClass* Z_Construct_UClass_UPlayerInteract();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DomainCrossing();
// End Cross Module References
	void UPlayerInteract::StaticRegisterNativesUPlayerInteract()
	{
	}
	UClass* Z_Construct_UClass_UPlayerInteract_NoRegister()
	{
		return UPlayerInteract::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerInteract_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerInteract_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DomainCrossing,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerInteract_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "PlayerInteract.h" },
		{ "ModuleRelativePath", "Public/PlayerInteract.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerInteract_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerInteract>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlayerInteract_Statics::ClassParams = {
		&UPlayerInteract::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPlayerInteract_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPlayerInteract_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayerInteract()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlayerInteract_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlayerInteract, 970008867);
	template<> DOMAINCROSSING_API UClass* StaticClass<UPlayerInteract>()
	{
		return UPlayerInteract::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlayerInteract(Z_Construct_UClass_UPlayerInteract, &UPlayerInteract::StaticClass, TEXT("/Script/DomainCrossing"), TEXT("UPlayerInteract"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerInteract);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
