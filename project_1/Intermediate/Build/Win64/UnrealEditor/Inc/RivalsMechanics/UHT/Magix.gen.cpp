// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RivalsMechanics/Public/Interfaces/Magix.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMagix() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	RIVALSMECHANICS_API UClass* Z_Construct_UClass_UMagix();
	RIVALSMECHANICS_API UClass* Z_Construct_UClass_UMagix_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RivalsMechanics();
// End Cross Module References
	void UMagix::StaticRegisterNativesUMagix()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMagix);
	UClass* Z_Construct_UClass_UMagix_NoRegister()
	{
		return UMagix::StaticClass();
	}
	struct Z_Construct_UClass_UMagix_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMagix_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_RivalsMechanics,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMagix_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMagix_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/Magix.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMagix_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IMagix>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMagix_Statics::ClassParams = {
		&UMagix::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMagix_Statics::Class_MetaDataParams), Z_Construct_UClass_UMagix_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMagix()
	{
		if (!Z_Registration_Info_UClass_UMagix.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMagix.OuterSingleton, Z_Construct_UClass_UMagix_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMagix.OuterSingleton;
	}
	template<> RIVALSMECHANICS_API UClass* StaticClass<UMagix>()
	{
		return UMagix::StaticClass();
	}
	UMagix::UMagix(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMagix);
	UMagix::~UMagix() {}
	struct Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Interfaces_Magix_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Interfaces_Magix_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMagix, UMagix::StaticClass, TEXT("UMagix"), &Z_Registration_Info_UClass_UMagix, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMagix), 282041939U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Interfaces_Magix_h_3510519284(TEXT("/Script/RivalsMechanics"),
		Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Interfaces_Magix_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Interfaces_Magix_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
