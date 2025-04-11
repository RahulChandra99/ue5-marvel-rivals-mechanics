// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Punisher/Characters/PunisherCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef RIVALSMECHANICS_PunisherCharacter_generated_h
#error "PunisherCharacter.generated.h already included, missing '#pragma once' in PunisherCharacter.h"
#endif
#define RIVALSMECHANICS_PunisherCharacter_generated_h

#define FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Punisher_Characters_PunisherCharacter_h_13_SPARSE_DATA
#define FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Punisher_Characters_PunisherCharacter_h_13_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Punisher_Characters_PunisherCharacter_h_13_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Punisher_Characters_PunisherCharacter_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAttackAI); \
	DECLARE_FUNCTION(execIsTurretStarted); \
	DECLARE_FUNCTION(execGetGrappleTimerValue); \
	DECLARE_FUNCTION(execGetTurretTimerValue); \
	DECLARE_FUNCTION(execGetRMBTimerValue); \
	DECLARE_FUNCTION(execGetTurretActiveStatus); \
	DECLARE_FUNCTION(execGetActiveWeapon); \
	DECLARE_FUNCTION(execGetReloadingStatus); \
	DECLARE_FUNCTION(execGetMaxHealth); \
	DECLARE_FUNCTION(execGetHealth); \
	DECLARE_FUNCTION(execGetHealthPercent); \
	DECLARE_FUNCTION(execIsDead); \
	DECLARE_FUNCTION(execReloadGunWrapper); \
	DECLARE_FUNCTION(execSwitchWeapon); \
	DECLARE_FUNCTION(execGetTurretAmmo); \
	DECLARE_FUNCTION(execGetShotgunAmmunition); \
	DECLARE_FUNCTION(execGetSMGAmmunition); \
	DECLARE_FUNCTION(execGetBeamEndLocation); \
	DECLARE_FUNCTION(execShiftGrappleHook); \
	DECLARE_FUNCTION(execPreEndTurretAction); \
	DECLARE_FUNCTION(execETurretButton); \
	DECLARE_FUNCTION(execRMBSmokeImpact); \
	DECLARE_FUNCTION(execAutoFireResetTimer); \
	DECLARE_FUNCTION(execStartFireTimer); \
	DECLARE_FUNCTION(execLMBShotGunAttack); \
	DECLARE_FUNCTION(execLMBFireBtnReleased); \
	DECLARE_FUNCTION(execLMBFireBtnPressed);


#define FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Punisher_Characters_PunisherCharacter_h_13_ACCESSORS
#define FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Punisher_Characters_PunisherCharacter_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPunisherCharacter(); \
	friend struct Z_Construct_UClass_APunisherCharacter_Statics; \
public: \
	DECLARE_CLASS(APunisherCharacter, ARivalsMechanicsCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RivalsMechanics"), NO_API) \
	DECLARE_SERIALIZER(APunisherCharacter)


#define FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Punisher_Characters_PunisherCharacter_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APunisherCharacter(APunisherCharacter&&); \
	NO_API APunisherCharacter(const APunisherCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APunisherCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APunisherCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APunisherCharacter) \
	NO_API virtual ~APunisherCharacter();


#define FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Punisher_Characters_PunisherCharacter_h_10_PROLOG
#define FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Punisher_Characters_PunisherCharacter_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Punisher_Characters_PunisherCharacter_h_13_SPARSE_DATA \
	FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Punisher_Characters_PunisherCharacter_h_13_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Punisher_Characters_PunisherCharacter_h_13_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Punisher_Characters_PunisherCharacter_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Punisher_Characters_PunisherCharacter_h_13_ACCESSORS \
	FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Punisher_Characters_PunisherCharacter_h_13_INCLASS_NO_PURE_DECLS \
	FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Punisher_Characters_PunisherCharacter_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RIVALSMECHANICS_API UClass* StaticClass<class APunisherCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Punisher_Characters_PunisherCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
