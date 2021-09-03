// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShootARound/BaseWeapon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseWeapon() {}
// Cross Module References
	SHOOTAROUND_API UEnum* Z_Construct_UEnum_ShootARound_EWeaponType();
	UPackage* Z_Construct_UPackage__Script_ShootARound();
	SHOOTAROUND_API UClass* Z_Construct_UClass_ABaseWeapon_NoRegister();
	SHOOTAROUND_API UClass* Z_Construct_UClass_ABaseWeapon();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
// End Cross Module References
	static UEnum* EWeaponType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ShootARound_EWeaponType, Z_Construct_UPackage__Script_ShootARound(), TEXT("EWeaponType"));
		}
		return Singleton;
	}
	template<> SHOOTAROUND_API UEnum* StaticEnum<EWeaponType>()
	{
		return EWeaponType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EWeaponType(EWeaponType_StaticEnum, TEXT("/Script/ShootARound"), TEXT("EWeaponType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ShootARound_EWeaponType_Hash() { return 2772220523U; }
	UEnum* Z_Construct_UEnum_ShootARound_EWeaponType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ShootARound();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EWeaponType"), 0, Get_Z_Construct_UEnum_ShootARound_EWeaponType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EWeaponType::E_AssultRifle", (int64)EWeaponType::E_AssultRifle },
				{ "EWeaponType::E_Pistol", (int64)EWeaponType::E_Pistol },
				{ "EWeaponType::E_ShoutGun", (int64)EWeaponType::E_ShoutGun },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "E_AssultRifle.DisplayName", "ASSULT_RIFLE" },
				{ "E_AssultRifle.Name", "EWeaponType::E_AssultRifle" },
				{ "E_Pistol.DisplayName", "PISTOL" },
				{ "E_Pistol.Name", "EWeaponType::E_Pistol" },
				{ "E_ShoutGun.DisplayName", "SHOUTGUN" },
				{ "E_ShoutGun.Name", "EWeaponType::E_ShoutGun" },
				{ "ModuleRelativePath", "BaseWeapon.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ShootARound,
				nullptr,
				"EWeaponType",
				"EWeaponType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void ABaseWeapon::StaticRegisterNativesABaseWeapon()
	{
	}
	UClass* Z_Construct_UClass_ABaseWeapon_NoRegister()
	{
		return ABaseWeapon::StaticClass();
	}
	struct Z_Construct_UClass_ABaseWeapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_maxTotalAmmo_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_maxTotalAmmo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_maxClipAmmo_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_maxClipAmmo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_totalAmmo_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_totalAmmo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_clipAmmo_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_clipAmmo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_reloadTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_reloadTime;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_weaponType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_weaponType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_weaponType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABaseWeapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ShootARound,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseWeapon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BaseWeapon.h" },
		{ "ModuleRelativePath", "BaseWeapon.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseWeapon_Statics::NewProp_maxTotalAmmo_MetaData[] = {
		{ "Category", "Weapon" },
		{ "Comment", "//The total amount of ammo that can be carried on weapon\n" },
		{ "ModuleRelativePath", "BaseWeapon.h" },
		{ "ToolTip", "The total amount of ammo that can be carried on weapon" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ABaseWeapon_Statics::NewProp_maxTotalAmmo = { "maxTotalAmmo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseWeapon, maxTotalAmmo), METADATA_PARAMS(Z_Construct_UClass_ABaseWeapon_Statics::NewProp_maxTotalAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseWeapon_Statics::NewProp_maxTotalAmmo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseWeapon_Statics::NewProp_maxClipAmmo_MetaData[] = {
		{ "Category", "Weapon" },
		{ "Comment", "//The total amount of ammo that can be in the weapon\n" },
		{ "ModuleRelativePath", "BaseWeapon.h" },
		{ "ToolTip", "The total amount of ammo that can be in the weapon" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ABaseWeapon_Statics::NewProp_maxClipAmmo = { "maxClipAmmo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseWeapon, maxClipAmmo), METADATA_PARAMS(Z_Construct_UClass_ABaseWeapon_Statics::NewProp_maxClipAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseWeapon_Statics::NewProp_maxClipAmmo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseWeapon_Statics::NewProp_totalAmmo_MetaData[] = {
		{ "Category", "Weapon" },
		{ "Comment", "//The total amount of ammo being carried for the weapon\n" },
		{ "ModuleRelativePath", "BaseWeapon.h" },
		{ "ToolTip", "The total amount of ammo being carried for the weapon" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ABaseWeapon_Statics::NewProp_totalAmmo = { "totalAmmo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseWeapon, totalAmmo), METADATA_PARAMS(Z_Construct_UClass_ABaseWeapon_Statics::NewProp_totalAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseWeapon_Statics::NewProp_totalAmmo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseWeapon_Statics::NewProp_clipAmmo_MetaData[] = {
		{ "Category", "Weapon" },
		{ "Comment", "//The amount of ammo in the weapon\n" },
		{ "ModuleRelativePath", "BaseWeapon.h" },
		{ "ToolTip", "The amount of ammo in the weapon" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ABaseWeapon_Statics::NewProp_clipAmmo = { "clipAmmo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseWeapon, clipAmmo), METADATA_PARAMS(Z_Construct_UClass_ABaseWeapon_Statics::NewProp_clipAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseWeapon_Statics::NewProp_clipAmmo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseWeapon_Statics::NewProp_reloadTime_MetaData[] = {
		{ "Category", "Weapon" },
		{ "Comment", "//The time it takes to reload the weapon\n" },
		{ "ModuleRelativePath", "BaseWeapon.h" },
		{ "ToolTip", "The time it takes to reload the weapon" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseWeapon_Statics::NewProp_reloadTime = { "reloadTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseWeapon, reloadTime), METADATA_PARAMS(Z_Construct_UClass_ABaseWeapon_Statics::NewProp_reloadTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseWeapon_Statics::NewProp_reloadTime_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ABaseWeapon_Statics::NewProp_weaponType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseWeapon_Statics::NewProp_weaponType_MetaData[] = {
		{ "Category", "Weapon" },
		{ "Comment", "//The type of the weapon\n" },
		{ "ModuleRelativePath", "BaseWeapon.h" },
		{ "ToolTip", "The type of the weapon" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ABaseWeapon_Statics::NewProp_weaponType = { "weaponType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseWeapon, weaponType), Z_Construct_UEnum_ShootARound_EWeaponType, METADATA_PARAMS(Z_Construct_UClass_ABaseWeapon_Statics::NewProp_weaponType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseWeapon_Statics::NewProp_weaponType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseWeapon_Statics::NewProp_maxTotalAmmo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseWeapon_Statics::NewProp_maxClipAmmo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseWeapon_Statics::NewProp_totalAmmo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseWeapon_Statics::NewProp_clipAmmo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseWeapon_Statics::NewProp_reloadTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseWeapon_Statics::NewProp_weaponType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseWeapon_Statics::NewProp_weaponType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABaseWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseWeapon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABaseWeapon_Statics::ClassParams = {
		&ABaseWeapon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABaseWeapon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABaseWeapon_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABaseWeapon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseWeapon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABaseWeapon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABaseWeapon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABaseWeapon, 3544703909);
	template<> SHOOTAROUND_API UClass* StaticClass<ABaseWeapon>()
	{
		return ABaseWeapon::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABaseWeapon(Z_Construct_UClass_ABaseWeapon, &ABaseWeapon::StaticClass, TEXT("/Script/ShootARound"), TEXT("ABaseWeapon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseWeapon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
