// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RivalsMechanics/Public/Hela/HelaPrimaryProjectile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHelaPrimaryProjectile() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	RIVALSMECHANICS_API UClass* Z_Construct_UClass_AHelaPrimaryProjectile();
	RIVALSMECHANICS_API UClass* Z_Construct_UClass_AHelaPrimaryProjectile_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RivalsMechanics();
// End Cross Module References
	void AHelaPrimaryProjectile::StaticRegisterNativesAHelaPrimaryProjectile()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHelaPrimaryProjectile);
	UClass* Z_Construct_UClass_AHelaPrimaryProjectile_NoRegister()
	{
		return AHelaPrimaryProjectile::StaticClass();
	}
	struct Z_Construct_UClass_AHelaPrimaryProjectile_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SphereComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SphereComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MovementComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParticleSystemComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ParticleSystemComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MuzzleSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MuzzleSound;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHelaPrimaryProjectile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_RivalsMechanics,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHelaPrimaryProjectile_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHelaPrimaryProjectile_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Hela/HelaPrimaryProjectile.h" },
		{ "ModuleRelativePath", "Public/Hela/HelaPrimaryProjectile.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHelaPrimaryProjectile_Statics::NewProp_SphereComponent_MetaData[] = {
		{ "Category", "HelaPrimaryProjectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Hela/HelaPrimaryProjectile.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHelaPrimaryProjectile_Statics::NewProp_SphereComponent = { "SphereComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHelaPrimaryProjectile, SphereComponent), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHelaPrimaryProjectile_Statics::NewProp_SphereComponent_MetaData), Z_Construct_UClass_AHelaPrimaryProjectile_Statics::NewProp_SphereComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHelaPrimaryProjectile_Statics::NewProp_MovementComponent_MetaData[] = {
		{ "Category", "HelaPrimaryProjectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Hela/HelaPrimaryProjectile.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHelaPrimaryProjectile_Statics::NewProp_MovementComponent = { "MovementComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHelaPrimaryProjectile, MovementComponent), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHelaPrimaryProjectile_Statics::NewProp_MovementComponent_MetaData), Z_Construct_UClass_AHelaPrimaryProjectile_Statics::NewProp_MovementComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHelaPrimaryProjectile_Statics::NewProp_ParticleSystemComponent_MetaData[] = {
		{ "Category", "HelaPrimaryProjectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Hela/HelaPrimaryProjectile.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHelaPrimaryProjectile_Statics::NewProp_ParticleSystemComponent = { "ParticleSystemComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHelaPrimaryProjectile, ParticleSystemComponent), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHelaPrimaryProjectile_Statics::NewProp_ParticleSystemComponent_MetaData), Z_Construct_UClass_AHelaPrimaryProjectile_Statics::NewProp_ParticleSystemComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHelaPrimaryProjectile_Statics::NewProp_MuzzleSound_MetaData[] = {
		{ "Category", "Configurations" },
		{ "ModuleRelativePath", "Public/Hela/HelaPrimaryProjectile.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHelaPrimaryProjectile_Statics::NewProp_MuzzleSound = { "MuzzleSound", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHelaPrimaryProjectile, MuzzleSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHelaPrimaryProjectile_Statics::NewProp_MuzzleSound_MetaData), Z_Construct_UClass_AHelaPrimaryProjectile_Statics::NewProp_MuzzleSound_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHelaPrimaryProjectile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHelaPrimaryProjectile_Statics::NewProp_SphereComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHelaPrimaryProjectile_Statics::NewProp_MovementComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHelaPrimaryProjectile_Statics::NewProp_ParticleSystemComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHelaPrimaryProjectile_Statics::NewProp_MuzzleSound,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHelaPrimaryProjectile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHelaPrimaryProjectile>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AHelaPrimaryProjectile_Statics::ClassParams = {
		&AHelaPrimaryProjectile::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AHelaPrimaryProjectile_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AHelaPrimaryProjectile_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHelaPrimaryProjectile_Statics::Class_MetaDataParams), Z_Construct_UClass_AHelaPrimaryProjectile_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHelaPrimaryProjectile_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AHelaPrimaryProjectile()
	{
		if (!Z_Registration_Info_UClass_AHelaPrimaryProjectile.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHelaPrimaryProjectile.OuterSingleton, Z_Construct_UClass_AHelaPrimaryProjectile_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AHelaPrimaryProjectile.OuterSingleton;
	}
	template<> RIVALSMECHANICS_API UClass* StaticClass<AHelaPrimaryProjectile>()
	{
		return AHelaPrimaryProjectile::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHelaPrimaryProjectile);
	AHelaPrimaryProjectile::~AHelaPrimaryProjectile() {}
	struct Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Hela_HelaPrimaryProjectile_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Hela_HelaPrimaryProjectile_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AHelaPrimaryProjectile, AHelaPrimaryProjectile::StaticClass, TEXT("AHelaPrimaryProjectile"), &Z_Registration_Info_UClass_AHelaPrimaryProjectile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHelaPrimaryProjectile), 738096228U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Hela_HelaPrimaryProjectile_h_560456574(TEXT("/Script/RivalsMechanics"),
		Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Hela_HelaPrimaryProjectile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Hela_HelaPrimaryProjectile_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
