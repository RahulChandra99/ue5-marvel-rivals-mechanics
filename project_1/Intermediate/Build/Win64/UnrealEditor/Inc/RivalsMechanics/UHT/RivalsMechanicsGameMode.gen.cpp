// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RivalsMechanics/RivalsMechanicsGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRivalsMechanicsGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	RIVALSMECHANICS_API UClass* Z_Construct_UClass_ARivalsMechanicsGameMode();
	RIVALSMECHANICS_API UClass* Z_Construct_UClass_ARivalsMechanicsGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RivalsMechanics();
// End Cross Module References
	void ARivalsMechanicsGameMode::StaticRegisterNativesARivalsMechanicsGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARivalsMechanicsGameMode);
	UClass* Z_Construct_UClass_ARivalsMechanicsGameMode_NoRegister()
	{
		return ARivalsMechanicsGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ARivalsMechanicsGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARivalsMechanicsGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_RivalsMechanics,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARivalsMechanicsGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARivalsMechanicsGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "RivalsMechanicsGameMode.h" },
		{ "ModuleRelativePath", "RivalsMechanicsGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARivalsMechanicsGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARivalsMechanicsGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARivalsMechanicsGameMode_Statics::ClassParams = {
		&ARivalsMechanicsGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARivalsMechanicsGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ARivalsMechanicsGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ARivalsMechanicsGameMode()
	{
		if (!Z_Registration_Info_UClass_ARivalsMechanicsGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARivalsMechanicsGameMode.OuterSingleton, Z_Construct_UClass_ARivalsMechanicsGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARivalsMechanicsGameMode.OuterSingleton;
	}
	template<> RIVALSMECHANICS_API UClass* StaticClass<ARivalsMechanicsGameMode>()
	{
		return ARivalsMechanicsGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARivalsMechanicsGameMode);
	ARivalsMechanicsGameMode::~ARivalsMechanicsGameMode() {}
	struct Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_RivalsMechanicsGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_RivalsMechanicsGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARivalsMechanicsGameMode, ARivalsMechanicsGameMode::StaticClass, TEXT("ARivalsMechanicsGameMode"), &Z_Registration_Info_UClass_ARivalsMechanicsGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARivalsMechanicsGameMode), 111048659U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_RivalsMechanicsGameMode_h_2618899804(TEXT("/Script/RivalsMechanics"),
		Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_RivalsMechanicsGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_RivalsMechanicsGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
