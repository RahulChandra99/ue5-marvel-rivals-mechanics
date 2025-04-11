// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RivalsMechanics/Public/Punisher/Characters/PunisherCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePunisherCharacter() {}
// Cross Module References
	CABLECOMPONENT_API UClass* Z_Construct_UClass_UCableComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundWave_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	RIVALSMECHANICS_API UClass* Z_Construct_UClass_APunisherCharacter();
	RIVALSMECHANICS_API UClass* Z_Construct_UClass_APunisherCharacter_NoRegister();
	RIVALSMECHANICS_API UClass* Z_Construct_UClass_ARivalsMechanicsCharacter();
	UPackage* Z_Construct_UPackage__Script_RivalsMechanics();
// End Cross Module References
	DEFINE_FUNCTION(APunisherCharacter::execAttackAI)
	{
		P_GET_OBJECT(AActor,Z_Param_Target);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DamageAmount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AttackAI(Z_Param_Target,Z_Param_DamageAmount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APunisherCharacter::execIsTurretStarted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsTurretStarted();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APunisherCharacter::execGetGrappleTimerValue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetGrappleTimerValue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APunisherCharacter::execGetTurretTimerValue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetTurretTimerValue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APunisherCharacter::execGetRMBTimerValue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetRMBTimerValue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APunisherCharacter::execGetTurretActiveStatus)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetTurretActiveStatus();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APunisherCharacter::execGetActiveWeapon)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetActiveWeapon();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APunisherCharacter::execGetReloadingStatus)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetReloadingStatus();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APunisherCharacter::execGetMaxHealth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMaxHealth();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APunisherCharacter::execGetHealth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetHealth();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APunisherCharacter::execGetHealthPercent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetHealthPercent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APunisherCharacter::execIsDead)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsDead();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APunisherCharacter::execReloadGunWrapper)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReloadGunWrapper();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APunisherCharacter::execSwitchWeapon)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_KeyPressed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SwitchWeapon(Z_Param_KeyPressed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APunisherCharacter::execGetTurretAmmo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetTurretAmmo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APunisherCharacter::execGetShotgunAmmunition)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetShotgunAmmunition();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APunisherCharacter::execGetSMGAmmunition)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetSMGAmmunition();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APunisherCharacter::execGetBeamEndLocation)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_MuzzleSocketLocation);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutBeamLocation);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ImpactDistance);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetBeamEndLocation(Z_Param_Out_MuzzleSocketLocation,Z_Param_Out_OutBeamLocation,Z_Param_ImpactDistance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APunisherCharacter::execShiftGrappleHook)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShiftGrappleHook();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APunisherCharacter::execPreEndTurretAction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PreEndTurretAction();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APunisherCharacter::execETurretButton)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ETurretButton();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APunisherCharacter::execRMBSmokeImpact)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RMBSmokeImpact();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APunisherCharacter::execAutoFireResetTimer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AutoFireResetTimer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APunisherCharacter::execStartFireTimer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartFireTimer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APunisherCharacter::execLMBShotGunAttack)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LMBShotGunAttack();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APunisherCharacter::execLMBFireBtnReleased)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LMBFireBtnReleased();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APunisherCharacter::execLMBFireBtnPressed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LMBFireBtnPressed();
		P_NATIVE_END;
	}
	void APunisherCharacter::StaticRegisterNativesAPunisherCharacter()
	{
		UClass* Class = APunisherCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AttackAI", &APunisherCharacter::execAttackAI },
			{ "AutoFireResetTimer", &APunisherCharacter::execAutoFireResetTimer },
			{ "ETurretButton", &APunisherCharacter::execETurretButton },
			{ "GetActiveWeapon", &APunisherCharacter::execGetActiveWeapon },
			{ "GetBeamEndLocation", &APunisherCharacter::execGetBeamEndLocation },
			{ "GetGrappleTimerValue", &APunisherCharacter::execGetGrappleTimerValue },
			{ "GetHealth", &APunisherCharacter::execGetHealth },
			{ "GetHealthPercent", &APunisherCharacter::execGetHealthPercent },
			{ "GetMaxHealth", &APunisherCharacter::execGetMaxHealth },
			{ "GetReloadingStatus", &APunisherCharacter::execGetReloadingStatus },
			{ "GetRMBTimerValue", &APunisherCharacter::execGetRMBTimerValue },
			{ "GetShotgunAmmunition", &APunisherCharacter::execGetShotgunAmmunition },
			{ "GetSMGAmmunition", &APunisherCharacter::execGetSMGAmmunition },
			{ "GetTurretActiveStatus", &APunisherCharacter::execGetTurretActiveStatus },
			{ "GetTurretAmmo", &APunisherCharacter::execGetTurretAmmo },
			{ "GetTurretTimerValue", &APunisherCharacter::execGetTurretTimerValue },
			{ "IsDead", &APunisherCharacter::execIsDead },
			{ "IsTurretStarted", &APunisherCharacter::execIsTurretStarted },
			{ "LMBFireBtnPressed", &APunisherCharacter::execLMBFireBtnPressed },
			{ "LMBFireBtnReleased", &APunisherCharacter::execLMBFireBtnReleased },
			{ "LMBShotGunAttack", &APunisherCharacter::execLMBShotGunAttack },
			{ "PreEndTurretAction", &APunisherCharacter::execPreEndTurretAction },
			{ "ReloadGunWrapper", &APunisherCharacter::execReloadGunWrapper },
			{ "RMBSmokeImpact", &APunisherCharacter::execRMBSmokeImpact },
			{ "ShiftGrappleHook", &APunisherCharacter::execShiftGrappleHook },
			{ "StartFireTimer", &APunisherCharacter::execStartFireTimer },
			{ "SwitchWeapon", &APunisherCharacter::execSwitchWeapon },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APunisherCharacter_AttackAI_Statics
	{
		struct PunisherCharacter_eventAttackAI_Parms
		{
			AActor* Target;
			float DamageAmount;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageAmount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APunisherCharacter_AttackAI_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PunisherCharacter_eventAttackAI_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APunisherCharacter_AttackAI_Statics::NewProp_DamageAmount = { "DamageAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PunisherCharacter_eventAttackAI_Parms, DamageAmount), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APunisherCharacter_AttackAI_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APunisherCharacter_AttackAI_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APunisherCharacter_AttackAI_Statics::NewProp_DamageAmount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APunisherCharacter_AttackAI_Statics::Function_MetaDataParams[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Public/Punisher/Characters/PunisherCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APunisherCharacter_AttackAI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APunisherCharacter, nullptr, "AttackAI", nullptr, nullptr, Z_Construct_UFunction_APunisherCharacter_AttackAI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APunisherCharacter_AttackAI_Statics::PropPointers), sizeof(Z_Construct_UFunction_APunisherCharacter_AttackAI_Statics::PunisherCharacter_eventAttackAI_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APunisherCharacter_AttackAI_Statics::Function_MetaDataParams), Z_Construct_UFunction_APunisherCharacter_AttackAI_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APunisherCharacter_AttackAI_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_APunisherCharacter_AttackAI_Statics::PunisherCharacter_eventAttackAI_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_APunisherCharacter_AttackAI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APunisherCharacter_AttackAI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APunisherCharacter_AutoFireResetTimer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APunisherCharacter_AutoFireResetTimer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Punisher/Characters/PunisherCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APunisherCharacter_AutoFireResetTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APunisherCharacter, nullptr, "AutoFireResetTimer", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APunisherCharacter_AutoFireResetTimer_Statics::Function_MetaDataParams), Z_Construct_UFunction_APunisherCharacter_AutoFireResetTimer_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_APunisherCharacter_AutoFireResetTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APunisherCharacter_AutoFireResetTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APunisherCharacter_ETurretButton_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APunisherCharacter_ETurretButton_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Punisher/Characters/PunisherCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APunisherCharacter_ETurretButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APunisherCharacter, nullptr, "ETurretButton", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APunisherCharacter_ETurretButton_Statics::Function_MetaDataParams), Z_Construct_UFunction_APunisherCharacter_ETurretButton_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_APunisherCharacter_ETurretButton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APunisherCharacter_ETurretButton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APunisherCharacter_GetActiveWeapon_Statics
	{
		struct PunisherCharacter_eventGetActiveWeapon_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APunisherCharacter_GetActiveWeapon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PunisherCharacter_eventGetActiveWeapon_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APunisherCharacter_GetActiveWeapon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APunisherCharacter_GetActiveWeapon_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APunisherCharacter_GetActiveWeapon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Punisher/Characters/PunisherCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APunisherCharacter_GetActiveWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APunisherCharacter, nullptr, "GetActiveWeapon", nullptr, nullptr, Z_Construct_UFunction_APunisherCharacter_GetActiveWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APunisherCharacter_GetActiveWeapon_Statics::PropPointers), sizeof(Z_Construct_UFunction_APunisherCharacter_GetActiveWeapon_Statics::PunisherCharacter_eventGetActiveWeapon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APunisherCharacter_GetActiveWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_APunisherCharacter_GetActiveWeapon_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APunisherCharacter_GetActiveWeapon_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_APunisherCharacter_GetActiveWeapon_Statics::PunisherCharacter_eventGetActiveWeapon_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_APunisherCharacter_GetActiveWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APunisherCharacter_GetActiveWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APunisherCharacter_GetBeamEndLocation_Statics
	{
		struct PunisherCharacter_eventGetBeamEndLocation_Parms
		{
			FVector MuzzleSocketLocation;
			FVector OutBeamLocation;
			float ImpactDistance;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MuzzleSocketLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MuzzleSocketLocation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutBeamLocation;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ImpactDistance;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APunisherCharacter_GetBeamEndLocation_Statics::NewProp_MuzzleSocketLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APunisherCharacter_GetBeamEndLocation_Statics::NewProp_MuzzleSocketLocation = { "MuzzleSocketLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PunisherCharacter_eventGetBeamEndLocation_Parms, MuzzleSocketLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APunisherCharacter_GetBeamEndLocation_Statics::NewProp_MuzzleSocketLocation_MetaData), Z_Construct_UFunction_APunisherCharacter_GetBeamEndLocation_Statics::NewProp_MuzzleSocketLocation_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APunisherCharacter_GetBeamEndLocation_Statics::NewProp_OutBeamLocation = { "OutBeamLocation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PunisherCharacter_eventGetBeamEndLocation_Parms, OutBeamLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APunisherCharacter_GetBeamEndLocation_Statics::NewProp_ImpactDistance = { "ImpactDistance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PunisherCharacter_eventGetBeamEndLocation_Parms, ImpactDistance), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_APunisherCharacter_GetBeamEndLocation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PunisherCharacter_eventGetBeamEndLocation_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APunisherCharacter_GetBeamEndLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PunisherCharacter_eventGetBeamEndLocation_Parms), &Z_Construct_UFunction_APunisherCharacter_GetBeamEndLocation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APunisherCharacter_GetBeamEndLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APunisherCharacter_GetBeamEndLocation_Statics::NewProp_MuzzleSocketLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APunisherCharacter_GetBeamEndLocation_Statics::NewProp_OutBeamLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APunisherCharacter_GetBeamEndLocation_Statics::NewProp_ImpactDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APunisherCharacter_GetBeamEndLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APunisherCharacter_GetBeamEndLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Punisher/Characters/PunisherCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APunisherCharacter_GetBeamEndLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APunisherCharacter, nullptr, "GetBeamEndLocation", nullptr, nullptr, Z_Construct_UFunction_APunisherCharacter_GetBeamEndLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APunisherCharacter_GetBeamEndLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_APunisherCharacter_GetBeamEndLocation_Statics::PunisherCharacter_eventGetBeamEndLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C80401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APunisherCharacter_GetBeamEndLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_APunisherCharacter_GetBeamEndLocation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APunisherCharacter_GetBeamEndLocation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_APunisherCharacter_GetBeamEndLocation_Statics::PunisherCharacter_eventGetBeamEndLocation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_APunisherCharacter_GetBeamEndLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APunisherCharacter_GetBeamEndLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APunisherCharacter_GetGrappleTimerValue_Statics
	{
		struct PunisherCharacter_eventGetGrappleTimerValue_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APunisherCharacter_GetGrappleTimerValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PunisherCharacter_eventGetGrappleTimerValue_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APunisherCharacter_GetGrappleTimerValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APunisherCharacter_GetGrappleTimerValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APunisherCharacter_GetGrappleTimerValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Punisher/Characters/PunisherCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APunisherCharacter_GetGrappleTimerValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APunisherCharacter, nullptr, "GetGrappleTimerValue", nullptr, nullptr, Z_Construct_UFunction_APunisherCharacter_GetGrappleTimerValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APunisherCharacter_GetGrappleTimerValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_APunisherCharacter_GetGrappleTimerValue_Statics::PunisherCharacter_eventGetGrappleTimerValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APunisherCharacter_GetGrappleTimerValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_APunisherCharacter_GetGrappleTimerValue_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APunisherCharacter_GetGrappleTimerValue_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_APunisherCharacter_GetGrappleTimerValue_Statics::PunisherCharacter_eventGetGrappleTimerValue_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_APunisherCharacter_GetGrappleTimerValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APunisherCharacter_GetGrappleTimerValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APunisherCharacter_GetHealth_Statics
	{
		struct PunisherCharacter_eventGetHealth_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APunisherCharacter_GetHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PunisherCharacter_eventGetHealth_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APunisherCharacter_GetHealth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APunisherCharacter_GetHealth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APunisherCharacter_GetHealth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Punisher/Characters/PunisherCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APunisherCharacter_GetHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APunisherCharacter, nullptr, "GetHealth", nullptr, nullptr, Z_Construct_UFunction_APunisherCharacter_GetHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APunisherCharacter_GetHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_APunisherCharacter_GetHealth_Statics::PunisherCharacter_eventGetHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APunisherCharacter_GetHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_APunisherCharacter_GetHealth_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APunisherCharacter_GetHealth_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_APunisherCharacter_GetHealth_Statics::PunisherCharacter_eventGetHealth_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_APunisherCharacter_GetHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APunisherCharacter_GetHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APunisherCharacter_GetHealthPercent_Statics
	{
		struct PunisherCharacter_eventGetHealthPercent_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APunisherCharacter_GetHealthPercent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PunisherCharacter_eventGetHealthPercent_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APunisherCharacter_GetHealthPercent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APunisherCharacter_GetHealthPercent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APunisherCharacter_GetHealthPercent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Punisher/Characters/PunisherCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APunisherCharacter_GetHealthPercent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APunisherCharacter, nullptr, "GetHealthPercent", nullptr, nullptr, Z_Construct_UFunction_APunisherCharacter_GetHealthPercent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APunisherCharacter_GetHealthPercent_Statics::PropPointers), sizeof(Z_Construct_UFunction_APunisherCharacter_GetHealthPercent_Statics::PunisherCharacter_eventGetHealthPercent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APunisherCharacter_GetHealthPercent_Statics::Function_MetaDataParams), Z_Construct_UFunction_APunisherCharacter_GetHealthPercent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APunisherCharacter_GetHealthPercent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_APunisherCharacter_GetHealthPercent_Statics::PunisherCharacter_eventGetHealthPercent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_APunisherCharacter_GetHealthPercent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APunisherCharacter_GetHealthPercent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APunisherCharacter_GetMaxHealth_Statics
	{
		struct PunisherCharacter_eventGetMaxHealth_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APunisherCharacter_GetMaxHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PunisherCharacter_eventGetMaxHealth_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APunisherCharacter_GetMaxHealth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APunisherCharacter_GetMaxHealth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APunisherCharacter_GetMaxHealth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Punisher/Characters/PunisherCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APunisherCharacter_GetMaxHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APunisherCharacter, nullptr, "GetMaxHealth", nullptr, nullptr, Z_Construct_UFunction_APunisherCharacter_GetMaxHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APunisherCharacter_GetMaxHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_APunisherCharacter_GetMaxHealth_Statics::PunisherCharacter_eventGetMaxHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APunisherCharacter_GetMaxHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_APunisherCharacter_GetMaxHealth_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APunisherCharacter_GetMaxHealth_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_APunisherCharacter_GetMaxHealth_Statics::PunisherCharacter_eventGetMaxHealth_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_APunisherCharacter_GetMaxHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APunisherCharacter_GetMaxHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APunisherCharacter_GetReloadingStatus_Statics
	{
		struct PunisherCharacter_eventGetReloadingStatus_Parms
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
	void Z_Construct_UFunction_APunisherCharacter_GetReloadingStatus_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PunisherCharacter_eventGetReloadingStatus_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APunisherCharacter_GetReloadingStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PunisherCharacter_eventGetReloadingStatus_Parms), &Z_Construct_UFunction_APunisherCharacter_GetReloadingStatus_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APunisherCharacter_GetReloadingStatus_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APunisherCharacter_GetReloadingStatus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APunisherCharacter_GetReloadingStatus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Punisher/Characters/PunisherCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APunisherCharacter_GetReloadingStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APunisherCharacter, nullptr, "GetReloadingStatus", nullptr, nullptr, Z_Construct_UFunction_APunisherCharacter_GetReloadingStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APunisherCharacter_GetReloadingStatus_Statics::PropPointers), sizeof(Z_Construct_UFunction_APunisherCharacter_GetReloadingStatus_Statics::PunisherCharacter_eventGetReloadingStatus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APunisherCharacter_GetReloadingStatus_Statics::Function_MetaDataParams), Z_Construct_UFunction_APunisherCharacter_GetReloadingStatus_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APunisherCharacter_GetReloadingStatus_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_APunisherCharacter_GetReloadingStatus_Statics::PunisherCharacter_eventGetReloadingStatus_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_APunisherCharacter_GetReloadingStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APunisherCharacter_GetReloadingStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APunisherCharacter_GetRMBTimerValue_Statics
	{
		struct PunisherCharacter_eventGetRMBTimerValue_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APunisherCharacter_GetRMBTimerValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PunisherCharacter_eventGetRMBTimerValue_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APunisherCharacter_GetRMBTimerValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APunisherCharacter_GetRMBTimerValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APunisherCharacter_GetRMBTimerValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Punisher/Characters/PunisherCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APunisherCharacter_GetRMBTimerValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APunisherCharacter, nullptr, "GetRMBTimerValue", nullptr, nullptr, Z_Construct_UFunction_APunisherCharacter_GetRMBTimerValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APunisherCharacter_GetRMBTimerValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_APunisherCharacter_GetRMBTimerValue_Statics::PunisherCharacter_eventGetRMBTimerValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APunisherCharacter_GetRMBTimerValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_APunisherCharacter_GetRMBTimerValue_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APunisherCharacter_GetRMBTimerValue_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_APunisherCharacter_GetRMBTimerValue_Statics::PunisherCharacter_eventGetRMBTimerValue_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_APunisherCharacter_GetRMBTimerValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APunisherCharacter_GetRMBTimerValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APunisherCharacter_GetShotgunAmmunition_Statics
	{
		struct PunisherCharacter_eventGetShotgunAmmunition_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APunisherCharacter_GetShotgunAmmunition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PunisherCharacter_eventGetShotgunAmmunition_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APunisherCharacter_GetShotgunAmmunition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APunisherCharacter_GetShotgunAmmunition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APunisherCharacter_GetShotgunAmmunition_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Punisher/Characters/PunisherCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APunisherCharacter_GetShotgunAmmunition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APunisherCharacter, nullptr, "GetShotgunAmmunition", nullptr, nullptr, Z_Construct_UFunction_APunisherCharacter_GetShotgunAmmunition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APunisherCharacter_GetShotgunAmmunition_Statics::PropPointers), sizeof(Z_Construct_UFunction_APunisherCharacter_GetShotgunAmmunition_Statics::PunisherCharacter_eventGetShotgunAmmunition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APunisherCharacter_GetShotgunAmmunition_Statics::Function_MetaDataParams), Z_Construct_UFunction_APunisherCharacter_GetShotgunAmmunition_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APunisherCharacter_GetShotgunAmmunition_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_APunisherCharacter_GetShotgunAmmunition_Statics::PunisherCharacter_eventGetShotgunAmmunition_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_APunisherCharacter_GetShotgunAmmunition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APunisherCharacter_GetShotgunAmmunition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APunisherCharacter_GetSMGAmmunition_Statics
	{
		struct PunisherCharacter_eventGetSMGAmmunition_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APunisherCharacter_GetSMGAmmunition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PunisherCharacter_eventGetSMGAmmunition_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APunisherCharacter_GetSMGAmmunition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APunisherCharacter_GetSMGAmmunition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APunisherCharacter_GetSMGAmmunition_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Punisher/Characters/PunisherCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APunisherCharacter_GetSMGAmmunition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APunisherCharacter, nullptr, "GetSMGAmmunition", nullptr, nullptr, Z_Construct_UFunction_APunisherCharacter_GetSMGAmmunition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APunisherCharacter_GetSMGAmmunition_Statics::PropPointers), sizeof(Z_Construct_UFunction_APunisherCharacter_GetSMGAmmunition_Statics::PunisherCharacter_eventGetSMGAmmunition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APunisherCharacter_GetSMGAmmunition_Statics::Function_MetaDataParams), Z_Construct_UFunction_APunisherCharacter_GetSMGAmmunition_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APunisherCharacter_GetSMGAmmunition_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_APunisherCharacter_GetSMGAmmunition_Statics::PunisherCharacter_eventGetSMGAmmunition_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_APunisherCharacter_GetSMGAmmunition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APunisherCharacter_GetSMGAmmunition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APunisherCharacter_GetTurretActiveStatus_Statics
	{
		struct PunisherCharacter_eventGetTurretActiveStatus_Parms
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
	void Z_Construct_UFunction_APunisherCharacter_GetTurretActiveStatus_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PunisherCharacter_eventGetTurretActiveStatus_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APunisherCharacter_GetTurretActiveStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PunisherCharacter_eventGetTurretActiveStatus_Parms), &Z_Construct_UFunction_APunisherCharacter_GetTurretActiveStatus_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APunisherCharacter_GetTurretActiveStatus_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APunisherCharacter_GetTurretActiveStatus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APunisherCharacter_GetTurretActiveStatus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Punisher/Characters/PunisherCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APunisherCharacter_GetTurretActiveStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APunisherCharacter, nullptr, "GetTurretActiveStatus", nullptr, nullptr, Z_Construct_UFunction_APunisherCharacter_GetTurretActiveStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APunisherCharacter_GetTurretActiveStatus_Statics::PropPointers), sizeof(Z_Construct_UFunction_APunisherCharacter_GetTurretActiveStatus_Statics::PunisherCharacter_eventGetTurretActiveStatus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APunisherCharacter_GetTurretActiveStatus_Statics::Function_MetaDataParams), Z_Construct_UFunction_APunisherCharacter_GetTurretActiveStatus_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APunisherCharacter_GetTurretActiveStatus_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_APunisherCharacter_GetTurretActiveStatus_Statics::PunisherCharacter_eventGetTurretActiveStatus_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_APunisherCharacter_GetTurretActiveStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APunisherCharacter_GetTurretActiveStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APunisherCharacter_GetTurretAmmo_Statics
	{
		struct PunisherCharacter_eventGetTurretAmmo_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APunisherCharacter_GetTurretAmmo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PunisherCharacter_eventGetTurretAmmo_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APunisherCharacter_GetTurretAmmo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APunisherCharacter_GetTurretAmmo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APunisherCharacter_GetTurretAmmo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Punisher/Characters/PunisherCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APunisherCharacter_GetTurretAmmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APunisherCharacter, nullptr, "GetTurretAmmo", nullptr, nullptr, Z_Construct_UFunction_APunisherCharacter_GetTurretAmmo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APunisherCharacter_GetTurretAmmo_Statics::PropPointers), sizeof(Z_Construct_UFunction_APunisherCharacter_GetTurretAmmo_Statics::PunisherCharacter_eventGetTurretAmmo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APunisherCharacter_GetTurretAmmo_Statics::Function_MetaDataParams), Z_Construct_UFunction_APunisherCharacter_GetTurretAmmo_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APunisherCharacter_GetTurretAmmo_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_APunisherCharacter_GetTurretAmmo_Statics::PunisherCharacter_eventGetTurretAmmo_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_APunisherCharacter_GetTurretAmmo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APunisherCharacter_GetTurretAmmo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APunisherCharacter_GetTurretTimerValue_Statics
	{
		struct PunisherCharacter_eventGetTurretTimerValue_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APunisherCharacter_GetTurretTimerValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PunisherCharacter_eventGetTurretTimerValue_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APunisherCharacter_GetTurretTimerValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APunisherCharacter_GetTurretTimerValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APunisherCharacter_GetTurretTimerValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Punisher/Characters/PunisherCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APunisherCharacter_GetTurretTimerValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APunisherCharacter, nullptr, "GetTurretTimerValue", nullptr, nullptr, Z_Construct_UFunction_APunisherCharacter_GetTurretTimerValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APunisherCharacter_GetTurretTimerValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_APunisherCharacter_GetTurretTimerValue_Statics::PunisherCharacter_eventGetTurretTimerValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APunisherCharacter_GetTurretTimerValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_APunisherCharacter_GetTurretTimerValue_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APunisherCharacter_GetTurretTimerValue_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_APunisherCharacter_GetTurretTimerValue_Statics::PunisherCharacter_eventGetTurretTimerValue_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_APunisherCharacter_GetTurretTimerValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APunisherCharacter_GetTurretTimerValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APunisherCharacter_IsDead_Statics
	{
		struct PunisherCharacter_eventIsDead_Parms
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
	void Z_Construct_UFunction_APunisherCharacter_IsDead_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PunisherCharacter_eventIsDead_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APunisherCharacter_IsDead_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PunisherCharacter_eventIsDead_Parms), &Z_Construct_UFunction_APunisherCharacter_IsDead_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APunisherCharacter_IsDead_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APunisherCharacter_IsDead_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APunisherCharacter_IsDead_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Punisher/Characters/PunisherCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APunisherCharacter_IsDead_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APunisherCharacter, nullptr, "IsDead", nullptr, nullptr, Z_Construct_UFunction_APunisherCharacter_IsDead_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APunisherCharacter_IsDead_Statics::PropPointers), sizeof(Z_Construct_UFunction_APunisherCharacter_IsDead_Statics::PunisherCharacter_eventIsDead_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APunisherCharacter_IsDead_Statics::Function_MetaDataParams), Z_Construct_UFunction_APunisherCharacter_IsDead_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APunisherCharacter_IsDead_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_APunisherCharacter_IsDead_Statics::PunisherCharacter_eventIsDead_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_APunisherCharacter_IsDead()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APunisherCharacter_IsDead_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APunisherCharacter_IsTurretStarted_Statics
	{
		struct PunisherCharacter_eventIsTurretStarted_Parms
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
	void Z_Construct_UFunction_APunisherCharacter_IsTurretStarted_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PunisherCharacter_eventIsTurretStarted_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APunisherCharacter_IsTurretStarted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PunisherCharacter_eventIsTurretStarted_Parms), &Z_Construct_UFunction_APunisherCharacter_IsTurretStarted_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APunisherCharacter_IsTurretStarted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APunisherCharacter_IsTurretStarted_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APunisherCharacter_IsTurretStarted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Punisher/Characters/PunisherCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APunisherCharacter_IsTurretStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APunisherCharacter, nullptr, "IsTurretStarted", nullptr, nullptr, Z_Construct_UFunction_APunisherCharacter_IsTurretStarted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APunisherCharacter_IsTurretStarted_Statics::PropPointers), sizeof(Z_Construct_UFunction_APunisherCharacter_IsTurretStarted_Statics::PunisherCharacter_eventIsTurretStarted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APunisherCharacter_IsTurretStarted_Statics::Function_MetaDataParams), Z_Construct_UFunction_APunisherCharacter_IsTurretStarted_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APunisherCharacter_IsTurretStarted_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_APunisherCharacter_IsTurretStarted_Statics::PunisherCharacter_eventIsTurretStarted_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_APunisherCharacter_IsTurretStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APunisherCharacter_IsTurretStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APunisherCharacter_LMBFireBtnPressed_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APunisherCharacter_LMBFireBtnPressed_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** LMB Primary Attack **/" },
#endif
		{ "ModuleRelativePath", "Public/Punisher/Characters/PunisherCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "LMB Primary Attack *" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APunisherCharacter_LMBFireBtnPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APunisherCharacter, nullptr, "LMBFireBtnPressed", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APunisherCharacter_LMBFireBtnPressed_Statics::Function_MetaDataParams), Z_Construct_UFunction_APunisherCharacter_LMBFireBtnPressed_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_APunisherCharacter_LMBFireBtnPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APunisherCharacter_LMBFireBtnPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APunisherCharacter_LMBFireBtnReleased_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APunisherCharacter_LMBFireBtnReleased_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Punisher/Characters/PunisherCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APunisherCharacter_LMBFireBtnReleased_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APunisherCharacter, nullptr, "LMBFireBtnReleased", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APunisherCharacter_LMBFireBtnReleased_Statics::Function_MetaDataParams), Z_Construct_UFunction_APunisherCharacter_LMBFireBtnReleased_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_APunisherCharacter_LMBFireBtnReleased()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APunisherCharacter_LMBFireBtnReleased_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APunisherCharacter_LMBShotGunAttack_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APunisherCharacter_LMBShotGunAttack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Punisher/Characters/PunisherCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APunisherCharacter_LMBShotGunAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APunisherCharacter, nullptr, "LMBShotGunAttack", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APunisherCharacter_LMBShotGunAttack_Statics::Function_MetaDataParams), Z_Construct_UFunction_APunisherCharacter_LMBShotGunAttack_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_APunisherCharacter_LMBShotGunAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APunisherCharacter_LMBShotGunAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APunisherCharacter_PreEndTurretAction_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APunisherCharacter_PreEndTurretAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Punisher/Characters/PunisherCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APunisherCharacter_PreEndTurretAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APunisherCharacter, nullptr, "PreEndTurretAction", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APunisherCharacter_PreEndTurretAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_APunisherCharacter_PreEndTurretAction_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_APunisherCharacter_PreEndTurretAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APunisherCharacter_PreEndTurretAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APunisherCharacter_ReloadGunWrapper_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APunisherCharacter_ReloadGunWrapper_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Punisher/Characters/PunisherCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APunisherCharacter_ReloadGunWrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APunisherCharacter, nullptr, "ReloadGunWrapper", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APunisherCharacter_ReloadGunWrapper_Statics::Function_MetaDataParams), Z_Construct_UFunction_APunisherCharacter_ReloadGunWrapper_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_APunisherCharacter_ReloadGunWrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APunisherCharacter_ReloadGunWrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APunisherCharacter_RMBSmokeImpact_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APunisherCharacter_RMBSmokeImpact_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Punisher/Characters/PunisherCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APunisherCharacter_RMBSmokeImpact_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APunisherCharacter, nullptr, "RMBSmokeImpact", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APunisherCharacter_RMBSmokeImpact_Statics::Function_MetaDataParams), Z_Construct_UFunction_APunisherCharacter_RMBSmokeImpact_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_APunisherCharacter_RMBSmokeImpact()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APunisherCharacter_RMBSmokeImpact_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APunisherCharacter_ShiftGrappleHook_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APunisherCharacter_ShiftGrappleHook_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Punisher/Characters/PunisherCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APunisherCharacter_ShiftGrappleHook_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APunisherCharacter, nullptr, "ShiftGrappleHook", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APunisherCharacter_ShiftGrappleHook_Statics::Function_MetaDataParams), Z_Construct_UFunction_APunisherCharacter_ShiftGrappleHook_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_APunisherCharacter_ShiftGrappleHook()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APunisherCharacter_ShiftGrappleHook_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APunisherCharacter_StartFireTimer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APunisherCharacter_StartFireTimer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Punisher/Characters/PunisherCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APunisherCharacter_StartFireTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APunisherCharacter, nullptr, "StartFireTimer", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APunisherCharacter_StartFireTimer_Statics::Function_MetaDataParams), Z_Construct_UFunction_APunisherCharacter_StartFireTimer_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_APunisherCharacter_StartFireTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APunisherCharacter_StartFireTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APunisherCharacter_SwitchWeapon_Statics
	{
		struct PunisherCharacter_eventSwitchWeapon_Parms
		{
			int32 KeyPressed;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_KeyPressed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APunisherCharacter_SwitchWeapon_Statics::NewProp_KeyPressed = { "KeyPressed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PunisherCharacter_eventSwitchWeapon_Parms, KeyPressed), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APunisherCharacter_SwitchWeapon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APunisherCharacter_SwitchWeapon_Statics::NewProp_KeyPressed,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APunisherCharacter_SwitchWeapon_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/Punisher/Characters/PunisherCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APunisherCharacter_SwitchWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APunisherCharacter, nullptr, "SwitchWeapon", nullptr, nullptr, Z_Construct_UFunction_APunisherCharacter_SwitchWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APunisherCharacter_SwitchWeapon_Statics::PropPointers), sizeof(Z_Construct_UFunction_APunisherCharacter_SwitchWeapon_Statics::PunisherCharacter_eventSwitchWeapon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APunisherCharacter_SwitchWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_APunisherCharacter_SwitchWeapon_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APunisherCharacter_SwitchWeapon_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_APunisherCharacter_SwitchWeapon_Statics::PunisherCharacter_eventSwitchWeapon_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_APunisherCharacter_SwitchWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APunisherCharacter_SwitchWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APunisherCharacter);
	UClass* Z_Construct_UClass_APunisherCharacter_NoRegister()
	{
		return APunisherCharacter::StaticClass();
	}
	struct Z_Construct_UClass_APunisherCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDebugMode_MetaData[];
#endif
		static void NewProp_bDebugMode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebugMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsHealthLow_MetaData[];
#endif
		static void NewProp_bIsHealthLow_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsHealthLow;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeathSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DeathSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MachineGunMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MachineGunMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GrappleCableMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GrappleCableMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Health;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LMBFireSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LMBFireSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MuzzleFlash_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MuzzleFlash;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HipFireMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HipFireMontage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryImpactParticles_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PrimaryImpactParticles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LMBPreShotgunFireSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LMBPreShotgunFireSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LMBShotgunFireSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LMBShotgunFireSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShotgunMuzzleFlash_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ShotgunMuzzleFlash;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShotgunImpactParticles_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ShotgunImpactParticles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GrappleHookDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GrappleHookDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GrappleAnimMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GrappleAnimMontage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GrappleHookRappelSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GrappleHookRappelSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GrappleHookSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GrappleHookSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GrappleImpactParticles_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GrappleImpactParticles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BeamParticles_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BeamParticles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RMBMuzzleFlash_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RMBMuzzleFlash;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RMBImpactParticles_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RMBImpactParticles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RMBFireSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RMBFireSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SmokeGrenadeImpactForce_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SmokeGrenadeImpactForce;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TurretLMBFireSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TurretLMBFireSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TurretMuzzleFlash_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TurretMuzzleFlash;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SMGReloadingSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SMGReloadingSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SMGReloadTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SMGReloadTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShotgunReloadingSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ShotgunReloadingSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShotgunReloadTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ShotgunReloadTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APunisherCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ARivalsMechanicsCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_RivalsMechanics,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APunisherCharacter_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_APunisherCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APunisherCharacter_AttackAI, "AttackAI" }, // 1471233666
		{ &Z_Construct_UFunction_APunisherCharacter_AutoFireResetTimer, "AutoFireResetTimer" }, // 4108205716
		{ &Z_Construct_UFunction_APunisherCharacter_ETurretButton, "ETurretButton" }, // 1035774751
		{ &Z_Construct_UFunction_APunisherCharacter_GetActiveWeapon, "GetActiveWeapon" }, // 896226665
		{ &Z_Construct_UFunction_APunisherCharacter_GetBeamEndLocation, "GetBeamEndLocation" }, // 3161754126
		{ &Z_Construct_UFunction_APunisherCharacter_GetGrappleTimerValue, "GetGrappleTimerValue" }, // 2685665013
		{ &Z_Construct_UFunction_APunisherCharacter_GetHealth, "GetHealth" }, // 52296502
		{ &Z_Construct_UFunction_APunisherCharacter_GetHealthPercent, "GetHealthPercent" }, // 1473254648
		{ &Z_Construct_UFunction_APunisherCharacter_GetMaxHealth, "GetMaxHealth" }, // 1516087431
		{ &Z_Construct_UFunction_APunisherCharacter_GetReloadingStatus, "GetReloadingStatus" }, // 2350628972
		{ &Z_Construct_UFunction_APunisherCharacter_GetRMBTimerValue, "GetRMBTimerValue" }, // 2606600645
		{ &Z_Construct_UFunction_APunisherCharacter_GetShotgunAmmunition, "GetShotgunAmmunition" }, // 2739370949
		{ &Z_Construct_UFunction_APunisherCharacter_GetSMGAmmunition, "GetSMGAmmunition" }, // 1568665592
		{ &Z_Construct_UFunction_APunisherCharacter_GetTurretActiveStatus, "GetTurretActiveStatus" }, // 211577975
		{ &Z_Construct_UFunction_APunisherCharacter_GetTurretAmmo, "GetTurretAmmo" }, // 3023985463
		{ &Z_Construct_UFunction_APunisherCharacter_GetTurretTimerValue, "GetTurretTimerValue" }, // 2399672936
		{ &Z_Construct_UFunction_APunisherCharacter_IsDead, "IsDead" }, // 3175252246
		{ &Z_Construct_UFunction_APunisherCharacter_IsTurretStarted, "IsTurretStarted" }, // 956661273
		{ &Z_Construct_UFunction_APunisherCharacter_LMBFireBtnPressed, "LMBFireBtnPressed" }, // 818024626
		{ &Z_Construct_UFunction_APunisherCharacter_LMBFireBtnReleased, "LMBFireBtnReleased" }, // 733433945
		{ &Z_Construct_UFunction_APunisherCharacter_LMBShotGunAttack, "LMBShotGunAttack" }, // 3032291193
		{ &Z_Construct_UFunction_APunisherCharacter_PreEndTurretAction, "PreEndTurretAction" }, // 3906893063
		{ &Z_Construct_UFunction_APunisherCharacter_ReloadGunWrapper, "ReloadGunWrapper" }, // 2372263194
		{ &Z_Construct_UFunction_APunisherCharacter_RMBSmokeImpact, "RMBSmokeImpact" }, // 2913417499
		{ &Z_Construct_UFunction_APunisherCharacter_ShiftGrappleHook, "ShiftGrappleHook" }, // 101502947
		{ &Z_Construct_UFunction_APunisherCharacter_StartFireTimer, "StartFireTimer" }, // 643798259
		{ &Z_Construct_UFunction_APunisherCharacter_SwitchWeapon, "SwitchWeapon" }, // 2132193030
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APunisherCharacter_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APunisherCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Punisher/Characters/PunisherCharacter.h" },
		{ "ModuleRelativePath", "Public/Punisher/Characters/PunisherCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APunisherCharacter_Statics::NewProp_bDebugMode_MetaData[] = {
		{ "Category", "PunisherCharacter" },
		{ "ModuleRelativePath", "Public/Punisher/Characters/PunisherCharacter.h" },
	};
#endif
	void Z_Construct_UClass_APunisherCharacter_Statics::NewProp_bDebugMode_SetBit(void* Obj)
	{
		((APunisherCharacter*)Obj)->bDebugMode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APunisherCharacter_Statics::NewProp_bDebugMode = { "bDebugMode", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(APunisherCharacter), &Z_Construct_UClass_APunisherCharacter_Statics::NewProp_bDebugMode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APunisherCharacter_Statics::NewProp_bDebugMode_MetaData), Z_Construct_UClass_APunisherCharacter_Statics::NewProp_bDebugMode_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APunisherCharacter_Statics::NewProp_bIsHealthLow_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "PunisherCharacter" },
		{ "ModuleRelativePath", "Public/Punisher/Characters/PunisherCharacter.h" },
	};
#endif
	void Z_Construct_UClass_APunisherCharacter_Statics::NewProp_bIsHealthLow_SetBit(void* Obj)
	{
		((APunisherCharacter*)Obj)->bIsHealthLow = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APunisherCharacter_Statics::NewProp_bIsHealthLow = { "bIsHealthLow", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(APunisherCharacter), &Z_Construct_UClass_APunisherCharacter_Statics::NewProp_bIsHealthLow_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APunisherCharacter_Statics::NewProp_bIsHealthLow_MetaData), Z_Construct_UClass_APunisherCharacter_Statics::NewProp_bIsHealthLow_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APunisherCharacter_Statics::NewProp_DeathSound_MetaData[] = {
		{ "Category", "Configurations" },
		{ "ModuleRelativePath", "Public/Punisher/Characters/PunisherCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APunisherCharacter_Statics::NewProp_DeathSound = { "DeathSound", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APunisherCharacter, DeathSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APunisherCharacter_Statics::NewProp_DeathSound_MetaData), Z_Construct_UClass_APunisherCharacter_Statics::NewProp_DeathSound_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APunisherCharacter_Statics::NewProp_MachineGunMesh_MetaData[] = {
		{ "Category", "PunisherCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Punisher/Characters/PunisherCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APunisherCharacter_Statics::NewProp_MachineGunMesh = { "MachineGunMesh", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APunisherCharacter, MachineGunMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APunisherCharacter_Statics::NewProp_MachineGunMesh_MetaData), Z_Construct_UClass_APunisherCharacter_Statics::NewProp_MachineGunMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APunisherCharacter_Statics::NewProp_GrappleCableMesh_MetaData[] = {
		{ "Category", "PunisherCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Punisher/Characters/PunisherCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APunisherCharacter_Statics::NewProp_GrappleCableMesh = { "GrappleCableMesh", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APunisherCharacter, GrappleCableMesh), Z_Construct_UClass_UCableComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APunisherCharacter_Statics::NewProp_GrappleCableMesh_MetaData), Z_Construct_UClass_APunisherCharacter_Statics::NewProp_GrappleCableMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APunisherCharacter_Statics::NewProp_MaxHealth_MetaData[] = {
		{ "Category", "PunisherCharacter" },
		{ "ModuleRelativePath", "Public/Punisher/Characters/PunisherCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APunisherCharacter_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APunisherCharacter, MaxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APunisherCharacter_Statics::NewProp_MaxHealth_MetaData), Z_Construct_UClass_APunisherCharacter_Statics::NewProp_MaxHealth_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APunisherCharacter_Statics::NewProp_Health_MetaData[] = {
		{ "Category", "PunisherCharacter" },
		{ "ModuleRelativePath", "Public/Punisher/Characters/PunisherCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APunisherCharacter_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APunisherCharacter, Health), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APunisherCharacter_Statics::NewProp_Health_MetaData), Z_Construct_UClass_APunisherCharacter_Statics::NewProp_Health_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APunisherCharacter_Statics::NewProp_LMBFireSound_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PrimaryConfig" },
		{ "ModuleRelativePath", "Public/Punisher/Characters/PunisherCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APunisherCharacter_Statics::NewProp_LMBFireSound = { "LMBFireSound", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APunisherCharacter, LMBFireSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APunisherCharacter_Statics::NewProp_LMBFireSound_MetaData), Z_Construct_UClass_APunisherCharacter_Statics::NewProp_LMBFireSound_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APunisherCharacter_Statics::NewProp_MuzzleFlash_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PrimaryConfig" },
		{ "ModuleRelativePath", "Public/Punisher/Characters/PunisherCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APunisherCharacter_Statics::NewProp_MuzzleFlash = { "MuzzleFlash", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APunisherCharacter, MuzzleFlash), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APunisherCharacter_Statics::NewProp_MuzzleFlash_MetaData), Z_Construct_UClass_APunisherCharacter_Statics::NewProp_MuzzleFlash_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APunisherCharacter_Statics::NewProp_HipFireMontage_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PrimaryConfig" },
		{ "ModuleRelativePath", "Public/Punisher/Characters/PunisherCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APunisherCharacter_Statics::NewProp_HipFireMontage = { "HipFireMontage", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APunisherCharacter, HipFireMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APunisherCharacter_Statics::NewProp_HipFireMontage_MetaData), Z_Construct_UClass_APunisherCharacter_Statics::NewProp_HipFireMontage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APunisherCharacter_Statics::NewProp_PrimaryImpactParticles_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PrimaryConfig" },
		{ "ModuleRelativePath", "Public/Punisher/Characters/PunisherCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APunisherCharacter_Statics::NewProp_PrimaryImpactParticles = { "PrimaryImpactParticles", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APunisherCharacter, PrimaryImpactParticles), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APunisherCharacter_Statics::NewProp_PrimaryImpactParticles_MetaData), Z_Construct_UClass_APunisherCharacter_Statics::NewProp_PrimaryImpactParticles_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APunisherCharacter_Statics::NewProp_LMBPreShotgunFireSound_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "SecondaryConfig" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//secondary Config\n" },
#endif
		{ "ModuleRelativePath", "Public/Punisher/Characters/PunisherCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "secondary Config" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APunisherCharacter_Statics::NewProp_LMBPreShotgunFireSound = { "LMBPreShotgunFireSound", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APunisherCharacter, LMBPreShotgunFireSound), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APunisherCharacter_Statics::NewProp_LMBPreShotgunFireSound_MetaData), Z_Construct_UClass_APunisherCharacter_Statics::NewProp_LMBPreShotgunFireSound_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APunisherCharacter_Statics::NewProp_LMBShotgunFireSound_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "SecondaryConfig" },
		{ "ModuleRelativePath", "Public/Punisher/Characters/PunisherCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APunisherCharacter_Statics::NewProp_LMBShotgunFireSound = { "LMBShotgunFireSound", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APunisherCharacter, LMBShotgunFireSound), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APunisherCharacter_Statics::NewProp_LMBShotgunFireSound_MetaData), Z_Construct_UClass_APunisherCharacter_Statics::NewProp_LMBShotgunFireSound_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APunisherCharacter_Statics::NewProp_ShotgunMuzzleFlash_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "SecondaryConfig" },
		{ "ModuleRelativePath", "Public/Punisher/Characters/PunisherCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APunisherCharacter_Statics::NewProp_ShotgunMuzzleFlash = { "ShotgunMuzzleFlash", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APunisherCharacter, ShotgunMuzzleFlash), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APunisherCharacter_Statics::NewProp_ShotgunMuzzleFlash_MetaData), Z_Construct_UClass_APunisherCharacter_Statics::NewProp_ShotgunMuzzleFlash_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APunisherCharacter_Statics::NewProp_ShotgunImpactParticles_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "SecondaryConfig" },
		{ "ModuleRelativePath", "Public/Punisher/Characters/PunisherCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APunisherCharacter_Statics::NewProp_ShotgunImpactParticles = { "ShotgunImpactParticles", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APunisherCharacter, ShotgunImpactParticles), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APunisherCharacter_Statics::NewProp_ShotgunImpactParticles_MetaData), Z_Construct_UClass_APunisherCharacter_Statics::NewProp_ShotgunImpactParticles_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APunisherCharacter_Statics::NewProp_GrappleHookDistance_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "RappleConfig" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//rapple config\n" },
#endif
		{ "ModuleRelativePath", "Public/Punisher/Characters/PunisherCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "rapple config" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APunisherCharacter_Statics::NewProp_GrappleHookDistance = { "GrappleHookDistance", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APunisherCharacter, GrappleHookDistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APunisherCharacter_Statics::NewProp_GrappleHookDistance_MetaData), Z_Construct_UClass_APunisherCharacter_Statics::NewProp_GrappleHookDistance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APunisherCharacter_Statics::NewProp_GrappleAnimMontage_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "RappleConfig" },
		{ "ModuleRelativePath", "Public/Punisher/Characters/PunisherCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APunisherCharacter_Statics::NewProp_GrappleAnimMontage = { "GrappleAnimMontage", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APunisherCharacter, GrappleAnimMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APunisherCharacter_Statics::NewProp_GrappleAnimMontage_MetaData), Z_Construct_UClass_APunisherCharacter_Statics::NewProp_GrappleAnimMontage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APunisherCharacter_Statics::NewProp_GrappleHookRappelSound_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "RappleConfig" },
		{ "ModuleRelativePath", "Public/Punisher/Characters/PunisherCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APunisherCharacter_Statics::NewProp_GrappleHookRappelSound = { "GrappleHookRappelSound", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APunisherCharacter, GrappleHookRappelSound), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APunisherCharacter_Statics::NewProp_GrappleHookRappelSound_MetaData), Z_Construct_UClass_APunisherCharacter_Statics::NewProp_GrappleHookRappelSound_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APunisherCharacter_Statics::NewProp_GrappleHookSound_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "RappleConfig" },
		{ "ModuleRelativePath", "Public/Punisher/Characters/PunisherCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APunisherCharacter_Statics::NewProp_GrappleHookSound = { "GrappleHookSound", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APunisherCharacter, GrappleHookSound), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APunisherCharacter_Statics::NewProp_GrappleHookSound_MetaData), Z_Construct_UClass_APunisherCharacter_Statics::NewProp_GrappleHookSound_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APunisherCharacter_Statics::NewProp_GrappleImpactParticles_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "RappleConfig" },
		{ "ModuleRelativePath", "Public/Punisher/Characters/PunisherCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APunisherCharacter_Statics::NewProp_GrappleImpactParticles = { "GrappleImpactParticles", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APunisherCharacter, GrappleImpactParticles), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APunisherCharacter_Statics::NewProp_GrappleImpactParticles_MetaData), Z_Construct_UClass_APunisherCharacter_Statics::NewProp_GrappleImpactParticles_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APunisherCharacter_Statics::NewProp_BeamParticles_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Smoke Trails for bullets\n" },
#endif
		{ "ModuleRelativePath", "Public/Punisher/Characters/PunisherCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Smoke Trails for bullets" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APunisherCharacter_Statics::NewProp_BeamParticles = { "BeamParticles", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APunisherCharacter, BeamParticles), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APunisherCharacter_Statics::NewProp_BeamParticles_MetaData), Z_Construct_UClass_APunisherCharacter_Statics::NewProp_BeamParticles_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APunisherCharacter_Statics::NewProp_RMBMuzzleFlash_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "SmokeConfig" },
		{ "ModuleRelativePath", "Public/Punisher/Characters/PunisherCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APunisherCharacter_Statics::NewProp_RMBMuzzleFlash = { "RMBMuzzleFlash", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APunisherCharacter, RMBMuzzleFlash), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APunisherCharacter_Statics::NewProp_RMBMuzzleFlash_MetaData), Z_Construct_UClass_APunisherCharacter_Statics::NewProp_RMBMuzzleFlash_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APunisherCharacter_Statics::NewProp_RMBImpactParticles_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "SmokeConfig" },
		{ "ModuleRelativePath", "Public/Punisher/Characters/PunisherCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APunisherCharacter_Statics::NewProp_RMBImpactParticles = { "RMBImpactParticles", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APunisherCharacter, RMBImpactParticles), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APunisherCharacter_Statics::NewProp_RMBImpactParticles_MetaData), Z_Construct_UClass_APunisherCharacter_Statics::NewProp_RMBImpactParticles_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APunisherCharacter_Statics::NewProp_RMBFireSound_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "SmokeConfig" },
		{ "ModuleRelativePath", "Public/Punisher/Characters/PunisherCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APunisherCharacter_Statics::NewProp_RMBFireSound = { "RMBFireSound", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APunisherCharacter, RMBFireSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APunisherCharacter_Statics::NewProp_RMBFireSound_MetaData), Z_Construct_UClass_APunisherCharacter_Statics::NewProp_RMBFireSound_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APunisherCharacter_Statics::NewProp_SmokeGrenadeImpactForce_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "SmokeConfig" },
		{ "ModuleRelativePath", "Public/Punisher/Characters/PunisherCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APunisherCharacter_Statics::NewProp_SmokeGrenadeImpactForce = { "SmokeGrenadeImpactForce", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APunisherCharacter, SmokeGrenadeImpactForce), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APunisherCharacter_Statics::NewProp_SmokeGrenadeImpactForce_MetaData), Z_Construct_UClass_APunisherCharacter_Statics::NewProp_SmokeGrenadeImpactForce_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APunisherCharacter_Statics::NewProp_TurretLMBFireSound_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "TurretConfig" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**Turret Variables*/" },
#endif
		{ "ModuleRelativePath", "Public/Punisher/Characters/PunisherCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Turret Variables" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APunisherCharacter_Statics::NewProp_TurretLMBFireSound = { "TurretLMBFireSound", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APunisherCharacter, TurretLMBFireSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APunisherCharacter_Statics::NewProp_TurretLMBFireSound_MetaData), Z_Construct_UClass_APunisherCharacter_Statics::NewProp_TurretLMBFireSound_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APunisherCharacter_Statics::NewProp_TurretMuzzleFlash_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "TurretConfig" },
		{ "ModuleRelativePath", "Public/Punisher/Characters/PunisherCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APunisherCharacter_Statics::NewProp_TurretMuzzleFlash = { "TurretMuzzleFlash", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APunisherCharacter, TurretMuzzleFlash), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APunisherCharacter_Statics::NewProp_TurretMuzzleFlash_MetaData), Z_Construct_UClass_APunisherCharacter_Statics::NewProp_TurretMuzzleFlash_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APunisherCharacter_Statics::NewProp_SMGReloadingSound_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PrimaryConfig" },
		{ "ModuleRelativePath", "Public/Punisher/Characters/PunisherCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APunisherCharacter_Statics::NewProp_SMGReloadingSound = { "SMGReloadingSound", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APunisherCharacter, SMGReloadingSound), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APunisherCharacter_Statics::NewProp_SMGReloadingSound_MetaData), Z_Construct_UClass_APunisherCharacter_Statics::NewProp_SMGReloadingSound_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APunisherCharacter_Statics::NewProp_SMGReloadTime_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PrimaryConfig" },
		{ "ModuleRelativePath", "Public/Punisher/Characters/PunisherCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APunisherCharacter_Statics::NewProp_SMGReloadTime = { "SMGReloadTime", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APunisherCharacter, SMGReloadTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APunisherCharacter_Statics::NewProp_SMGReloadTime_MetaData), Z_Construct_UClass_APunisherCharacter_Statics::NewProp_SMGReloadTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APunisherCharacter_Statics::NewProp_ShotgunReloadingSound_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "SecondaryConfig" },
		{ "ModuleRelativePath", "Public/Punisher/Characters/PunisherCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APunisherCharacter_Statics::NewProp_ShotgunReloadingSound = { "ShotgunReloadingSound", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APunisherCharacter, ShotgunReloadingSound), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APunisherCharacter_Statics::NewProp_ShotgunReloadingSound_MetaData), Z_Construct_UClass_APunisherCharacter_Statics::NewProp_ShotgunReloadingSound_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APunisherCharacter_Statics::NewProp_ShotgunReloadTime_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "SecondaryConfig" },
		{ "ModuleRelativePath", "Public/Punisher/Characters/PunisherCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APunisherCharacter_Statics::NewProp_ShotgunReloadTime = { "ShotgunReloadTime", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APunisherCharacter, ShotgunReloadTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APunisherCharacter_Statics::NewProp_ShotgunReloadTime_MetaData), Z_Construct_UClass_APunisherCharacter_Statics::NewProp_ShotgunReloadTime_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APunisherCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APunisherCharacter_Statics::NewProp_bDebugMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APunisherCharacter_Statics::NewProp_bIsHealthLow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APunisherCharacter_Statics::NewProp_DeathSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APunisherCharacter_Statics::NewProp_MachineGunMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APunisherCharacter_Statics::NewProp_GrappleCableMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APunisherCharacter_Statics::NewProp_MaxHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APunisherCharacter_Statics::NewProp_Health,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APunisherCharacter_Statics::NewProp_LMBFireSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APunisherCharacter_Statics::NewProp_MuzzleFlash,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APunisherCharacter_Statics::NewProp_HipFireMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APunisherCharacter_Statics::NewProp_PrimaryImpactParticles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APunisherCharacter_Statics::NewProp_LMBPreShotgunFireSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APunisherCharacter_Statics::NewProp_LMBShotgunFireSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APunisherCharacter_Statics::NewProp_ShotgunMuzzleFlash,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APunisherCharacter_Statics::NewProp_ShotgunImpactParticles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APunisherCharacter_Statics::NewProp_GrappleHookDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APunisherCharacter_Statics::NewProp_GrappleAnimMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APunisherCharacter_Statics::NewProp_GrappleHookRappelSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APunisherCharacter_Statics::NewProp_GrappleHookSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APunisherCharacter_Statics::NewProp_GrappleImpactParticles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APunisherCharacter_Statics::NewProp_BeamParticles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APunisherCharacter_Statics::NewProp_RMBMuzzleFlash,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APunisherCharacter_Statics::NewProp_RMBImpactParticles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APunisherCharacter_Statics::NewProp_RMBFireSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APunisherCharacter_Statics::NewProp_SmokeGrenadeImpactForce,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APunisherCharacter_Statics::NewProp_TurretLMBFireSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APunisherCharacter_Statics::NewProp_TurretMuzzleFlash,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APunisherCharacter_Statics::NewProp_SMGReloadingSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APunisherCharacter_Statics::NewProp_SMGReloadTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APunisherCharacter_Statics::NewProp_ShotgunReloadingSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APunisherCharacter_Statics::NewProp_ShotgunReloadTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APunisherCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APunisherCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APunisherCharacter_Statics::ClassParams = {
		&APunisherCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APunisherCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APunisherCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APunisherCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_APunisherCharacter_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APunisherCharacter_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_APunisherCharacter()
	{
		if (!Z_Registration_Info_UClass_APunisherCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APunisherCharacter.OuterSingleton, Z_Construct_UClass_APunisherCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APunisherCharacter.OuterSingleton;
	}
	template<> RIVALSMECHANICS_API UClass* StaticClass<APunisherCharacter>()
	{
		return APunisherCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APunisherCharacter);
	APunisherCharacter::~APunisherCharacter() {}
	struct Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Punisher_Characters_PunisherCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Punisher_Characters_PunisherCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APunisherCharacter, APunisherCharacter::StaticClass, TEXT("APunisherCharacter"), &Z_Registration_Info_UClass_APunisherCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APunisherCharacter), 3675088099U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Punisher_Characters_PunisherCharacter_h_3648595144(TEXT("/Script/RivalsMechanics"),
		Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Punisher_Characters_PunisherCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Punisher_Characters_PunisherCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
