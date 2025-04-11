// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RivalsMechanics/Public/Animations/ToggleTraceNotifyState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeToggleTraceNotifyState() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
	RIVALSMECHANICS_API UClass* Z_Construct_UClass_UToggleTraceNotifyState();
	RIVALSMECHANICS_API UClass* Z_Construct_UClass_UToggleTraceNotifyState_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RivalsMechanics();
// End Cross Module References
	void UToggleTraceNotifyState::StaticRegisterNativesUToggleTraceNotifyState()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UToggleTraceNotifyState);
	UClass* Z_Construct_UClass_UToggleTraceNotifyState_NoRegister()
	{
		return UToggleTraceNotifyState::StaticClass();
	}
	struct Z_Construct_UClass_UToggleTraceNotifyState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UToggleTraceNotifyState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
		(UObject* (*)())Z_Construct_UPackage__Script_RivalsMechanics,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UToggleTraceNotifyState_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UToggleTraceNotifyState_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Object" },
		{ "IncludePath", "Animations/ToggleTraceNotifyState.h" },
		{ "ModuleRelativePath", "Public/Animations/ToggleTraceNotifyState.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UToggleTraceNotifyState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UToggleTraceNotifyState>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UToggleTraceNotifyState_Statics::ClassParams = {
		&UToggleTraceNotifyState::StaticClass,
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
		0x001130A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UToggleTraceNotifyState_Statics::Class_MetaDataParams), Z_Construct_UClass_UToggleTraceNotifyState_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UToggleTraceNotifyState()
	{
		if (!Z_Registration_Info_UClass_UToggleTraceNotifyState.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UToggleTraceNotifyState.OuterSingleton, Z_Construct_UClass_UToggleTraceNotifyState_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UToggleTraceNotifyState.OuterSingleton;
	}
	template<> RIVALSMECHANICS_API UClass* StaticClass<UToggleTraceNotifyState>()
	{
		return UToggleTraceNotifyState::StaticClass();
	}
	UToggleTraceNotifyState::UToggleTraceNotifyState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UToggleTraceNotifyState);
	UToggleTraceNotifyState::~UToggleTraceNotifyState() {}
	struct Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Animations_ToggleTraceNotifyState_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Animations_ToggleTraceNotifyState_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UToggleTraceNotifyState, UToggleTraceNotifyState::StaticClass, TEXT("UToggleTraceNotifyState"), &Z_Registration_Info_UClass_UToggleTraceNotifyState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UToggleTraceNotifyState), 3604978792U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Animations_ToggleTraceNotifyState_h_4189195385(TEXT("/Script/RivalsMechanics"),
		Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Animations_ToggleTraceNotifyState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Animations_ToggleTraceNotifyState_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
