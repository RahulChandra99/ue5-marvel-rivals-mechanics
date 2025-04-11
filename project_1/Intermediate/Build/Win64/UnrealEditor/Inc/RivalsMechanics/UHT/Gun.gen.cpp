// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RivalsMechanics/Public/Punisher/Actors/Gun.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGun() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	RIVALSMECHANICS_API UClass* Z_Construct_UClass_AGun();
	RIVALSMECHANICS_API UClass* Z_Construct_UClass_AGun_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RivalsMechanics();
// End Cross Module References
	void AGun::StaticRegisterNativesAGun()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGun);
	UClass* Z_Construct_UClass_AGun_NoRegister()
	{
		return AGun::StaticClass();
	}
	struct Z_Construct_UClass_AGun_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Root;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GunMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GunMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MuzzleFlash_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MuzzleFlash;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MuzzleSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MuzzleSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImpactEffect_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ImpactEffect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImpactSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ImpactSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageDone_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageDone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FireRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FireRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Ammunition_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Ammunition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsReloading_MetaData[];
#endif
		static void NewProp_bIsReloading_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsReloading;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGun_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_RivalsMechanics,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGun_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGun_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Punisher/Actors/Gun.h" },
		{ "ModuleRelativePath", "Public/Punisher/Actors/Gun.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGun_Statics::NewProp_Root_MetaData[] = {
		{ "Category", "Gun" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Punisher/Actors/Gun.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGun_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGun, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGun_Statics::NewProp_Root_MetaData), Z_Construct_UClass_AGun_Statics::NewProp_Root_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGun_Statics::NewProp_GunMesh_MetaData[] = {
		{ "Category", "Gun" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Punisher/Actors/Gun.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGun_Statics::NewProp_GunMesh = { "GunMesh", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGun, GunMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGun_Statics::NewProp_GunMesh_MetaData), Z_Construct_UClass_AGun_Statics::NewProp_GunMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGun_Statics::NewProp_MuzzleFlash_MetaData[] = {
		{ "Category", "Configurations" },
		{ "ModuleRelativePath", "Public/Punisher/Actors/Gun.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGun_Statics::NewProp_MuzzleFlash = { "MuzzleFlash", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGun, MuzzleFlash), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGun_Statics::NewProp_MuzzleFlash_MetaData), Z_Construct_UClass_AGun_Statics::NewProp_MuzzleFlash_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGun_Statics::NewProp_MuzzleSound_MetaData[] = {
		{ "Category", "Configurations" },
		{ "ModuleRelativePath", "Public/Punisher/Actors/Gun.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGun_Statics::NewProp_MuzzleSound = { "MuzzleSound", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGun, MuzzleSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGun_Statics::NewProp_MuzzleSound_MetaData), Z_Construct_UClass_AGun_Statics::NewProp_MuzzleSound_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGun_Statics::NewProp_ImpactEffect_MetaData[] = {
		{ "Category", "Configurations" },
		{ "ModuleRelativePath", "Public/Punisher/Actors/Gun.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGun_Statics::NewProp_ImpactEffect = { "ImpactEffect", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGun, ImpactEffect), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGun_Statics::NewProp_ImpactEffect_MetaData), Z_Construct_UClass_AGun_Statics::NewProp_ImpactEffect_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGun_Statics::NewProp_ImpactSound_MetaData[] = {
		{ "Category", "Configurations" },
		{ "ModuleRelativePath", "Public/Punisher/Actors/Gun.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGun_Statics::NewProp_ImpactSound = { "ImpactSound", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGun, ImpactSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGun_Statics::NewProp_ImpactSound_MetaData), Z_Construct_UClass_AGun_Statics::NewProp_ImpactSound_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGun_Statics::NewProp_MaxRange_MetaData[] = {
		{ "Category", "Configurations" },
		{ "ModuleRelativePath", "Public/Punisher/Actors/Gun.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGun_Statics::NewProp_MaxRange = { "MaxRange", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGun, MaxRange), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGun_Statics::NewProp_MaxRange_MetaData), Z_Construct_UClass_AGun_Statics::NewProp_MaxRange_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGun_Statics::NewProp_DamageDone_MetaData[] = {
		{ "Category", "Configurations" },
		{ "ModuleRelativePath", "Public/Punisher/Actors/Gun.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGun_Statics::NewProp_DamageDone = { "DamageDone", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGun, DamageDone), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGun_Statics::NewProp_DamageDone_MetaData), Z_Construct_UClass_AGun_Statics::NewProp_DamageDone_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGun_Statics::NewProp_FireRate_MetaData[] = {
		{ "Category", "Configurations" },
		{ "ModuleRelativePath", "Public/Punisher/Actors/Gun.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGun_Statics::NewProp_FireRate = { "FireRate", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGun, FireRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGun_Statics::NewProp_FireRate_MetaData), Z_Construct_UClass_AGun_Statics::NewProp_FireRate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGun_Statics::NewProp_Ammunition_MetaData[] = {
		{ "Category", "Configurations" },
		{ "ModuleRelativePath", "Public/Punisher/Actors/Gun.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGun_Statics::NewProp_Ammunition = { "Ammunition", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGun, Ammunition), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGun_Statics::NewProp_Ammunition_MetaData), Z_Construct_UClass_AGun_Statics::NewProp_Ammunition_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGun_Statics::NewProp_bIsReloading_MetaData[] = {
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "Public/Punisher/Actors/Gun.h" },
	};
#endif
	void Z_Construct_UClass_AGun_Statics::NewProp_bIsReloading_SetBit(void* Obj)
	{
		((AGun*)Obj)->bIsReloading = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGun_Statics::NewProp_bIsReloading = { "bIsReloading", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGun), &Z_Construct_UClass_AGun_Statics::NewProp_bIsReloading_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGun_Statics::NewProp_bIsReloading_MetaData), Z_Construct_UClass_AGun_Statics::NewProp_bIsReloading_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGun_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGun_Statics::NewProp_Root,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGun_Statics::NewProp_GunMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGun_Statics::NewProp_MuzzleFlash,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGun_Statics::NewProp_MuzzleSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGun_Statics::NewProp_ImpactEffect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGun_Statics::NewProp_ImpactSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGun_Statics::NewProp_MaxRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGun_Statics::NewProp_DamageDone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGun_Statics::NewProp_FireRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGun_Statics::NewProp_Ammunition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGun_Statics::NewProp_bIsReloading,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGun_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGun>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGun_Statics::ClassParams = {
		&AGun::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGun_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AGun_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGun_Statics::Class_MetaDataParams), Z_Construct_UClass_AGun_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGun_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AGun()
	{
		if (!Z_Registration_Info_UClass_AGun.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGun.OuterSingleton, Z_Construct_UClass_AGun_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGun.OuterSingleton;
	}
	template<> RIVALSMECHANICS_API UClass* StaticClass<AGun>()
	{
		return AGun::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGun);
	AGun::~AGun() {}
	struct Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Punisher_Actors_Gun_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Punisher_Actors_Gun_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGun, AGun::StaticClass, TEXT("AGun"), &Z_Registration_Info_UClass_AGun, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGun), 1862357108U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Punisher_Actors_Gun_h_1248966515(TEXT("/Script/RivalsMechanics"),
		Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Punisher_Actors_Gun_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Punisher_Actors_Gun_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
