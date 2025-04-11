// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RivalsMechanics/Public/RivalsPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRivalsPlayerController() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	RIVALSMECHANICS_API UClass* Z_Construct_UClass_ARivalsPlayerController();
	RIVALSMECHANICS_API UClass* Z_Construct_UClass_ARivalsPlayerController_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RivalsMechanics();
// End Cross Module References
	void ARivalsPlayerController::StaticRegisterNativesARivalsPlayerController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARivalsPlayerController);
	UClass* Z_Construct_UClass_ARivalsPlayerController_NoRegister()
	{
		return ARivalsPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ARivalsPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_WidgetClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WidgetInstance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARivalsPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_RivalsMechanics,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARivalsPlayerController_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARivalsPlayerController_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "RivalsPlayerController.h" },
		{ "ModuleRelativePath", "Public/RivalsPlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARivalsPlayerController_Statics::NewProp_WidgetClass_MetaData[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Widget class reference (set in the Editor or Blueprint)\n" },
#endif
		{ "ModuleRelativePath", "Public/RivalsPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Widget class reference (set in the Editor or Blueprint)" },
#endif
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ARivalsPlayerController_Statics::NewProp_WidgetClass = { "WidgetClass", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARivalsPlayerController, WidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARivalsPlayerController_Statics::NewProp_WidgetClass_MetaData), Z_Construct_UClass_ARivalsPlayerController_Statics::NewProp_WidgetClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARivalsPlayerController_Statics::NewProp_WidgetInstance_MetaData[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Widget instance\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RivalsPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Widget instance" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARivalsPlayerController_Statics::NewProp_WidgetInstance = { "WidgetInstance", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARivalsPlayerController, WidgetInstance), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARivalsPlayerController_Statics::NewProp_WidgetInstance_MetaData), Z_Construct_UClass_ARivalsPlayerController_Statics::NewProp_WidgetInstance_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARivalsPlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARivalsPlayerController_Statics::NewProp_WidgetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARivalsPlayerController_Statics::NewProp_WidgetInstance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARivalsPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARivalsPlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARivalsPlayerController_Statics::ClassParams = {
		&ARivalsPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ARivalsPlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ARivalsPlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARivalsPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ARivalsPlayerController_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARivalsPlayerController_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ARivalsPlayerController()
	{
		if (!Z_Registration_Info_UClass_ARivalsPlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARivalsPlayerController.OuterSingleton, Z_Construct_UClass_ARivalsPlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARivalsPlayerController.OuterSingleton;
	}
	template<> RIVALSMECHANICS_API UClass* StaticClass<ARivalsPlayerController>()
	{
		return ARivalsPlayerController::StaticClass();
	}
	ARivalsPlayerController::ARivalsPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARivalsPlayerController);
	ARivalsPlayerController::~ARivalsPlayerController() {}
	struct Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_RivalsPlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_RivalsPlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARivalsPlayerController, ARivalsPlayerController::StaticClass, TEXT("ARivalsPlayerController"), &Z_Registration_Info_UClass_ARivalsPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARivalsPlayerController), 3715397498U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_RivalsPlayerController_h_1434726684(TEXT("/Script/RivalsMechanics"),
		Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_RivalsPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_RivalsPlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
