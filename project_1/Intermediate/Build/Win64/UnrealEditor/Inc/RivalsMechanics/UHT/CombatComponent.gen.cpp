// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RivalsMechanics/Public/Combat/CombatComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombatComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	RIVALSMECHANICS_API UClass* Z_Construct_UClass_UCombatComponent();
	RIVALSMECHANICS_API UClass* Z_Construct_UClass_UCombatComponent_NoRegister();
	RIVALSMECHANICS_API UFunction* Z_Construct_USparseDelegateFunction_RivalsMechanics_OnAttackPerformedSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_RivalsMechanics();
// End Cross Module References
	struct Z_Construct_USparseDelegateFunction_RivalsMechanics_OnAttackPerformedSignature__DelegateSignature_Statics
	{
		struct _Script_RivalsMechanics_eventOnAttackPerformedSignature_Parms
		{
			float Amount;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Amount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_USparseDelegateFunction_RivalsMechanics_OnAttackPerformedSignature__DelegateSignature_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RivalsMechanics_eventOnAttackPerformedSignature_Parms, Amount), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_USparseDelegateFunction_RivalsMechanics_OnAttackPerformedSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_RivalsMechanics_OnAttackPerformedSignature__DelegateSignature_Statics::NewProp_Amount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_USparseDelegateFunction_RivalsMechanics_OnAttackPerformedSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Combat/CombatComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_USparseDelegateFunction_RivalsMechanics_OnAttackPerformedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RivalsMechanics, nullptr, "OnAttackPerformedSignature__DelegateSignature", "CombatComponent", "OnAttackPerformedDelegate", Z_Construct_USparseDelegateFunction_RivalsMechanics_OnAttackPerformedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_RivalsMechanics_OnAttackPerformedSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_USparseDelegateFunction_RivalsMechanics_OnAttackPerformedSignature__DelegateSignature_Statics::_Script_RivalsMechanics_eventOnAttackPerformedSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_RivalsMechanics_OnAttackPerformedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_USparseDelegateFunction_RivalsMechanics_OnAttackPerformedSignature__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_RivalsMechanics_OnAttackPerformedSignature__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_USparseDelegateFunction_RivalsMechanics_OnAttackPerformedSignature__DelegateSignature_Statics::_Script_RivalsMechanics_eventOnAttackPerformedSignature_Parms) < MAX_uint16);
	UFunction* Z_Construct_USparseDelegateFunction_RivalsMechanics_OnAttackPerformedSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_USparseDelegateFunction_RivalsMechanics_OnAttackPerformedSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnAttackPerformedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnAttackPerformedSignature, float Amount)
{
	struct _Script_RivalsMechanics_eventOnAttackPerformedSignature_Parms
	{
		float Amount;
	};
	_Script_RivalsMechanics_eventOnAttackPerformedSignature_Parms Parms;
	Parms.Amount=Amount;
	OnAttackPerformedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UCombatComponent::execHandleResetAttack)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleResetAttack();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCombatComponent::execComboAttack)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ComboAttack();
		P_NATIVE_END;
	}
	void UCombatComponent::StaticRegisterNativesUCombatComponent()
	{
		UClass* Class = UCombatComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ComboAttack", &UCombatComponent::execComboAttack },
			{ "HandleResetAttack", &UCombatComponent::execHandleResetAttack },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCombatComponent_ComboAttack_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCombatComponent_ComboAttack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Combat/CombatComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatComponent_ComboAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatComponent, nullptr, "ComboAttack", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_ComboAttack_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatComponent_ComboAttack_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UCombatComponent_ComboAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatComponent_ComboAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCombatComponent_HandleResetAttack_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCombatComponent_HandleResetAttack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Combat/CombatComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatComponent_HandleResetAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatComponent, nullptr, "HandleResetAttack", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_HandleResetAttack_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatComponent_HandleResetAttack_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UCombatComponent_HandleResetAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatComponent_HandleResetAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCombatComponent);
	UClass* Z_Construct_UClass_UCombatComponent_NoRegister()
	{
		return UCombatComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCombatComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComboCounter_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ComboCounter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanAttack_MetaData[];
#endif
		static void NewProp_bCanAttack_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanAttack;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackStaminaCost_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackStaminaCost;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnAttackPerformedDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAttackPerformedDelegate;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttackAnimations_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackAnimations_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AttackAnimations;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCombatComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_RivalsMechanics,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UCombatComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCombatComponent_ComboAttack, "ComboAttack" }, // 3058686588
		{ &Z_Construct_UFunction_UCombatComponent_HandleResetAttack, "HandleResetAttack" }, // 3137017983
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Combat/CombatComponent.h" },
		{ "ModuleRelativePath", "Public/Combat/CombatComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatComponent_Statics::NewProp_ComboCounter_MetaData[] = {
		{ "Category", "CombatComponent" },
		{ "ModuleRelativePath", "Public/Combat/CombatComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_ComboCounter = { "ComboCounter", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatComponent, ComboCounter), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatComponent_Statics::NewProp_ComboCounter_MetaData), Z_Construct_UClass_UCombatComponent_Statics::NewProp_ComboCounter_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatComponent_Statics::NewProp_bCanAttack_MetaData[] = {
		{ "Category", "CombatComponent" },
		{ "ModuleRelativePath", "Public/Combat/CombatComponent.h" },
	};
#endif
	void Z_Construct_UClass_UCombatComponent_Statics::NewProp_bCanAttack_SetBit(void* Obj)
	{
		((UCombatComponent*)Obj)->bCanAttack = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_bCanAttack = { "bCanAttack", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCombatComponent), &Z_Construct_UClass_UCombatComponent_Statics::NewProp_bCanAttack_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatComponent_Statics::NewProp_bCanAttack_MetaData), Z_Construct_UClass_UCombatComponent_Statics::NewProp_bCanAttack_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatComponent_Statics::NewProp_AttackStaminaCost_MetaData[] = {
		{ "Category", "CombatComponent" },
		{ "ModuleRelativePath", "Public/Combat/CombatComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_AttackStaminaCost = { "AttackStaminaCost", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatComponent, AttackStaminaCost), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatComponent_Statics::NewProp_AttackStaminaCost_MetaData), Z_Construct_UClass_UCombatComponent_Statics::NewProp_AttackStaminaCost_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatComponent_Statics::NewProp_OnAttackPerformedDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/Combat/CombatComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_OnAttackPerformedDelegate = { "OnAttackPerformedDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::SparseMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatComponent, OnAttackPerformedDelegate), Z_Construct_USparseDelegateFunction_RivalsMechanics_OnAttackPerformedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatComponent_Statics::NewProp_OnAttackPerformedDelegate_MetaData), Z_Construct_UClass_UCombatComponent_Statics::NewProp_OnAttackPerformedDelegate_MetaData) }; // 2644555793
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_AttackAnimations_Inner = { "AttackAnimations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatComponent_Statics::NewProp_AttackAnimations_MetaData[] = {
		{ "Category", "CombatComponent" },
		{ "ModuleRelativePath", "Public/Combat/CombatComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_AttackAnimations = { "AttackAnimations", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatComponent, AttackAnimations), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatComponent_Statics::NewProp_AttackAnimations_MetaData), Z_Construct_UClass_UCombatComponent_Statics::NewProp_AttackAnimations_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCombatComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_ComboCounter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_bCanAttack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_AttackStaminaCost,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_OnAttackPerformedDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_AttackAnimations_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_AttackAnimations,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCombatComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCombatComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCombatComponent_Statics::ClassParams = {
		&UCombatComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCombatComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCombatComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UCombatComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UCombatComponent()
	{
		if (!Z_Registration_Info_UClass_UCombatComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCombatComponent.OuterSingleton, Z_Construct_UClass_UCombatComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCombatComponent.OuterSingleton;
	}
	template<> RIVALSMECHANICS_API UClass* StaticClass<UCombatComponent>()
	{
		return UCombatComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCombatComponent);
	UCombatComponent::~UCombatComponent() {}
	struct Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Combat_CombatComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Combat_CombatComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCombatComponent, UCombatComponent::StaticClass, TEXT("UCombatComponent"), &Z_Registration_Info_UClass_UCombatComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombatComponent), 2495381973U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Combat_CombatComponent_h_2124593971(TEXT("/Script/RivalsMechanics"),
		Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Combat_CombatComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Combat_CombatComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
