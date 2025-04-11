// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RivalsMechanics/Public/Combat/TraceComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTraceComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	RIVALSMECHANICS_API UClass* Z_Construct_UClass_UTraceComponent();
	RIVALSMECHANICS_API UClass* Z_Construct_UClass_UTraceComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RivalsMechanics();
// End Cross Module References
	DEFINE_FUNCTION(UTraceComponent::execHandleResetAttack)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleResetAttack();
		P_NATIVE_END;
	}
	void UTraceComponent::StaticRegisterNativesUTraceComponent()
	{
		UClass* Class = UTraceComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleResetAttack", &UTraceComponent::execHandleResetAttack },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTraceComponent_HandleResetAttack_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTraceComponent_HandleResetAttack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Combat/TraceComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTraceComponent_HandleResetAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTraceComponent, nullptr, "HandleResetAttack", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTraceComponent_HandleResetAttack_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTraceComponent_HandleResetAttack_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UTraceComponent_HandleResetAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTraceComponent_HandleResetAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTraceComponent);
	UClass* Z_Construct_UClass_UTraceComponent_NoRegister()
	{
		return UTraceComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTraceComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartSocketName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_StartSocketName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndSocketName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_EndSocketName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_RotationName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoxWidth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BoxWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoxHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BoxHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDebugMode_MetaData[];
#endif
		static void NewProp_bDebugMode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebugMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsAttacking_MetaData[];
#endif
		static void NewProp_bIsAttacking_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAttacking;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTraceComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_RivalsMechanics,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTraceComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UTraceComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTraceComponent_HandleResetAttack, "HandleResetAttack" }, // 2859405710
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTraceComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTraceComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Combat/TraceComponent.h" },
		{ "ModuleRelativePath", "Public/Combat/TraceComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTraceComponent_Statics::NewProp_SkeletalComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Combat/TraceComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTraceComponent_Statics::NewProp_SkeletalComp = { "SkeletalComp", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTraceComponent, SkeletalComp), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTraceComponent_Statics::NewProp_SkeletalComp_MetaData), Z_Construct_UClass_UTraceComponent_Statics::NewProp_SkeletalComp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTraceComponent_Statics::NewProp_StartSocketName_MetaData[] = {
		{ "Category", "TraceComponent" },
		{ "ModuleRelativePath", "Public/Combat/TraceComponent.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UTraceComponent_Statics::NewProp_StartSocketName = { "StartSocketName", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTraceComponent, StartSocketName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTraceComponent_Statics::NewProp_StartSocketName_MetaData), Z_Construct_UClass_UTraceComponent_Statics::NewProp_StartSocketName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTraceComponent_Statics::NewProp_EndSocketName_MetaData[] = {
		{ "Category", "TraceComponent" },
		{ "ModuleRelativePath", "Public/Combat/TraceComponent.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UTraceComponent_Statics::NewProp_EndSocketName = { "EndSocketName", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTraceComponent, EndSocketName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTraceComponent_Statics::NewProp_EndSocketName_MetaData), Z_Construct_UClass_UTraceComponent_Statics::NewProp_EndSocketName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTraceComponent_Statics::NewProp_RotationName_MetaData[] = {
		{ "Category", "TraceComponent" },
		{ "ModuleRelativePath", "Public/Combat/TraceComponent.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UTraceComponent_Statics::NewProp_RotationName = { "RotationName", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTraceComponent, RotationName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTraceComponent_Statics::NewProp_RotationName_MetaData), Z_Construct_UClass_UTraceComponent_Statics::NewProp_RotationName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTraceComponent_Statics::NewProp_BoxWidth_MetaData[] = {
		{ "Category", "TraceComponent" },
		{ "ModuleRelativePath", "Public/Combat/TraceComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTraceComponent_Statics::NewProp_BoxWidth = { "BoxWidth", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTraceComponent, BoxWidth), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTraceComponent_Statics::NewProp_BoxWidth_MetaData), Z_Construct_UClass_UTraceComponent_Statics::NewProp_BoxWidth_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTraceComponent_Statics::NewProp_BoxHeight_MetaData[] = {
		{ "Category", "TraceComponent" },
		{ "ModuleRelativePath", "Public/Combat/TraceComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTraceComponent_Statics::NewProp_BoxHeight = { "BoxHeight", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTraceComponent, BoxHeight), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTraceComponent_Statics::NewProp_BoxHeight_MetaData), Z_Construct_UClass_UTraceComponent_Statics::NewProp_BoxHeight_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTraceComponent_Statics::NewProp_bDebugMode_MetaData[] = {
		{ "Category", "TraceComponent" },
		{ "ModuleRelativePath", "Public/Combat/TraceComponent.h" },
	};
#endif
	void Z_Construct_UClass_UTraceComponent_Statics::NewProp_bDebugMode_SetBit(void* Obj)
	{
		((UTraceComponent*)Obj)->bDebugMode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTraceComponent_Statics::NewProp_bDebugMode = { "bDebugMode", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTraceComponent), &Z_Construct_UClass_UTraceComponent_Statics::NewProp_bDebugMode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTraceComponent_Statics::NewProp_bDebugMode_MetaData), Z_Construct_UClass_UTraceComponent_Statics::NewProp_bDebugMode_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTraceComponent_Statics::NewProp_bIsAttacking_MetaData[] = {
		{ "Category", "TraceComponent" },
		{ "ModuleRelativePath", "Public/Combat/TraceComponent.h" },
	};
#endif
	void Z_Construct_UClass_UTraceComponent_Statics::NewProp_bIsAttacking_SetBit(void* Obj)
	{
		((UTraceComponent*)Obj)->bIsAttacking = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTraceComponent_Statics::NewProp_bIsAttacking = { "bIsAttacking", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTraceComponent), &Z_Construct_UClass_UTraceComponent_Statics::NewProp_bIsAttacking_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTraceComponent_Statics::NewProp_bIsAttacking_MetaData), Z_Construct_UClass_UTraceComponent_Statics::NewProp_bIsAttacking_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTraceComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTraceComponent_Statics::NewProp_SkeletalComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTraceComponent_Statics::NewProp_StartSocketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTraceComponent_Statics::NewProp_EndSocketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTraceComponent_Statics::NewProp_RotationName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTraceComponent_Statics::NewProp_BoxWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTraceComponent_Statics::NewProp_BoxHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTraceComponent_Statics::NewProp_bDebugMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTraceComponent_Statics::NewProp_bIsAttacking,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTraceComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTraceComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTraceComponent_Statics::ClassParams = {
		&UTraceComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTraceComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTraceComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTraceComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UTraceComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTraceComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UTraceComponent()
	{
		if (!Z_Registration_Info_UClass_UTraceComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTraceComponent.OuterSingleton, Z_Construct_UClass_UTraceComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTraceComponent.OuterSingleton;
	}
	template<> RIVALSMECHANICS_API UClass* StaticClass<UTraceComponent>()
	{
		return UTraceComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTraceComponent);
	UTraceComponent::~UTraceComponent() {}
	struct Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Combat_TraceComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Combat_TraceComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTraceComponent, UTraceComponent::StaticClass, TEXT("UTraceComponent"), &Z_Registration_Info_UClass_UTraceComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTraceComponent), 3820334035U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Combat_TraceComponent_h_9052858(TEXT("/Script/RivalsMechanics"),
		Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Combat_TraceComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Combat_TraceComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
