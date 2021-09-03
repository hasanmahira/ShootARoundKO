// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShootARound/BaseAmmo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseAmmo() {}
// Cross Module References
	SHOOTAROUND_API UClass* Z_Construct_UClass_ABaseAmmo_NoRegister();
	SHOOTAROUND_API UClass* Z_Construct_UClass_ABaseAmmo();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ShootARound();
	SHOOTAROUND_API UEnum* Z_Construct_UEnum_ShootARound_EWeaponType();
// End Cross Module References
	void ABaseAmmo::StaticRegisterNativesABaseAmmo()
	{
	}
	UClass* Z_Construct_UClass_ABaseAmmo_NoRegister()
	{
		return ABaseAmmo::StaticClass();
	}
	struct Z_Construct_UClass_ABaseAmmo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ammoAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ammoAmount;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ammoType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ammoType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ammoType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABaseAmmo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ShootARound,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseAmmo_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BaseAmmo.h" },
		{ "ModuleRelativePath", "BaseAmmo.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseAmmo_Statics::NewProp_ammoAmount_MetaData[] = {
		{ "Category", "Weapon" },
		{ "Comment", "//The total amount of ammo in this pickup\n" },
		{ "ModuleRelativePath", "BaseAmmo.h" },
		{ "ToolTip", "The total amount of ammo in this pickup" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ABaseAmmo_Statics::NewProp_ammoAmount = { "ammoAmount", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseAmmo, ammoAmount), METADATA_PARAMS(Z_Construct_UClass_ABaseAmmo_Statics::NewProp_ammoAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseAmmo_Statics::NewProp_ammoAmount_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ABaseAmmo_Statics::NewProp_ammoType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseAmmo_Statics::NewProp_ammoType_MetaData[] = {
		{ "Category", "Weapon" },
		{ "Comment", "//The type of ammo in this pickup\n" },
		{ "ModuleRelativePath", "BaseAmmo.h" },
		{ "ToolTip", "The type of ammo in this pickup" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ABaseAmmo_Statics::NewProp_ammoType = { "ammoType", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseAmmo, ammoType), Z_Construct_UEnum_ShootARound_EWeaponType, METADATA_PARAMS(Z_Construct_UClass_ABaseAmmo_Statics::NewProp_ammoType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseAmmo_Statics::NewProp_ammoType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseAmmo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseAmmo_Statics::NewProp_ammoAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseAmmo_Statics::NewProp_ammoType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseAmmo_Statics::NewProp_ammoType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABaseAmmo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseAmmo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABaseAmmo_Statics::ClassParams = {
		&ABaseAmmo::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABaseAmmo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABaseAmmo_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABaseAmmo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseAmmo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABaseAmmo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABaseAmmo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABaseAmmo, 2690521218);
	template<> SHOOTAROUND_API UClass* StaticClass<ABaseAmmo>()
	{
		return ABaseAmmo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABaseAmmo(Z_Construct_UClass_ABaseAmmo, &ABaseAmmo::StaticClass, TEXT("/Script/ShootARound"), TEXT("ABaseAmmo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseAmmo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
