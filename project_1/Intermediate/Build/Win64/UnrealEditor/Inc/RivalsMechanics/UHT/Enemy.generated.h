// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/Enemy.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RIVALSMECHANICS_Enemy_generated_h
#error "Enemy.generated.h already included, missing '#pragma once' in Enemy.h"
#endif
#define RIVALSMECHANICS_Enemy_generated_h

#define FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Interfaces_Enemy_h_12_SPARSE_DATA
#define FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Interfaces_Enemy_h_12_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Interfaces_Enemy_h_12_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Interfaces_Enemy_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Interfaces_Enemy_h_12_ACCESSORS
#define FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Interfaces_Enemy_h_12_CALLBACK_WRAPPERS
#define FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Interfaces_Enemy_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	RIVALSMECHANICS_API UEnemy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	RIVALSMECHANICS_API UEnemy(UEnemy&&); \
	RIVALSMECHANICS_API UEnemy(const UEnemy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(RIVALSMECHANICS_API, UEnemy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnemy); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEnemy) \
	RIVALSMECHANICS_API virtual ~UEnemy();


#define FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Interfaces_Enemy_h_12_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUEnemy(); \
	friend struct Z_Construct_UClass_UEnemy_Statics; \
public: \
	DECLARE_CLASS(UEnemy, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/RivalsMechanics"), RIVALSMECHANICS_API) \
	DECLARE_SERIALIZER(UEnemy)


#define FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Interfaces_Enemy_h_12_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Interfaces_Enemy_h_12_GENERATED_UINTERFACE_BODY() \
	FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Interfaces_Enemy_h_12_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Interfaces_Enemy_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IEnemy() {} \
public: \
	typedef UEnemy UClassType; \
	typedef IEnemy ThisClass; \
	static void Execute_OnDeSelect(UObject* O); \
	static void Execute_OnSelect(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Interfaces_Enemy_h_9_PROLOG
#define FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Interfaces_Enemy_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Interfaces_Enemy_h_12_SPARSE_DATA \
	FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Interfaces_Enemy_h_12_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Interfaces_Enemy_h_12_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Interfaces_Enemy_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Interfaces_Enemy_h_12_ACCESSORS \
	FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Interfaces_Enemy_h_12_CALLBACK_WRAPPERS \
	FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Interfaces_Enemy_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RIVALSMECHANICS_API UClass* StaticClass<class UEnemy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Interfaces_Enemy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
