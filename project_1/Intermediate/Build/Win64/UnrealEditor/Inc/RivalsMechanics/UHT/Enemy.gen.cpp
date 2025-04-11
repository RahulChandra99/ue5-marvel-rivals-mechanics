// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RivalsMechanics/Public/Interfaces/Enemy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemy() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	RIVALSMECHANICS_API UClass* Z_Construct_UClass_UEnemy();
	RIVALSMECHANICS_API UClass* Z_Construct_UClass_UEnemy_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RivalsMechanics();
// End Cross Module References
	void IEnemy::OnDeSelect()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnDeSelect instead.");
	}
	void IEnemy::OnSelect()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnSelect instead.");
	}
	void UEnemy::StaticRegisterNativesUEnemy()
	{
	}
	struct Z_Construct_UFunction_UEnemy_OnDeSelect_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnemy_OnDeSelect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/Enemy.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnemy_OnDeSelect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnemy, nullptr, "OnDeSelect", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemy_OnDeSelect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnemy_OnDeSelect_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UEnemy_OnDeSelect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnemy_OnDeSelect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEnemy_OnSelect_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnemy_OnSelect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/Enemy.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnemy_OnSelect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnemy, nullptr, "OnSelect", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemy_OnSelect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnemy_OnSelect_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UEnemy_OnSelect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnemy_OnSelect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnemy);
	UClass* Z_Construct_UClass_UEnemy_NoRegister()
	{
		return UEnemy::StaticClass();
	}
	struct Z_Construct_UClass_UEnemy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnemy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_RivalsMechanics,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemy_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UEnemy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEnemy_OnDeSelect, "OnDeSelect" }, // 84566994
		{ &Z_Construct_UFunction_UEnemy_OnSelect, "OnSelect" }, // 250830735
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemy_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemy_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/Enemy.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnemy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IEnemy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnemy_Statics::ClassParams = {
		&UEnemy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemy_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnemy_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UEnemy()
	{
		if (!Z_Registration_Info_UClass_UEnemy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnemy.OuterSingleton, Z_Construct_UClass_UEnemy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEnemy.OuterSingleton;
	}
	template<> RIVALSMECHANICS_API UClass* StaticClass<UEnemy>()
	{
		return UEnemy::StaticClass();
	}
	UEnemy::UEnemy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnemy);
	UEnemy::~UEnemy() {}
	static FName NAME_UEnemy_OnDeSelect = FName(TEXT("OnDeSelect"));
	void IEnemy::Execute_OnDeSelect(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UEnemy::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UEnemy_OnDeSelect);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
	}
	static FName NAME_UEnemy_OnSelect = FName(TEXT("OnSelect"));
	void IEnemy::Execute_OnSelect(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UEnemy::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UEnemy_OnSelect);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
	}
	struct Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Interfaces_Enemy_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Interfaces_Enemy_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEnemy, UEnemy::StaticClass, TEXT("UEnemy"), &Z_Registration_Info_UClass_UEnemy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnemy), 2745729631U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Interfaces_Enemy_h_185189782(TEXT("/Script/RivalsMechanics"),
		Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Interfaces_Enemy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Interfaces_Enemy_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
