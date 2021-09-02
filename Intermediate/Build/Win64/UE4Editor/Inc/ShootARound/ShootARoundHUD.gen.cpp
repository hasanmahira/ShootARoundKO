// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShootARound/ShootARoundHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShootARoundHUD() {}
// Cross Module References
	SHOOTAROUND_API UClass* Z_Construct_UClass_AShootARoundHUD_NoRegister();
	SHOOTAROUND_API UClass* Z_Construct_UClass_AShootARoundHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_ShootARound();
// End Cross Module References
	void AShootARoundHUD::StaticRegisterNativesAShootARoundHUD()
	{
	}
	UClass* Z_Construct_UClass_AShootARoundHUD_NoRegister()
	{
		return AShootARoundHUD::StaticClass();
	}
	struct Z_Construct_UClass_AShootARoundHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShootARoundHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_ShootARound,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShootARoundHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "ShootARoundHUD.h" },
		{ "ModuleRelativePath", "ShootARoundHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShootARoundHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShootARoundHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AShootARoundHUD_Statics::ClassParams = {
		&AShootARoundHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AShootARoundHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AShootARoundHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AShootARoundHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AShootARoundHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AShootARoundHUD, 4197783256);
	template<> SHOOTAROUND_API UClass* StaticClass<AShootARoundHUD>()
	{
		return AShootARoundHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AShootARoundHUD(Z_Construct_UClass_AShootARoundHUD, &AShootARoundHUD::StaticClass, TEXT("/Script/ShootARound"), TEXT("AShootARoundHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShootARoundHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
