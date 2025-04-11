// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RivalsMechanics/Public/Interfaces/Fighter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFighter() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	RIVALSMECHANICS_API UClass* Z_Construct_UClass_UFighter();
	RIVALSMECHANICS_API UClass* Z_Construct_UClass_UFighter_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RivalsMechanics();
// End Cross Module References
	void UFighter::StaticRegisterNativesUFighter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFighter);
	UClass* Z_Construct_UClass_UFighter_NoRegister()
	{
		return UFighter::StaticClass();
	}
	struct Z_Construct_UClass_UFighter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFighter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_RivalsMechanics,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFighter_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFighter_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/Fighter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFighter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IFighter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFighter_Statics::ClassParams = {
		&UFighter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFighter_Statics::Class_MetaDataParams), Z_Construct_UClass_UFighter_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UFighter()
	{
		if (!Z_Registration_Info_UClass_UFighter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFighter.OuterSingleton, Z_Construct_UClass_UFighter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFighter.OuterSingleton;
	}
	template<> RIVALSMECHANICS_API UClass* StaticClass<UFighter>()
	{
		return UFighter::StaticClass();
	}
	UFighter::UFighter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFighter);
	UFighter::~UFighter() {}
	struct Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Interfaces_Fighter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Interfaces_Fighter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFighter, UFighter::StaticClass, TEXT("UFighter"), &Z_Registration_Info_UClass_UFighter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFighter), 1655829353U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Interfaces_Fighter_h_2139435720(TEXT("/Script/RivalsMechanics"),
		Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Interfaces_Fighter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Interfaces_Fighter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
