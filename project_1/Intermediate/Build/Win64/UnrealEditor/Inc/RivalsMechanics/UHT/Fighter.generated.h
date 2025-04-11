// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/Fighter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RIVALSMECHANICS_Fighter_generated_h
#error "Fighter.generated.h already included, missing '#pragma once' in Fighter.h"
#endif
#define RIVALSMECHANICS_Fighter_generated_h

#define FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Interfaces_Fighter_h_13_SPARSE_DATA
#define FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Interfaces_Fighter_h_13_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Interfaces_Fighter_h_13_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Interfaces_Fighter_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Interfaces_Fighter_h_13_ACCESSORS
#define FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Interfaces_Fighter_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	RIVALSMECHANICS_API UFighter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	RIVALSMECHANICS_API UFighter(UFighter&&); \
	RIVALSMECHANICS_API UFighter(const UFighter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(RIVALSMECHANICS_API, UFighter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFighter); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFighter) \
	RIVALSMECHANICS_API virtual ~UFighter();


#define FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Interfaces_Fighter_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUFighter(); \
	friend struct Z_Construct_UClass_UFighter_Statics; \
public: \
	DECLARE_CLASS(UFighter, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/RivalsMechanics"), RIVALSMECHANICS_API) \
	DECLARE_SERIALIZER(UFighter)


#define FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Interfaces_Fighter_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Interfaces_Fighter_h_13_GENERATED_UINTERFACE_BODY() \
	FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Interfaces_Fighter_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Interfaces_Fighter_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IFighter() {} \
public: \
	typedef UFighter UClassType; \
	typedef IFighter ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Interfaces_Fighter_h_10_PROLOG
#define FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Interfaces_Fighter_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Interfaces_Fighter_h_13_SPARSE_DATA \
	FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Interfaces_Fighter_h_13_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Interfaces_Fighter_h_13_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Interfaces_Fighter_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Interfaces_Fighter_h_13_ACCESSORS \
	FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Interfaces_Fighter_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RIVALSMECHANICS_API UClass* StaticClass<class UFighter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Interfaces_Fighter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
