// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RivalsMechanics/Public/Characters/EStats.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEStats() {}
// Cross Module References
	RIVALSMECHANICS_API UEnum* Z_Construct_UEnum_RivalsMechanics_EStat();
	UPackage* Z_Construct_UPackage__Script_RivalsMechanics();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStat;
	static UEnum* EStat_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EStat.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EStat.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RivalsMechanics_EStat, (UObject*)Z_Construct_UPackage__Script_RivalsMechanics(), TEXT("EStat"));
		}
		return Z_Registration_Info_UEnum_EStat.OuterSingleton;
	}
	template<> RIVALSMECHANICS_API UEnum* StaticEnum<EStat>()
	{
		return EStat_StaticEnum();
	}
	struct Z_Construct_UEnum_RivalsMechanics_EStat_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_RivalsMechanics_EStat_Statics::Enumerators[] = {
		{ "None", (int64)None },
		{ "Health", (int64)Health },
		{ "MaxHealth", (int64)MaxHealth },
		{ "Strength", (int64)Strength },
		{ "Stamina", (int64)Stamina },
		{ "MaxStamina", (int64)MaxStamina },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_RivalsMechanics_EStat_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Health.DisplayName", "Health" },
		{ "Health.Name", "Health" },
		{ "MaxHealth.DisplayName", "Max Health" },
		{ "MaxHealth.Name", "MaxHealth" },
		{ "MaxStamina.DisplayName", "Max Stamina" },
		{ "MaxStamina.Name", "MaxStamina" },
		{ "ModuleRelativePath", "Public/Characters/EStats.h" },
		{ "None.DisplayName", "None Selected" },
		{ "None.Name", "None" },
		{ "Stamina.DisplayName", "Stamina" },
		{ "Stamina.Name", "Stamina" },
		{ "Strength.DisplayName", "Strength" },
		{ "Strength.Name", "Strength" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RivalsMechanics_EStat_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_RivalsMechanics,
		nullptr,
		"EStat",
		"EStat",
		Z_Construct_UEnum_RivalsMechanics_EStat_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_RivalsMechanics_EStat_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_RivalsMechanics_EStat_Statics::Enum_MetaDataParams), Z_Construct_UEnum_RivalsMechanics_EStat_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_RivalsMechanics_EStat()
	{
		if (!Z_Registration_Info_UEnum_EStat.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStat.InnerSingleton, Z_Construct_UEnum_RivalsMechanics_EStat_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EStat.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Characters_EStats_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Characters_EStats_h_Statics::EnumInfo[] = {
		{ EStat_StaticEnum, TEXT("EStat"), &Z_Registration_Info_UEnum_EStat, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 64255929U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Characters_EStats_h_2568186965(TEXT("/Script/RivalsMechanics"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Characters_EStats_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Characters_EStats_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
