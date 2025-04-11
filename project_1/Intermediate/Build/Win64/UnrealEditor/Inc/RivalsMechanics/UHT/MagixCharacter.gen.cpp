// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RivalsMechanics/Public/Characters/MagixCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMagixCharacter() {}
// Cross Module References
	RIVALSMECHANICS_API UClass* Z_Construct_UClass_AMagixCharacter();
	RIVALSMECHANICS_API UClass* Z_Construct_UClass_AMagixCharacter_NoRegister();
	RIVALSMECHANICS_API UClass* Z_Construct_UClass_ARivalsMechanicsCharacter();
	RIVALSMECHANICS_API UClass* Z_Construct_UClass_UCombatComponent_NoRegister();
	RIVALSMECHANICS_API UClass* Z_Construct_UClass_UFighter_NoRegister();
	RIVALSMECHANICS_API UClass* Z_Construct_UClass_ULockOnComponent_NoRegister();
	RIVALSMECHANICS_API UClass* Z_Construct_UClass_UMagix_NoRegister();
	RIVALSMECHANICS_API UClass* Z_Construct_UClass_UPlayerActionsComponent_NoRegister();
	RIVALSMECHANICS_API UClass* Z_Construct_UClass_UPlayerAnimInstance_NoRegister();
	RIVALSMECHANICS_API UClass* Z_Construct_UClass_UStatsComponent_NoRegister();
	RIVALSMECHANICS_API UClass* Z_Construct_UClass_UTraceComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RivalsMechanics();
// End Cross Module References
	void AMagixCharacter::StaticRegisterNativesAMagixCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMagixCharacter);
	UClass* Z_Construct_UClass_AMagixCharacter_NoRegister()
	{
		return AMagixCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AMagixCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerAnim_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerAnim;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StatsComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StatsComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LockOnComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LockOnComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TraceComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CombatComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CombatComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerActionsComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerActionsComp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMagixCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ARivalsMechanicsCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_RivalsMechanics,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMagixCharacter_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMagixCharacter_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Characters/MagixCharacter.h" },
		{ "ModuleRelativePath", "Public/Characters/MagixCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMagixCharacter_Statics::NewProp_PlayerAnim_MetaData[] = {
		{ "Category", "MagixCharacter" },
		{ "ModuleRelativePath", "Public/Characters/MagixCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMagixCharacter_Statics::NewProp_PlayerAnim = { "PlayerAnim", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMagixCharacter, PlayerAnim), Z_Construct_UClass_UPlayerAnimInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMagixCharacter_Statics::NewProp_PlayerAnim_MetaData), Z_Construct_UClass_AMagixCharacter_Statics::NewProp_PlayerAnim_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMagixCharacter_Statics::NewProp_StatsComp_MetaData[] = {
		{ "Category", "MagixCharacter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Adding components\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/MagixCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adding components" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMagixCharacter_Statics::NewProp_StatsComp = { "StatsComp", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMagixCharacter, StatsComp), Z_Construct_UClass_UStatsComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMagixCharacter_Statics::NewProp_StatsComp_MetaData), Z_Construct_UClass_AMagixCharacter_Statics::NewProp_StatsComp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMagixCharacter_Statics::NewProp_LockOnComp_MetaData[] = {
		{ "Category", "MagixCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/MagixCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMagixCharacter_Statics::NewProp_LockOnComp = { "LockOnComp", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMagixCharacter, LockOnComp), Z_Construct_UClass_ULockOnComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMagixCharacter_Statics::NewProp_LockOnComp_MetaData), Z_Construct_UClass_AMagixCharacter_Statics::NewProp_LockOnComp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMagixCharacter_Statics::NewProp_TraceComp_MetaData[] = {
		{ "Category", "MagixCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/MagixCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMagixCharacter_Statics::NewProp_TraceComp = { "TraceComp", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMagixCharacter, TraceComp), Z_Construct_UClass_UTraceComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMagixCharacter_Statics::NewProp_TraceComp_MetaData), Z_Construct_UClass_AMagixCharacter_Statics::NewProp_TraceComp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMagixCharacter_Statics::NewProp_CombatComp_MetaData[] = {
		{ "Category", "MagixCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/MagixCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMagixCharacter_Statics::NewProp_CombatComp = { "CombatComp", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMagixCharacter, CombatComp), Z_Construct_UClass_UCombatComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMagixCharacter_Statics::NewProp_CombatComp_MetaData), Z_Construct_UClass_AMagixCharacter_Statics::NewProp_CombatComp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMagixCharacter_Statics::NewProp_PlayerActionsComp_MetaData[] = {
		{ "Category", "MagixCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/MagixCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMagixCharacter_Statics::NewProp_PlayerActionsComp = { "PlayerActionsComp", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMagixCharacter, PlayerActionsComp), Z_Construct_UClass_UPlayerActionsComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMagixCharacter_Statics::NewProp_PlayerActionsComp_MetaData), Z_Construct_UClass_AMagixCharacter_Statics::NewProp_PlayerActionsComp_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMagixCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMagixCharacter_Statics::NewProp_PlayerAnim,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMagixCharacter_Statics::NewProp_StatsComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMagixCharacter_Statics::NewProp_LockOnComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMagixCharacter_Statics::NewProp_TraceComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMagixCharacter_Statics::NewProp_CombatComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMagixCharacter_Statics::NewProp_PlayerActionsComp,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AMagixCharacter_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMagix_NoRegister, (int32)VTABLE_OFFSET(AMagixCharacter, IMagix), false },  // 282041939
			{ Z_Construct_UClass_UFighter_NoRegister, (int32)VTABLE_OFFSET(AMagixCharacter, IFighter), false },  // 1655829353
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMagixCharacter_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMagixCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMagixCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMagixCharacter_Statics::ClassParams = {
		&AMagixCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMagixCharacter_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMagixCharacter_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMagixCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AMagixCharacter_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMagixCharacter_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AMagixCharacter()
	{
		if (!Z_Registration_Info_UClass_AMagixCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMagixCharacter.OuterSingleton, Z_Construct_UClass_AMagixCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMagixCharacter.OuterSingleton;
	}
	template<> RIVALSMECHANICS_API UClass* StaticClass<AMagixCharacter>()
	{
		return AMagixCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMagixCharacter);
	AMagixCharacter::~AMagixCharacter() {}
	struct Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Characters_MagixCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Characters_MagixCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMagixCharacter, AMagixCharacter::StaticClass, TEXT("AMagixCharacter"), &Z_Registration_Info_UClass_AMagixCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMagixCharacter), 2741691322U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Characters_MagixCharacter_h_1670080730(TEXT("/Script/RivalsMechanics"),
		Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Characters_MagixCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Characters_MagixCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
