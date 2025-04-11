// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RivalsMechanics/Public/Characters/EnemyCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyCharacter() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	RIVALSMECHANICS_API UClass* Z_Construct_UClass_AEnemyCharacter();
	RIVALSMECHANICS_API UClass* Z_Construct_UClass_AEnemyCharacter_NoRegister();
	RIVALSMECHANICS_API UClass* Z_Construct_UClass_UEnemy_NoRegister();
	RIVALSMECHANICS_API UClass* Z_Construct_UClass_UStatsComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RivalsMechanics();
// End Cross Module References
	void AEnemyCharacter::StaticRegisterNativesAEnemyCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemyCharacter);
	UClass* Z_Construct_UClass_AEnemyCharacter_NoRegister()
	{
		return AEnemyCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AEnemyCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StatsComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StatsComp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemyCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_RivalsMechanics,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyCharacter_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Characters/EnemyCharacter.h" },
		{ "ModuleRelativePath", "Public/Characters/EnemyCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_StatsComp_MetaData[] = {
		{ "Category", "EnemyCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/EnemyCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_StatsComp = { "StatsComp", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyCharacter, StatsComp), Z_Construct_UClass_UStatsComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_StatsComp_MetaData), Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_StatsComp_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemyCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_StatsComp,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AEnemyCharacter_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UEnemy_NoRegister, (int32)VTABLE_OFFSET(AEnemyCharacter, IEnemy), false },  // 2745729631
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyCharacter_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemyCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemyCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemyCharacter_Statics::ClassParams = {
		&AEnemyCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AEnemyCharacter_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyCharacter_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnemyCharacter_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyCharacter_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AEnemyCharacter()
	{
		if (!Z_Registration_Info_UClass_AEnemyCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemyCharacter.OuterSingleton, Z_Construct_UClass_AEnemyCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AEnemyCharacter.OuterSingleton;
	}
	template<> RIVALSMECHANICS_API UClass* StaticClass<AEnemyCharacter>()
	{
		return AEnemyCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemyCharacter);
	AEnemyCharacter::~AEnemyCharacter() {}
	struct Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Characters_EnemyCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Characters_EnemyCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AEnemyCharacter, AEnemyCharacter::StaticClass, TEXT("AEnemyCharacter"), &Z_Registration_Info_UClass_AEnemyCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemyCharacter), 394771708U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Characters_EnemyCharacter_h_1883730700(TEXT("/Script/RivalsMechanics"),
		Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Characters_EnemyCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Characters_EnemyCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
