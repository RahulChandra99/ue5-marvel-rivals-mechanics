// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RivalsMechanics/Public/Combat/LockOnComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLockOnComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	RIVALSMECHANICS_API UClass* Z_Construct_UClass_ULockOnComponent();
	RIVALSMECHANICS_API UClass* Z_Construct_UClass_ULockOnComponent_NoRegister();
	RIVALSMECHANICS_API UFunction* Z_Construct_USparseDelegateFunction_RivalsMechanics_OnUpdatedTargetSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_RivalsMechanics();
// End Cross Module References
	struct Z_Construct_USparseDelegateFunction_RivalsMechanics_OnUpdatedTargetSignature__DelegateSignature_Statics
	{
		struct _Script_RivalsMechanics_eventOnUpdatedTargetSignature_Parms
		{
			AActor* NewTargetActorRef;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewTargetActorRef;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_USparseDelegateFunction_RivalsMechanics_OnUpdatedTargetSignature__DelegateSignature_Statics::NewProp_NewTargetActorRef = { "NewTargetActorRef", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RivalsMechanics_eventOnUpdatedTargetSignature_Parms, NewTargetActorRef), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_USparseDelegateFunction_RivalsMechanics_OnUpdatedTargetSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_RivalsMechanics_OnUpdatedTargetSignature__DelegateSignature_Statics::NewProp_NewTargetActorRef,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_USparseDelegateFunction_RivalsMechanics_OnUpdatedTargetSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Combat/LockOnComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_USparseDelegateFunction_RivalsMechanics_OnUpdatedTargetSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RivalsMechanics, nullptr, "OnUpdatedTargetSignature__DelegateSignature", "LockOnComponent", "OnUpdatedTargetDelegate", Z_Construct_USparseDelegateFunction_RivalsMechanics_OnUpdatedTargetSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_RivalsMechanics_OnUpdatedTargetSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_USparseDelegateFunction_RivalsMechanics_OnUpdatedTargetSignature__DelegateSignature_Statics::_Script_RivalsMechanics_eventOnUpdatedTargetSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_RivalsMechanics_OnUpdatedTargetSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_USparseDelegateFunction_RivalsMechanics_OnUpdatedTargetSignature__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_RivalsMechanics_OnUpdatedTargetSignature__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_USparseDelegateFunction_RivalsMechanics_OnUpdatedTargetSignature__DelegateSignature_Statics::_Script_RivalsMechanics_eventOnUpdatedTargetSignature_Parms) < MAX_uint16);
	UFunction* Z_Construct_USparseDelegateFunction_RivalsMechanics_OnUpdatedTargetSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_USparseDelegateFunction_RivalsMechanics_OnUpdatedTargetSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnUpdatedTargetSignature_DelegateWrapper(const FMulticastScriptDelegate& OnUpdatedTargetSignature, AActor* NewTargetActorRef)
{
	struct _Script_RivalsMechanics_eventOnUpdatedTargetSignature_Parms
	{
		AActor* NewTargetActorRef;
	};
	_Script_RivalsMechanics_eventOnUpdatedTargetSignature_Parms Parms;
	Parms.NewTargetActorRef=NewTargetActorRef;
	OnUpdatedTargetSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(ULockOnComponent::execToggleLockOn)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToggleLockOn(Z_Param_Radius);
		P_NATIVE_END;
	}
	void ULockOnComponent::StaticRegisterNativesULockOnComponent()
	{
		UClass* Class = ULockOnComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ToggleLockOn", &ULockOnComponent::execToggleLockOn },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULockOnComponent_ToggleLockOn_Statics
	{
		struct LockOnComponent_eventToggleLockOn_Parms
		{
			float Radius;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULockOnComponent_ToggleLockOn_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LockOnComponent_eventToggleLockOn_Parms, Radius), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULockOnComponent_ToggleLockOn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULockOnComponent_ToggleLockOn_Statics::NewProp_Radius,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULockOnComponent_ToggleLockOn_Statics::Function_MetaDataParams[] = {
		{ "CPP_Default_Radius", "750.000000" },
		{ "ModuleRelativePath", "Public/Combat/LockOnComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULockOnComponent_ToggleLockOn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULockOnComponent, nullptr, "ToggleLockOn", nullptr, nullptr, Z_Construct_UFunction_ULockOnComponent_ToggleLockOn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULockOnComponent_ToggleLockOn_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULockOnComponent_ToggleLockOn_Statics::LockOnComponent_eventToggleLockOn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULockOnComponent_ToggleLockOn_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULockOnComponent_ToggleLockOn_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULockOnComponent_ToggleLockOn_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULockOnComponent_ToggleLockOn_Statics::LockOnComponent_eventToggleLockOn_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULockOnComponent_ToggleLockOn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULockOnComponent_ToggleLockOn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULockOnComponent);
	UClass* Z_Construct_UClass_ULockOnComponent_NoRegister()
	{
		return ULockOnComponent::StaticClass();
	}
	struct Z_Construct_UClass_ULockOnComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwnerRef_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerRef;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Controller_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Controller;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MovementComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpringArmComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArmComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentTargetActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentTargetActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnUpdatedTargetDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnUpdatedTargetDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BreakDistance_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_BreakDistance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULockOnComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_RivalsMechanics,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULockOnComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ULockOnComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULockOnComponent_ToggleLockOn, "ToggleLockOn" }, // 2616609454
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULockOnComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULockOnComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Combat/LockOnComponent.h" },
		{ "ModuleRelativePath", "Public/Combat/LockOnComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULockOnComponent_Statics::NewProp_OwnerRef_MetaData[] = {
		{ "ModuleRelativePath", "Public/Combat/LockOnComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULockOnComponent_Statics::NewProp_OwnerRef = { "OwnerRef", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULockOnComponent, OwnerRef), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULockOnComponent_Statics::NewProp_OwnerRef_MetaData), Z_Construct_UClass_ULockOnComponent_Statics::NewProp_OwnerRef_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULockOnComponent_Statics::NewProp_Controller_MetaData[] = {
		{ "ModuleRelativePath", "Public/Combat/LockOnComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULockOnComponent_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULockOnComponent, Controller), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULockOnComponent_Statics::NewProp_Controller_MetaData), Z_Construct_UClass_ULockOnComponent_Statics::NewProp_Controller_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULockOnComponent_Statics::NewProp_MovementComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Combat/LockOnComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULockOnComponent_Statics::NewProp_MovementComp = { "MovementComp", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULockOnComponent, MovementComp), Z_Construct_UClass_UCharacterMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULockOnComponent_Statics::NewProp_MovementComp_MetaData), Z_Construct_UClass_ULockOnComponent_Statics::NewProp_MovementComp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULockOnComponent_Statics::NewProp_SpringArmComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Combat/LockOnComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULockOnComponent_Statics::NewProp_SpringArmComp = { "SpringArmComp", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULockOnComponent, SpringArmComp), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULockOnComponent_Statics::NewProp_SpringArmComp_MetaData), Z_Construct_UClass_ULockOnComponent_Statics::NewProp_SpringArmComp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULockOnComponent_Statics::NewProp_CurrentTargetActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/Combat/LockOnComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULockOnComponent_Statics::NewProp_CurrentTargetActor = { "CurrentTargetActor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULockOnComponent, CurrentTargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULockOnComponent_Statics::NewProp_CurrentTargetActor_MetaData), Z_Construct_UClass_ULockOnComponent_Statics::NewProp_CurrentTargetActor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULockOnComponent_Statics::NewProp_OnUpdatedTargetDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/Combat/LockOnComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULockOnComponent_Statics::NewProp_OnUpdatedTargetDelegate = { "OnUpdatedTargetDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::SparseMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULockOnComponent, OnUpdatedTargetDelegate), Z_Construct_USparseDelegateFunction_RivalsMechanics_OnUpdatedTargetSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULockOnComponent_Statics::NewProp_OnUpdatedTargetDelegate_MetaData), Z_Construct_UClass_ULockOnComponent_Statics::NewProp_OnUpdatedTargetDelegate_MetaData) }; // 3052426519
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULockOnComponent_Statics::NewProp_BreakDistance_MetaData[] = {
		{ "Category", "LockOnComponent" },
		{ "ModuleRelativePath", "Public/Combat/LockOnComponent.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_ULockOnComponent_Statics::NewProp_BreakDistance = { "BreakDistance", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULockOnComponent, BreakDistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULockOnComponent_Statics::NewProp_BreakDistance_MetaData), Z_Construct_UClass_ULockOnComponent_Statics::NewProp_BreakDistance_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULockOnComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULockOnComponent_Statics::NewProp_OwnerRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULockOnComponent_Statics::NewProp_Controller,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULockOnComponent_Statics::NewProp_MovementComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULockOnComponent_Statics::NewProp_SpringArmComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULockOnComponent_Statics::NewProp_CurrentTargetActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULockOnComponent_Statics::NewProp_OnUpdatedTargetDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULockOnComponent_Statics::NewProp_BreakDistance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULockOnComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULockOnComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULockOnComponent_Statics::ClassParams = {
		&ULockOnComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULockOnComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULockOnComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULockOnComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_ULockOnComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULockOnComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ULockOnComponent()
	{
		if (!Z_Registration_Info_UClass_ULockOnComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULockOnComponent.OuterSingleton, Z_Construct_UClass_ULockOnComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULockOnComponent.OuterSingleton;
	}
	template<> RIVALSMECHANICS_API UClass* StaticClass<ULockOnComponent>()
	{
		return ULockOnComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULockOnComponent);
	ULockOnComponent::~ULockOnComponent() {}
	struct Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Combat_LockOnComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Combat_LockOnComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULockOnComponent, ULockOnComponent::StaticClass, TEXT("ULockOnComponent"), &Z_Registration_Info_UClass_ULockOnComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULockOnComponent), 3801375868U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Combat_LockOnComponent_h_1696097852(TEXT("/Script/RivalsMechanics"),
		Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Combat_LockOnComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Combat_LockOnComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
