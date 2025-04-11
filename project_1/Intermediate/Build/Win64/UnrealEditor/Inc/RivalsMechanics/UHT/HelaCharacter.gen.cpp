// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RivalsMechanics/Public/Hela/HelaCharacter.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHelaCharacter() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	RIVALSMECHANICS_API UClass* Z_Construct_UClass_AHelaCharacter();
	RIVALSMECHANICS_API UClass* Z_Construct_UClass_AHelaCharacter_NoRegister();
	RIVALSMECHANICS_API UClass* Z_Construct_UClass_ARivalsMechanicsCharacter();
	UPackage* Z_Construct_UPackage__Script_RivalsMechanics();
// End Cross Module References
	DEFINE_FUNCTION(AHelaCharacter::execRMBAbility)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RMBAbility();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHelaCharacter::execEAbility)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EAbility();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHelaCharacter::execGetPrimaryAmmunition)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetPrimaryAmmunition();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHelaCharacter::execPrimaryPullTrigger)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PrimaryPullTrigger();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHelaCharacter::execIsDead)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsDead();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHelaCharacter::execGetHealthPercent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetHealthPercent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHelaCharacter::execReloadPrimary)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReloadPrimary();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHelaCharacter::execTeleportBirdEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TeleportBirdEnd();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHelaCharacter::execTeleportBird)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TeleportBird();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHelaCharacter::execIsReloading)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsReloading();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHelaCharacter::execIsHealthLow)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsHealthLow();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHelaCharacter::execGetMaxHealth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMaxHealth();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHelaCharacter::execGetHealth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetHealth();
		P_NATIVE_END;
	}
	void AHelaCharacter::StaticRegisterNativesAHelaCharacter()
	{
		UClass* Class = AHelaCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EAbility", &AHelaCharacter::execEAbility },
			{ "GetHealth", &AHelaCharacter::execGetHealth },
			{ "GetHealthPercent", &AHelaCharacter::execGetHealthPercent },
			{ "GetMaxHealth", &AHelaCharacter::execGetMaxHealth },
			{ "GetPrimaryAmmunition", &AHelaCharacter::execGetPrimaryAmmunition },
			{ "IsDead", &AHelaCharacter::execIsDead },
			{ "IsHealthLow", &AHelaCharacter::execIsHealthLow },
			{ "IsReloading", &AHelaCharacter::execIsReloading },
			{ "PrimaryPullTrigger", &AHelaCharacter::execPrimaryPullTrigger },
			{ "ReloadPrimary", &AHelaCharacter::execReloadPrimary },
			{ "RMBAbility", &AHelaCharacter::execRMBAbility },
			{ "TeleportBird", &AHelaCharacter::execTeleportBird },
			{ "TeleportBirdEnd", &AHelaCharacter::execTeleportBirdEnd },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AHelaCharacter_EAbility_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHelaCharacter_EAbility_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Hela/HelaCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHelaCharacter_EAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHelaCharacter, nullptr, "EAbility", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHelaCharacter_EAbility_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHelaCharacter_EAbility_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AHelaCharacter_EAbility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHelaCharacter_EAbility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHelaCharacter_GetHealth_Statics
	{
		struct HelaCharacter_eventGetHealth_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AHelaCharacter_GetHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelaCharacter_eventGetHealth_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHelaCharacter_GetHealth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHelaCharacter_GetHealth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHelaCharacter_GetHealth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Hela/HelaCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHelaCharacter_GetHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHelaCharacter, nullptr, "GetHealth", nullptr, nullptr, Z_Construct_UFunction_AHelaCharacter_GetHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHelaCharacter_GetHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_AHelaCharacter_GetHealth_Statics::HelaCharacter_eventGetHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHelaCharacter_GetHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHelaCharacter_GetHealth_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AHelaCharacter_GetHealth_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AHelaCharacter_GetHealth_Statics::HelaCharacter_eventGetHealth_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AHelaCharacter_GetHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHelaCharacter_GetHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHelaCharacter_GetHealthPercent_Statics
	{
		struct HelaCharacter_eventGetHealthPercent_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AHelaCharacter_GetHealthPercent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelaCharacter_eventGetHealthPercent_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHelaCharacter_GetHealthPercent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHelaCharacter_GetHealthPercent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHelaCharacter_GetHealthPercent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Hela/HelaCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHelaCharacter_GetHealthPercent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHelaCharacter, nullptr, "GetHealthPercent", nullptr, nullptr, Z_Construct_UFunction_AHelaCharacter_GetHealthPercent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHelaCharacter_GetHealthPercent_Statics::PropPointers), sizeof(Z_Construct_UFunction_AHelaCharacter_GetHealthPercent_Statics::HelaCharacter_eventGetHealthPercent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHelaCharacter_GetHealthPercent_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHelaCharacter_GetHealthPercent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AHelaCharacter_GetHealthPercent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AHelaCharacter_GetHealthPercent_Statics::HelaCharacter_eventGetHealthPercent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AHelaCharacter_GetHealthPercent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHelaCharacter_GetHealthPercent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHelaCharacter_GetMaxHealth_Statics
	{
		struct HelaCharacter_eventGetMaxHealth_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AHelaCharacter_GetMaxHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelaCharacter_eventGetMaxHealth_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHelaCharacter_GetMaxHealth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHelaCharacter_GetMaxHealth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHelaCharacter_GetMaxHealth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Hela/HelaCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHelaCharacter_GetMaxHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHelaCharacter, nullptr, "GetMaxHealth", nullptr, nullptr, Z_Construct_UFunction_AHelaCharacter_GetMaxHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHelaCharacter_GetMaxHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_AHelaCharacter_GetMaxHealth_Statics::HelaCharacter_eventGetMaxHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHelaCharacter_GetMaxHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHelaCharacter_GetMaxHealth_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AHelaCharacter_GetMaxHealth_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AHelaCharacter_GetMaxHealth_Statics::HelaCharacter_eventGetMaxHealth_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AHelaCharacter_GetMaxHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHelaCharacter_GetMaxHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHelaCharacter_GetPrimaryAmmunition_Statics
	{
		struct HelaCharacter_eventGetPrimaryAmmunition_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AHelaCharacter_GetPrimaryAmmunition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelaCharacter_eventGetPrimaryAmmunition_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHelaCharacter_GetPrimaryAmmunition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHelaCharacter_GetPrimaryAmmunition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHelaCharacter_GetPrimaryAmmunition_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Hela/HelaCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHelaCharacter_GetPrimaryAmmunition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHelaCharacter, nullptr, "GetPrimaryAmmunition", nullptr, nullptr, Z_Construct_UFunction_AHelaCharacter_GetPrimaryAmmunition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHelaCharacter_GetPrimaryAmmunition_Statics::PropPointers), sizeof(Z_Construct_UFunction_AHelaCharacter_GetPrimaryAmmunition_Statics::HelaCharacter_eventGetPrimaryAmmunition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHelaCharacter_GetPrimaryAmmunition_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHelaCharacter_GetPrimaryAmmunition_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AHelaCharacter_GetPrimaryAmmunition_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AHelaCharacter_GetPrimaryAmmunition_Statics::HelaCharacter_eventGetPrimaryAmmunition_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AHelaCharacter_GetPrimaryAmmunition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHelaCharacter_GetPrimaryAmmunition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHelaCharacter_IsDead_Statics
	{
		struct HelaCharacter_eventIsDead_Parms
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
	void Z_Construct_UFunction_AHelaCharacter_IsDead_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HelaCharacter_eventIsDead_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AHelaCharacter_IsDead_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HelaCharacter_eventIsDead_Parms), &Z_Construct_UFunction_AHelaCharacter_IsDead_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHelaCharacter_IsDead_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHelaCharacter_IsDead_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHelaCharacter_IsDead_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Hela/HelaCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHelaCharacter_IsDead_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHelaCharacter, nullptr, "IsDead", nullptr, nullptr, Z_Construct_UFunction_AHelaCharacter_IsDead_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHelaCharacter_IsDead_Statics::PropPointers), sizeof(Z_Construct_UFunction_AHelaCharacter_IsDead_Statics::HelaCharacter_eventIsDead_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHelaCharacter_IsDead_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHelaCharacter_IsDead_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AHelaCharacter_IsDead_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AHelaCharacter_IsDead_Statics::HelaCharacter_eventIsDead_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AHelaCharacter_IsDead()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHelaCharacter_IsDead_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHelaCharacter_IsHealthLow_Statics
	{
		struct HelaCharacter_eventIsHealthLow_Parms
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
	void Z_Construct_UFunction_AHelaCharacter_IsHealthLow_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HelaCharacter_eventIsHealthLow_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AHelaCharacter_IsHealthLow_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HelaCharacter_eventIsHealthLow_Parms), &Z_Construct_UFunction_AHelaCharacter_IsHealthLow_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHelaCharacter_IsHealthLow_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHelaCharacter_IsHealthLow_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHelaCharacter_IsHealthLow_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Hela/HelaCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHelaCharacter_IsHealthLow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHelaCharacter, nullptr, "IsHealthLow", nullptr, nullptr, Z_Construct_UFunction_AHelaCharacter_IsHealthLow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHelaCharacter_IsHealthLow_Statics::PropPointers), sizeof(Z_Construct_UFunction_AHelaCharacter_IsHealthLow_Statics::HelaCharacter_eventIsHealthLow_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHelaCharacter_IsHealthLow_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHelaCharacter_IsHealthLow_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AHelaCharacter_IsHealthLow_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AHelaCharacter_IsHealthLow_Statics::HelaCharacter_eventIsHealthLow_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AHelaCharacter_IsHealthLow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHelaCharacter_IsHealthLow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHelaCharacter_IsReloading_Statics
	{
		struct HelaCharacter_eventIsReloading_Parms
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
	void Z_Construct_UFunction_AHelaCharacter_IsReloading_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HelaCharacter_eventIsReloading_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AHelaCharacter_IsReloading_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HelaCharacter_eventIsReloading_Parms), &Z_Construct_UFunction_AHelaCharacter_IsReloading_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHelaCharacter_IsReloading_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHelaCharacter_IsReloading_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHelaCharacter_IsReloading_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Hela/HelaCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHelaCharacter_IsReloading_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHelaCharacter, nullptr, "IsReloading", nullptr, nullptr, Z_Construct_UFunction_AHelaCharacter_IsReloading_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHelaCharacter_IsReloading_Statics::PropPointers), sizeof(Z_Construct_UFunction_AHelaCharacter_IsReloading_Statics::HelaCharacter_eventIsReloading_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHelaCharacter_IsReloading_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHelaCharacter_IsReloading_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AHelaCharacter_IsReloading_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AHelaCharacter_IsReloading_Statics::HelaCharacter_eventIsReloading_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AHelaCharacter_IsReloading()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHelaCharacter_IsReloading_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHelaCharacter_PrimaryPullTrigger_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHelaCharacter_PrimaryPullTrigger_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Hela/HelaCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHelaCharacter_PrimaryPullTrigger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHelaCharacter, nullptr, "PrimaryPullTrigger", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHelaCharacter_PrimaryPullTrigger_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHelaCharacter_PrimaryPullTrigger_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AHelaCharacter_PrimaryPullTrigger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHelaCharacter_PrimaryPullTrigger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHelaCharacter_ReloadPrimary_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHelaCharacter_ReloadPrimary_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Hela/HelaCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHelaCharacter_ReloadPrimary_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHelaCharacter, nullptr, "ReloadPrimary", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHelaCharacter_ReloadPrimary_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHelaCharacter_ReloadPrimary_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AHelaCharacter_ReloadPrimary()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHelaCharacter_ReloadPrimary_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHelaCharacter_RMBAbility_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHelaCharacter_RMBAbility_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Hela/HelaCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHelaCharacter_RMBAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHelaCharacter, nullptr, "RMBAbility", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHelaCharacter_RMBAbility_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHelaCharacter_RMBAbility_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AHelaCharacter_RMBAbility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHelaCharacter_RMBAbility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHelaCharacter_TeleportBird_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHelaCharacter_TeleportBird_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Hela/HelaCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHelaCharacter_TeleportBird_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHelaCharacter, nullptr, "TeleportBird", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHelaCharacter_TeleportBird_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHelaCharacter_TeleportBird_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AHelaCharacter_TeleportBird()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHelaCharacter_TeleportBird_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHelaCharacter_TeleportBirdEnd_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHelaCharacter_TeleportBirdEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Hela/HelaCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHelaCharacter_TeleportBirdEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHelaCharacter, nullptr, "TeleportBirdEnd", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHelaCharacter_TeleportBirdEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHelaCharacter_TeleportBirdEnd_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AHelaCharacter_TeleportBirdEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHelaCharacter_TeleportBirdEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHelaCharacter);
	UClass* Z_Construct_UClass_AHelaCharacter_NoRegister()
	{
		return AHelaCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AHelaCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Health;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BirdMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BirdMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsTraveling_MetaData[];
#endif
		static void NewProp_bIsTraveling_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsTraveling;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TravelSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TravelSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentMontageIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentMontageIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EAbilityProjectileClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_EAbilityProjectileClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RMBAbilityProjectileClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_RMBAbilityProjectileClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsHealthLow_MetaData[];
#endif
		static void NewProp_bIsHealthLow_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsHealthLow;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryAttackMontageOne_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PrimaryAttackMontageOne;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SFXOne_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SFXOne;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryAttackMontageTwo_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PrimaryAttackMontageTwo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SFXTwo_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SFXTwo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryAttackMontageThree_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PrimaryAttackMontageThree;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SFXThree_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SFXThree;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReloadMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReloadMontage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SFXReload_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SFXReload;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EAbilityMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EAbilityMontage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RMBAbilityMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RMBAbilityMontage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryAttackSocket_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PrimaryAttackSocket;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Ammunition_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Ammunition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageDone_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageDone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FireRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FireRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImpactEffect_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ImpactEffect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImpactSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ImpactSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryHitResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PrimaryHitResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHelaCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ARivalsMechanicsCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_RivalsMechanics,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHelaCharacter_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AHelaCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AHelaCharacter_EAbility, "EAbility" }, // 12900374
		{ &Z_Construct_UFunction_AHelaCharacter_GetHealth, "GetHealth" }, // 3138312741
		{ &Z_Construct_UFunction_AHelaCharacter_GetHealthPercent, "GetHealthPercent" }, // 1364195103
		{ &Z_Construct_UFunction_AHelaCharacter_GetMaxHealth, "GetMaxHealth" }, // 1445867524
		{ &Z_Construct_UFunction_AHelaCharacter_GetPrimaryAmmunition, "GetPrimaryAmmunition" }, // 3881048321
		{ &Z_Construct_UFunction_AHelaCharacter_IsDead, "IsDead" }, // 2388097067
		{ &Z_Construct_UFunction_AHelaCharacter_IsHealthLow, "IsHealthLow" }, // 3561266471
		{ &Z_Construct_UFunction_AHelaCharacter_IsReloading, "IsReloading" }, // 2237516402
		{ &Z_Construct_UFunction_AHelaCharacter_PrimaryPullTrigger, "PrimaryPullTrigger" }, // 2769359078
		{ &Z_Construct_UFunction_AHelaCharacter_ReloadPrimary, "ReloadPrimary" }, // 3669264296
		{ &Z_Construct_UFunction_AHelaCharacter_RMBAbility, "RMBAbility" }, // 1601383485
		{ &Z_Construct_UFunction_AHelaCharacter_TeleportBird, "TeleportBird" }, // 1157831166
		{ &Z_Construct_UFunction_AHelaCharacter_TeleportBirdEnd, "TeleportBirdEnd" }, // 2023300435
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHelaCharacter_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHelaCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Hela/HelaCharacter.h" },
		{ "ModuleRelativePath", "Public/Hela/HelaCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHelaCharacter_Statics::NewProp_Health_MetaData[] = {
		{ "Category", "HelaCharacter" },
		{ "ModuleRelativePath", "Public/Hela/HelaCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHelaCharacter_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHelaCharacter, Health), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHelaCharacter_Statics::NewProp_Health_MetaData), Z_Construct_UClass_AHelaCharacter_Statics::NewProp_Health_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHelaCharacter_Statics::NewProp_MaxHealth_MetaData[] = {
		{ "Category", "HelaCharacter" },
		{ "ModuleRelativePath", "Public/Hela/HelaCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHelaCharacter_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHelaCharacter, MaxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHelaCharacter_Statics::NewProp_MaxHealth_MetaData), Z_Construct_UClass_AHelaCharacter_Statics::NewProp_MaxHealth_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHelaCharacter_Statics::NewProp_BirdMesh_MetaData[] = {
		{ "Category", "HelaCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Hela/HelaCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHelaCharacter_Statics::NewProp_BirdMesh = { "BirdMesh", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHelaCharacter, BirdMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHelaCharacter_Statics::NewProp_BirdMesh_MetaData), Z_Construct_UClass_AHelaCharacter_Statics::NewProp_BirdMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHelaCharacter_Statics::NewProp_bIsTraveling_MetaData[] = {
		{ "Category", "HelaCharacter" },
		{ "ModuleRelativePath", "Public/Hela/HelaCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AHelaCharacter_Statics::NewProp_bIsTraveling_SetBit(void* Obj)
	{
		((AHelaCharacter*)Obj)->bIsTraveling = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AHelaCharacter_Statics::NewProp_bIsTraveling = { "bIsTraveling", nullptr, (EPropertyFlags)0x0020080000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AHelaCharacter), &Z_Construct_UClass_AHelaCharacter_Statics::NewProp_bIsTraveling_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHelaCharacter_Statics::NewProp_bIsTraveling_MetaData), Z_Construct_UClass_AHelaCharacter_Statics::NewProp_bIsTraveling_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHelaCharacter_Statics::NewProp_TravelSpeed_MetaData[] = {
		{ "Category", "HelaCharacter" },
		{ "ModuleRelativePath", "Public/Hela/HelaCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHelaCharacter_Statics::NewProp_TravelSpeed = { "TravelSpeed", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHelaCharacter, TravelSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHelaCharacter_Statics::NewProp_TravelSpeed_MetaData), Z_Construct_UClass_AHelaCharacter_Statics::NewProp_TravelSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHelaCharacter_Statics::NewProp_CurrentMontageIndex_MetaData[] = {
		{ "Category", "HelaCharacter" },
		{ "ModuleRelativePath", "Public/Hela/HelaCharacter.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AHelaCharacter_Statics::NewProp_CurrentMontageIndex = { "CurrentMontageIndex", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHelaCharacter, CurrentMontageIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHelaCharacter_Statics::NewProp_CurrentMontageIndex_MetaData), Z_Construct_UClass_AHelaCharacter_Statics::NewProp_CurrentMontageIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHelaCharacter_Statics::NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/Hela/HelaCharacter.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AHelaCharacter_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHelaCharacter, ProjectileClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHelaCharacter_Statics::NewProp_ProjectileClass_MetaData), Z_Construct_UClass_AHelaCharacter_Statics::NewProp_ProjectileClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHelaCharacter_Statics::NewProp_EAbilityProjectileClass_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/Hela/HelaCharacter.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AHelaCharacter_Statics::NewProp_EAbilityProjectileClass = { "EAbilityProjectileClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHelaCharacter, EAbilityProjectileClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHelaCharacter_Statics::NewProp_EAbilityProjectileClass_MetaData), Z_Construct_UClass_AHelaCharacter_Statics::NewProp_EAbilityProjectileClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHelaCharacter_Statics::NewProp_RMBAbilityProjectileClass_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/Hela/HelaCharacter.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AHelaCharacter_Statics::NewProp_RMBAbilityProjectileClass = { "RMBAbilityProjectileClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHelaCharacter, RMBAbilityProjectileClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHelaCharacter_Statics::NewProp_RMBAbilityProjectileClass_MetaData), Z_Construct_UClass_AHelaCharacter_Statics::NewProp_RMBAbilityProjectileClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHelaCharacter_Statics::NewProp_bIsHealthLow_MetaData[] = {
		{ "ModuleRelativePath", "Public/Hela/HelaCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AHelaCharacter_Statics::NewProp_bIsHealthLow_SetBit(void* Obj)
	{
		((AHelaCharacter*)Obj)->bIsHealthLow = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AHelaCharacter_Statics::NewProp_bIsHealthLow = { "bIsHealthLow", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AHelaCharacter), &Z_Construct_UClass_AHelaCharacter_Statics::NewProp_bIsHealthLow_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHelaCharacter_Statics::NewProp_bIsHealthLow_MetaData), Z_Construct_UClass_AHelaCharacter_Statics::NewProp_bIsHealthLow_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHelaCharacter_Statics::NewProp_PrimaryAttackMontageOne_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/Hela/HelaCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHelaCharacter_Statics::NewProp_PrimaryAttackMontageOne = { "PrimaryAttackMontageOne", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHelaCharacter, PrimaryAttackMontageOne), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHelaCharacter_Statics::NewProp_PrimaryAttackMontageOne_MetaData), Z_Construct_UClass_AHelaCharacter_Statics::NewProp_PrimaryAttackMontageOne_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHelaCharacter_Statics::NewProp_SFXOne_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/Hela/HelaCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHelaCharacter_Statics::NewProp_SFXOne = { "SFXOne", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHelaCharacter, SFXOne), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHelaCharacter_Statics::NewProp_SFXOne_MetaData), Z_Construct_UClass_AHelaCharacter_Statics::NewProp_SFXOne_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHelaCharacter_Statics::NewProp_PrimaryAttackMontageTwo_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/Hela/HelaCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHelaCharacter_Statics::NewProp_PrimaryAttackMontageTwo = { "PrimaryAttackMontageTwo", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHelaCharacter, PrimaryAttackMontageTwo), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHelaCharacter_Statics::NewProp_PrimaryAttackMontageTwo_MetaData), Z_Construct_UClass_AHelaCharacter_Statics::NewProp_PrimaryAttackMontageTwo_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHelaCharacter_Statics::NewProp_SFXTwo_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/Hela/HelaCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHelaCharacter_Statics::NewProp_SFXTwo = { "SFXTwo", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHelaCharacter, SFXTwo), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHelaCharacter_Statics::NewProp_SFXTwo_MetaData), Z_Construct_UClass_AHelaCharacter_Statics::NewProp_SFXTwo_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHelaCharacter_Statics::NewProp_PrimaryAttackMontageThree_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/Hela/HelaCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHelaCharacter_Statics::NewProp_PrimaryAttackMontageThree = { "PrimaryAttackMontageThree", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHelaCharacter, PrimaryAttackMontageThree), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHelaCharacter_Statics::NewProp_PrimaryAttackMontageThree_MetaData), Z_Construct_UClass_AHelaCharacter_Statics::NewProp_PrimaryAttackMontageThree_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHelaCharacter_Statics::NewProp_SFXThree_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/Hela/HelaCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHelaCharacter_Statics::NewProp_SFXThree = { "SFXThree", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHelaCharacter, SFXThree), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHelaCharacter_Statics::NewProp_SFXThree_MetaData), Z_Construct_UClass_AHelaCharacter_Statics::NewProp_SFXThree_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHelaCharacter_Statics::NewProp_ReloadMontage_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/Hela/HelaCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHelaCharacter_Statics::NewProp_ReloadMontage = { "ReloadMontage", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHelaCharacter, ReloadMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHelaCharacter_Statics::NewProp_ReloadMontage_MetaData), Z_Construct_UClass_AHelaCharacter_Statics::NewProp_ReloadMontage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHelaCharacter_Statics::NewProp_SFXReload_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/Hela/HelaCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHelaCharacter_Statics::NewProp_SFXReload = { "SFXReload", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHelaCharacter, SFXReload), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHelaCharacter_Statics::NewProp_SFXReload_MetaData), Z_Construct_UClass_AHelaCharacter_Statics::NewProp_SFXReload_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHelaCharacter_Statics::NewProp_EAbilityMontage_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/Hela/HelaCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHelaCharacter_Statics::NewProp_EAbilityMontage = { "EAbilityMontage", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHelaCharacter, EAbilityMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHelaCharacter_Statics::NewProp_EAbilityMontage_MetaData), Z_Construct_UClass_AHelaCharacter_Statics::NewProp_EAbilityMontage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHelaCharacter_Statics::NewProp_RMBAbilityMontage_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/Hela/HelaCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHelaCharacter_Statics::NewProp_RMBAbilityMontage = { "RMBAbilityMontage", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHelaCharacter, RMBAbilityMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHelaCharacter_Statics::NewProp_RMBAbilityMontage_MetaData), Z_Construct_UClass_AHelaCharacter_Statics::NewProp_RMBAbilityMontage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHelaCharacter_Statics::NewProp_PrimaryAttackSocket_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/Hela/HelaCharacter.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AHelaCharacter_Statics::NewProp_PrimaryAttackSocket = { "PrimaryAttackSocket", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHelaCharacter, PrimaryAttackSocket), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHelaCharacter_Statics::NewProp_PrimaryAttackSocket_MetaData), Z_Construct_UClass_AHelaCharacter_Statics::NewProp_PrimaryAttackSocket_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHelaCharacter_Statics::NewProp_Ammunition_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/Hela/HelaCharacter.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AHelaCharacter_Statics::NewProp_Ammunition = { "Ammunition", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHelaCharacter, Ammunition), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHelaCharacter_Statics::NewProp_Ammunition_MetaData), Z_Construct_UClass_AHelaCharacter_Statics::NewProp_Ammunition_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHelaCharacter_Statics::NewProp_MaxRange_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/Hela/HelaCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHelaCharacter_Statics::NewProp_MaxRange = { "MaxRange", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHelaCharacter, MaxRange), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHelaCharacter_Statics::NewProp_MaxRange_MetaData), Z_Construct_UClass_AHelaCharacter_Statics::NewProp_MaxRange_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHelaCharacter_Statics::NewProp_DamageDone_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/Hela/HelaCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHelaCharacter_Statics::NewProp_DamageDone = { "DamageDone", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHelaCharacter, DamageDone), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHelaCharacter_Statics::NewProp_DamageDone_MetaData), Z_Construct_UClass_AHelaCharacter_Statics::NewProp_DamageDone_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHelaCharacter_Statics::NewProp_FireRate_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/Hela/HelaCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHelaCharacter_Statics::NewProp_FireRate = { "FireRate", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHelaCharacter, FireRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHelaCharacter_Statics::NewProp_FireRate_MetaData), Z_Construct_UClass_AHelaCharacter_Statics::NewProp_FireRate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHelaCharacter_Statics::NewProp_ImpactEffect_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/Hela/HelaCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHelaCharacter_Statics::NewProp_ImpactEffect = { "ImpactEffect", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHelaCharacter, ImpactEffect), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHelaCharacter_Statics::NewProp_ImpactEffect_MetaData), Z_Construct_UClass_AHelaCharacter_Statics::NewProp_ImpactEffect_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHelaCharacter_Statics::NewProp_ImpactSound_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/Hela/HelaCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHelaCharacter_Statics::NewProp_ImpactSound = { "ImpactSound", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHelaCharacter, ImpactSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHelaCharacter_Statics::NewProp_ImpactSound_MetaData), Z_Construct_UClass_AHelaCharacter_Statics::NewProp_ImpactSound_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHelaCharacter_Statics::NewProp_PlayerController_MetaData[] = {
		{ "ModuleRelativePath", "Public/Hela/HelaCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHelaCharacter_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHelaCharacter, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHelaCharacter_Statics::NewProp_PlayerController_MetaData), Z_Construct_UClass_AHelaCharacter_Statics::NewProp_PlayerController_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHelaCharacter_Statics::NewProp_PrimaryHitResult_MetaData[] = {
		{ "Category", "HelaCharacter" },
		{ "ModuleRelativePath", "Public/Hela/HelaCharacter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AHelaCharacter_Statics::NewProp_PrimaryHitResult = { "PrimaryHitResult", nullptr, (EPropertyFlags)0x0010008000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHelaCharacter, PrimaryHitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHelaCharacter_Statics::NewProp_PrimaryHitResult_MetaData), Z_Construct_UClass_AHelaCharacter_Statics::NewProp_PrimaryHitResult_MetaData) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHelaCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHelaCharacter_Statics::NewProp_Health,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHelaCharacter_Statics::NewProp_MaxHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHelaCharacter_Statics::NewProp_BirdMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHelaCharacter_Statics::NewProp_bIsTraveling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHelaCharacter_Statics::NewProp_TravelSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHelaCharacter_Statics::NewProp_CurrentMontageIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHelaCharacter_Statics::NewProp_ProjectileClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHelaCharacter_Statics::NewProp_EAbilityProjectileClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHelaCharacter_Statics::NewProp_RMBAbilityProjectileClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHelaCharacter_Statics::NewProp_bIsHealthLow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHelaCharacter_Statics::NewProp_PrimaryAttackMontageOne,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHelaCharacter_Statics::NewProp_SFXOne,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHelaCharacter_Statics::NewProp_PrimaryAttackMontageTwo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHelaCharacter_Statics::NewProp_SFXTwo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHelaCharacter_Statics::NewProp_PrimaryAttackMontageThree,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHelaCharacter_Statics::NewProp_SFXThree,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHelaCharacter_Statics::NewProp_ReloadMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHelaCharacter_Statics::NewProp_SFXReload,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHelaCharacter_Statics::NewProp_EAbilityMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHelaCharacter_Statics::NewProp_RMBAbilityMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHelaCharacter_Statics::NewProp_PrimaryAttackSocket,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHelaCharacter_Statics::NewProp_Ammunition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHelaCharacter_Statics::NewProp_MaxRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHelaCharacter_Statics::NewProp_DamageDone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHelaCharacter_Statics::NewProp_FireRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHelaCharacter_Statics::NewProp_ImpactEffect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHelaCharacter_Statics::NewProp_ImpactSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHelaCharacter_Statics::NewProp_PlayerController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHelaCharacter_Statics::NewProp_PrimaryHitResult,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHelaCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHelaCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AHelaCharacter_Statics::ClassParams = {
		&AHelaCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AHelaCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AHelaCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHelaCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AHelaCharacter_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHelaCharacter_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AHelaCharacter()
	{
		if (!Z_Registration_Info_UClass_AHelaCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHelaCharacter.OuterSingleton, Z_Construct_UClass_AHelaCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AHelaCharacter.OuterSingleton;
	}
	template<> RIVALSMECHANICS_API UClass* StaticClass<AHelaCharacter>()
	{
		return AHelaCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHelaCharacter);
	AHelaCharacter::~AHelaCharacter() {}
	struct Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Hela_HelaCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Hela_HelaCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AHelaCharacter, AHelaCharacter::StaticClass, TEXT("AHelaCharacter"), &Z_Registration_Info_UClass_AHelaCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHelaCharacter), 3864623628U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Hela_HelaCharacter_h_955410262(TEXT("/Script/RivalsMechanics"),
		Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Hela_HelaCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Hela_HelaCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
