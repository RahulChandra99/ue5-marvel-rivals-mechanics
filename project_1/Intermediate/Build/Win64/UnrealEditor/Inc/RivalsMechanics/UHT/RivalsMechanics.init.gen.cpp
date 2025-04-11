// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRivalsMechanics_init() {}
	RIVALSMECHANICS_API UFunction* Z_Construct_USparseDelegateFunction_RivalsMechanics_OnAttackPerformedSignature__DelegateSignature();
	RIVALSMECHANICS_API UFunction* Z_Construct_USparseDelegateFunction_RivalsMechanics_OnSprintSignature__DelegateSignature();
	RIVALSMECHANICS_API UFunction* Z_Construct_USparseDelegateFunction_RivalsMechanics_OnUpdatedTargetSignature__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_RivalsMechanics;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_RivalsMechanics()
	{
		if (!Z_Registration_Info_UPackage__Script_RivalsMechanics.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_USparseDelegateFunction_RivalsMechanics_OnAttackPerformedSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_USparseDelegateFunction_RivalsMechanics_OnSprintSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_USparseDelegateFunction_RivalsMechanics_OnUpdatedTargetSignature__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/RivalsMechanics",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x5D8AD49A,
				0xEA273BA1,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_RivalsMechanics.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_RivalsMechanics.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_RivalsMechanics(Z_Construct_UPackage__Script_RivalsMechanics, TEXT("/Script/RivalsMechanics"), Z_Registration_Info_UPackage__Script_RivalsMechanics, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x5D8AD49A, 0xEA273BA1));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
