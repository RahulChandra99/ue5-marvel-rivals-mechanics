// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RivalsMechanics/Public/RobotActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRobotActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	RIVALSMECHANICS_API UClass* Z_Construct_UClass_ARobotActor();
	RIVALSMECHANICS_API UClass* Z_Construct_UClass_ARobotActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RivalsMechanics();
// End Cross Module References
	void ARobotActor::StaticRegisterNativesARobotActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARobotActor);
	UClass* Z_Construct_UClass_ARobotActor_NoRegister()
	{
		return ARobotActor::StaticClass();
	}
	struct Z_Construct_UClass_ARobotActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CapsuleComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CapsuleComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RootComp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARobotActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_RivalsMechanics,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARobotActor_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARobotActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RobotActor.h" },
		{ "ModuleRelativePath", "Public/RobotActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARobotActor_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "RobotActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RobotActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARobotActor_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARobotActor, Mesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARobotActor_Statics::NewProp_Mesh_MetaData), Z_Construct_UClass_ARobotActor_Statics::NewProp_Mesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARobotActor_Statics::NewProp_CapsuleComp_MetaData[] = {
		{ "Category", "RobotActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RobotActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARobotActor_Statics::NewProp_CapsuleComp = { "CapsuleComp", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARobotActor, CapsuleComp), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARobotActor_Statics::NewProp_CapsuleComp_MetaData), Z_Construct_UClass_ARobotActor_Statics::NewProp_CapsuleComp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARobotActor_Statics::NewProp_RootComp_MetaData[] = {
		{ "Category", "RobotActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RobotActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARobotActor_Statics::NewProp_RootComp = { "RootComp", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARobotActor, RootComp), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARobotActor_Statics::NewProp_RootComp_MetaData), Z_Construct_UClass_ARobotActor_Statics::NewProp_RootComp_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARobotActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARobotActor_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARobotActor_Statics::NewProp_CapsuleComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARobotActor_Statics::NewProp_RootComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARobotActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARobotActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARobotActor_Statics::ClassParams = {
		&ARobotActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ARobotActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ARobotActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARobotActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ARobotActor_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARobotActor_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ARobotActor()
	{
		if (!Z_Registration_Info_UClass_ARobotActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARobotActor.OuterSingleton, Z_Construct_UClass_ARobotActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARobotActor.OuterSingleton;
	}
	template<> RIVALSMECHANICS_API UClass* StaticClass<ARobotActor>()
	{
		return ARobotActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARobotActor);
	ARobotActor::~ARobotActor() {}
	struct Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_RobotActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_RobotActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARobotActor, ARobotActor::StaticClass, TEXT("ARobotActor"), &Z_Registration_Info_UClass_ARobotActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARobotActor), 1280915767U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_RobotActor_h_1662997226(TEXT("/Script/RivalsMechanics"),
		Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_RobotActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_RobotActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
