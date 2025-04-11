// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RivalsMechanics/Public/AI/RobotCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRobotCharacter() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	RIVALSMECHANICS_API UClass* Z_Construct_UClass_ARobotCharacter();
	RIVALSMECHANICS_API UClass* Z_Construct_UClass_ARobotCharacter_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RivalsMechanics();
// End Cross Module References
	DEFINE_FUNCTION(ARobotCharacter::execGetHealthPerc)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetHealthPerc();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARobotCharacter::execIsDead)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsDead();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARobotCharacter::execTakeDamageFromPlayer)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DamageAmount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TakeDamageFromPlayer(Z_Param_DamageAmount);
		P_NATIVE_END;
	}
	void ARobotCharacter::StaticRegisterNativesARobotCharacter()
	{
		UClass* Class = ARobotCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetHealthPerc", &ARobotCharacter::execGetHealthPerc },
			{ "IsDead", &ARobotCharacter::execIsDead },
			{ "TakeDamageFromPlayer", &ARobotCharacter::execTakeDamageFromPlayer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ARobotCharacter_GetHealthPerc_Statics
	{
		struct RobotCharacter_eventGetHealthPerc_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARobotCharacter_GetHealthPerc_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RobotCharacter_eventGetHealthPerc_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARobotCharacter_GetHealthPerc_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARobotCharacter_GetHealthPerc_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARobotCharacter_GetHealthPerc_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AI/RobotCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARobotCharacter_GetHealthPerc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARobotCharacter, nullptr, "GetHealthPerc", nullptr, nullptr, Z_Construct_UFunction_ARobotCharacter_GetHealthPerc_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARobotCharacter_GetHealthPerc_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARobotCharacter_GetHealthPerc_Statics::RobotCharacter_eventGetHealthPerc_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARobotCharacter_GetHealthPerc_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARobotCharacter_GetHealthPerc_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARobotCharacter_GetHealthPerc_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ARobotCharacter_GetHealthPerc_Statics::RobotCharacter_eventGetHealthPerc_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ARobotCharacter_GetHealthPerc()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARobotCharacter_GetHealthPerc_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARobotCharacter_IsDead_Statics
	{
		struct RobotCharacter_eventIsDead_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ARobotCharacter_IsDead_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RobotCharacter_eventIsDead_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARobotCharacter_IsDead_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RobotCharacter_eventIsDead_Parms), &Z_Construct_UFunction_ARobotCharacter_IsDead_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARobotCharacter_IsDead_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARobotCharacter_IsDead_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARobotCharacter_IsDead_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Check if AI is dead\n" },
#endif
		{ "ModuleRelativePath", "Public/AI/RobotCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Check if AI is dead" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARobotCharacter_IsDead_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARobotCharacter, nullptr, "IsDead", nullptr, nullptr, Z_Construct_UFunction_ARobotCharacter_IsDead_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARobotCharacter_IsDead_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARobotCharacter_IsDead_Statics::RobotCharacter_eventIsDead_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARobotCharacter_IsDead_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARobotCharacter_IsDead_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARobotCharacter_IsDead_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ARobotCharacter_IsDead_Statics::RobotCharacter_eventIsDead_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ARobotCharacter_IsDead()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARobotCharacter_IsDead_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARobotCharacter_TakeDamageFromPlayer_Statics
	{
		struct RobotCharacter_eventTakeDamageFromPlayer_Parms
		{
			float DamageAmount;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageAmount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARobotCharacter_TakeDamageFromPlayer_Statics::NewProp_DamageAmount = { "DamageAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RobotCharacter_eventTakeDamageFromPlayer_Parms, DamageAmount), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARobotCharacter_TakeDamageFromPlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARobotCharacter_TakeDamageFromPlayer_Statics::NewProp_DamageAmount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARobotCharacter_TakeDamageFromPlayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Function to apply damage to the AI\n" },
#endif
		{ "ModuleRelativePath", "Public/AI/RobotCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function to apply damage to the AI" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARobotCharacter_TakeDamageFromPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARobotCharacter, nullptr, "TakeDamageFromPlayer", nullptr, nullptr, Z_Construct_UFunction_ARobotCharacter_TakeDamageFromPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARobotCharacter_TakeDamageFromPlayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARobotCharacter_TakeDamageFromPlayer_Statics::RobotCharacter_eventTakeDamageFromPlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARobotCharacter_TakeDamageFromPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARobotCharacter_TakeDamageFromPlayer_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARobotCharacter_TakeDamageFromPlayer_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ARobotCharacter_TakeDamageFromPlayer_Statics::RobotCharacter_eventTakeDamageFromPlayer_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ARobotCharacter_TakeDamageFromPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARobotCharacter_TakeDamageFromPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARobotCharacter);
	UClass* Z_Construct_UClass_ARobotCharacter_NoRegister()
	{
		return ARobotCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ARobotCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeathMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DeathMontage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Health;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARobotCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_RivalsMechanics,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARobotCharacter_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ARobotCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ARobotCharacter_GetHealthPerc, "GetHealthPerc" }, // 248422393
		{ &Z_Construct_UFunction_ARobotCharacter_IsDead, "IsDead" }, // 3706840423
		{ &Z_Construct_UFunction_ARobotCharacter_TakeDamageFromPlayer, "TakeDamageFromPlayer" }, // 1378209071
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARobotCharacter_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARobotCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AI/RobotCharacter.h" },
		{ "ModuleRelativePath", "Public/AI/RobotCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARobotCharacter_Statics::NewProp_DeathMontage_MetaData[] = {
		{ "Category", "RobotCharacter" },
		{ "ModuleRelativePath", "Public/AI/RobotCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARobotCharacter_Statics::NewProp_DeathMontage = { "DeathMontage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARobotCharacter, DeathMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARobotCharacter_Statics::NewProp_DeathMontage_MetaData), Z_Construct_UClass_ARobotCharacter_Statics::NewProp_DeathMontage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARobotCharacter_Statics::NewProp_Health_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/AI/RobotCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARobotCharacter_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARobotCharacter, Health), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARobotCharacter_Statics::NewProp_Health_MetaData), Z_Construct_UClass_ARobotCharacter_Statics::NewProp_Health_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARobotCharacter_Statics::NewProp_MaxHealth_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/AI/RobotCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARobotCharacter_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARobotCharacter, MaxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARobotCharacter_Statics::NewProp_MaxHealth_MetaData), Z_Construct_UClass_ARobotCharacter_Statics::NewProp_MaxHealth_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARobotCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARobotCharacter_Statics::NewProp_DeathMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARobotCharacter_Statics::NewProp_Health,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARobotCharacter_Statics::NewProp_MaxHealth,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARobotCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARobotCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARobotCharacter_Statics::ClassParams = {
		&ARobotCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ARobotCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ARobotCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARobotCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ARobotCharacter_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARobotCharacter_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ARobotCharacter()
	{
		if (!Z_Registration_Info_UClass_ARobotCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARobotCharacter.OuterSingleton, Z_Construct_UClass_ARobotCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARobotCharacter.OuterSingleton;
	}
	template<> RIVALSMECHANICS_API UClass* StaticClass<ARobotCharacter>()
	{
		return ARobotCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARobotCharacter);
	ARobotCharacter::~ARobotCharacter() {}
	struct Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_AI_RobotCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_AI_RobotCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARobotCharacter, ARobotCharacter::StaticClass, TEXT("ARobotCharacter"), &Z_Registration_Info_UClass_ARobotCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARobotCharacter), 1122408866U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_AI_RobotCharacter_h_2130959123(TEXT("/Script/RivalsMechanics"),
		Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_AI_RobotCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_AI_RobotCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
