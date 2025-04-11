// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RivalsMechanics/Public/Character/StatsComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStatsComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	RIVALSMECHANICS_API UClass* Z_Construct_UClass_UStatsComponent();
	RIVALSMECHANICS_API UClass* Z_Construct_UClass_UStatsComponent_NoRegister();
	RIVALSMECHANICS_API UEnum* Z_Construct_UEnum_RivalsMechanics_EStat();
	UPackage* Z_Construct_UPackage__Script_RivalsMechanics();
// End Cross Module References
	DEFINE_FUNCTION(UStatsComponent::execEnableRegeneration)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnableRegeneration();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStatsComponent::execRegenrateStamina)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RegenrateStamina();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStatsComponent::execReduceHealth)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DamageValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReduceHealth(Z_Param_DamageValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStatsComponent::execReduceStamina)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Amount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReduceStamina(Z_Param_Amount);
		P_NATIVE_END;
	}
	void UStatsComponent::StaticRegisterNativesUStatsComponent()
	{
		UClass* Class = UStatsComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EnableRegeneration", &UStatsComponent::execEnableRegeneration },
			{ "ReduceHealth", &UStatsComponent::execReduceHealth },
			{ "ReduceStamina", &UStatsComponent::execReduceStamina },
			{ "RegenrateStamina", &UStatsComponent::execRegenrateStamina },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UStatsComponent_EnableRegeneration_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStatsComponent_EnableRegeneration_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/StatsComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatsComponent_EnableRegeneration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatsComponent, nullptr, "EnableRegeneration", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_EnableRegeneration_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatsComponent_EnableRegeneration_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UStatsComponent_EnableRegeneration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatsComponent_EnableRegeneration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStatsComponent_ReduceHealth_Statics
	{
		struct StatsComponent_eventReduceHealth_Parms
		{
			float DamageValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStatsComponent_ReduceHealth_Statics::NewProp_DamageValue = { "DamageValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatsComponent_eventReduceHealth_Parms, DamageValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatsComponent_ReduceHealth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsComponent_ReduceHealth_Statics::NewProp_DamageValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStatsComponent_ReduceHealth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/StatsComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatsComponent_ReduceHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatsComponent, nullptr, "ReduceHealth", nullptr, nullptr, Z_Construct_UFunction_UStatsComponent_ReduceHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_ReduceHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStatsComponent_ReduceHealth_Statics::StatsComponent_eventReduceHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_ReduceHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatsComponent_ReduceHealth_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_ReduceHealth_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UStatsComponent_ReduceHealth_Statics::StatsComponent_eventReduceHealth_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UStatsComponent_ReduceHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatsComponent_ReduceHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStatsComponent_ReduceStamina_Statics
	{
		struct StatsComponent_eventReduceStamina_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStatsComponent_ReduceStamina_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatsComponent_eventReduceStamina_Parms, Amount), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatsComponent_ReduceStamina_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsComponent_ReduceStamina_Statics::NewProp_Amount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStatsComponent_ReduceStamina_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/StatsComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatsComponent_ReduceStamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatsComponent, nullptr, "ReduceStamina", nullptr, nullptr, Z_Construct_UFunction_UStatsComponent_ReduceStamina_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_ReduceStamina_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStatsComponent_ReduceStamina_Statics::StatsComponent_eventReduceStamina_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_ReduceStamina_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatsComponent_ReduceStamina_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_ReduceStamina_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UStatsComponent_ReduceStamina_Statics::StatsComponent_eventReduceStamina_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UStatsComponent_ReduceStamina()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatsComponent_ReduceStamina_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStatsComponent_RegenrateStamina_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStatsComponent_RegenrateStamina_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/StatsComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatsComponent_RegenrateStamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatsComponent, nullptr, "RegenrateStamina", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_RegenrateStamina_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatsComponent_RegenrateStamina_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UStatsComponent_RegenrateStamina()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatsComponent_RegenrateStamina_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStatsComponent);
	UClass* Z_Construct_UClass_UStatsComponent_NoRegister()
	{
		return UStatsComponent::StaticClass();
	}
	struct Z_Construct_UClass_UStatsComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaminaRegeneRate_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_StaminaRegeneRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanRegen_MetaData[];
#endif
		static void NewProp_bCanRegen_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanRegen;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaminaDelayDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StaminaDelayDuration;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Stats_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Stats_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Stats_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Stats;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStatsComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_RivalsMechanics,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStatsComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UStatsComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UStatsComponent_EnableRegeneration, "EnableRegeneration" }, // 1987490651
		{ &Z_Construct_UFunction_UStatsComponent_ReduceHealth, "ReduceHealth" }, // 312510993
		{ &Z_Construct_UFunction_UStatsComponent_ReduceStamina, "ReduceStamina" }, // 3818974645
		{ &Z_Construct_UFunction_UStatsComponent_RegenrateStamina, "RegenrateStamina" }, // 1987726534
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStatsComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStatsComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Character/StatsComponent.h" },
		{ "ModuleRelativePath", "Public/Character/StatsComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStatsComponent_Statics::NewProp_StaminaRegeneRate_MetaData[] = {
		{ "Category", "StatsComponent" },
		{ "ModuleRelativePath", "Public/Character/StatsComponent.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UStatsComponent_Statics::NewProp_StaminaRegeneRate = { "StaminaRegeneRate", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatsComponent, StaminaRegeneRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStatsComponent_Statics::NewProp_StaminaRegeneRate_MetaData), Z_Construct_UClass_UStatsComponent_Statics::NewProp_StaminaRegeneRate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStatsComponent_Statics::NewProp_bCanRegen_MetaData[] = {
		{ "Category", "StatsComponent" },
		{ "ModuleRelativePath", "Public/Character/StatsComponent.h" },
	};
#endif
	void Z_Construct_UClass_UStatsComponent_Statics::NewProp_bCanRegen_SetBit(void* Obj)
	{
		((UStatsComponent*)Obj)->bCanRegen = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStatsComponent_Statics::NewProp_bCanRegen = { "bCanRegen", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UStatsComponent), &Z_Construct_UClass_UStatsComponent_Statics::NewProp_bCanRegen_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStatsComponent_Statics::NewProp_bCanRegen_MetaData), Z_Construct_UClass_UStatsComponent_Statics::NewProp_bCanRegen_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStatsComponent_Statics::NewProp_StaminaDelayDuration_MetaData[] = {
		{ "Category", "StatsComponent" },
		{ "ModuleRelativePath", "Public/Character/StatsComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStatsComponent_Statics::NewProp_StaminaDelayDuration = { "StaminaDelayDuration", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatsComponent, StaminaDelayDuration), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStatsComponent_Statics::NewProp_StaminaDelayDuration_MetaData), Z_Construct_UClass_UStatsComponent_Statics::NewProp_StaminaDelayDuration_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStatsComponent_Statics::NewProp_Stats_ValueProp = { "Stats", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UStatsComponent_Statics::NewProp_Stats_Key_KeyProp = { "Stats_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_RivalsMechanics_EStat, METADATA_PARAMS(0, nullptr) }; // 64255929
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStatsComponent_Statics::NewProp_Stats_MetaData[] = {
		{ "Category", "StatsComponent" },
		{ "ModuleRelativePath", "Public/Character/StatsComponent.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UStatsComponent_Statics::NewProp_Stats = { "Stats", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatsComponent, Stats), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStatsComponent_Statics::NewProp_Stats_MetaData), Z_Construct_UClass_UStatsComponent_Statics::NewProp_Stats_MetaData) }; // 64255929
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStatsComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsComponent_Statics::NewProp_StaminaRegeneRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsComponent_Statics::NewProp_bCanRegen,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsComponent_Statics::NewProp_StaminaDelayDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsComponent_Statics::NewProp_Stats_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsComponent_Statics::NewProp_Stats_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsComponent_Statics::NewProp_Stats,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStatsComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStatsComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UStatsComponent_Statics::ClassParams = {
		&UStatsComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UStatsComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UStatsComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStatsComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UStatsComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStatsComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UStatsComponent()
	{
		if (!Z_Registration_Info_UClass_UStatsComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStatsComponent.OuterSingleton, Z_Construct_UClass_UStatsComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UStatsComponent.OuterSingleton;
	}
	template<> RIVALSMECHANICS_API UClass* StaticClass<UStatsComponent>()
	{
		return UStatsComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStatsComponent);
	UStatsComponent::~UStatsComponent() {}
	struct Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Character_StatsComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Character_StatsComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UStatsComponent, UStatsComponent::StaticClass, TEXT("UStatsComponent"), &Z_Registration_Info_UClass_UStatsComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStatsComponent), 1281353748U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Character_StatsComponent_h_2388800459(TEXT("/Script/RivalsMechanics"),
		Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Character_StatsComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Character_StatsComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
