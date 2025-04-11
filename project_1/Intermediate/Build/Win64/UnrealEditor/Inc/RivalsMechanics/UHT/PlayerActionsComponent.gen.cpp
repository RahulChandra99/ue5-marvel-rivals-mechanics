// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RivalsMechanics/Public/Characters/PlayerActionsComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerActionsComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	RIVALSMECHANICS_API UClass* Z_Construct_UClass_UPlayerActionsComponent();
	RIVALSMECHANICS_API UClass* Z_Construct_UClass_UPlayerActionsComponent_NoRegister();
	RIVALSMECHANICS_API UFunction* Z_Construct_USparseDelegateFunction_RivalsMechanics_OnSprintSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_RivalsMechanics();
// End Cross Module References
	struct Z_Construct_USparseDelegateFunction_RivalsMechanics_OnSprintSignature__DelegateSignature_Statics
	{
		struct _Script_RivalsMechanics_eventOnSprintSignature_Parms
		{
			float Cost;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Cost;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_USparseDelegateFunction_RivalsMechanics_OnSprintSignature__DelegateSignature_Statics::NewProp_Cost = { "Cost", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RivalsMechanics_eventOnSprintSignature_Parms, Cost), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_USparseDelegateFunction_RivalsMechanics_OnSprintSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_RivalsMechanics_OnSprintSignature__DelegateSignature_Statics::NewProp_Cost,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_USparseDelegateFunction_RivalsMechanics_OnSprintSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/PlayerActionsComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_USparseDelegateFunction_RivalsMechanics_OnSprintSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RivalsMechanics, nullptr, "OnSprintSignature__DelegateSignature", "PlayerActionsComponent", "OnSprintDelegate", Z_Construct_USparseDelegateFunction_RivalsMechanics_OnSprintSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_RivalsMechanics_OnSprintSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_USparseDelegateFunction_RivalsMechanics_OnSprintSignature__DelegateSignature_Statics::_Script_RivalsMechanics_eventOnSprintSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_RivalsMechanics_OnSprintSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_USparseDelegateFunction_RivalsMechanics_OnSprintSignature__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_RivalsMechanics_OnSprintSignature__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_USparseDelegateFunction_RivalsMechanics_OnSprintSignature__DelegateSignature_Statics::_Script_RivalsMechanics_eventOnSprintSignature_Parms) < MAX_uint16);
	UFunction* Z_Construct_USparseDelegateFunction_RivalsMechanics_OnSprintSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_USparseDelegateFunction_RivalsMechanics_OnSprintSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnSprintSignature_DelegateWrapper(const FMulticastScriptDelegate& OnSprintSignature, float Cost)
{
	struct _Script_RivalsMechanics_eventOnSprintSignature_Parms
	{
		float Cost;
	};
	_Script_RivalsMechanics_eventOnSprintSignature_Parms Parms;
	Parms.Cost=Cost;
	OnSprintSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UPlayerActionsComponent::execWalk)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Walk();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerActionsComponent::execSprint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Sprint();
		P_NATIVE_END;
	}
	void UPlayerActionsComponent::StaticRegisterNativesUPlayerActionsComponent()
	{
		UClass* Class = UPlayerActionsComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Sprint", &UPlayerActionsComponent::execSprint },
			{ "Walk", &UPlayerActionsComponent::execWalk },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlayerActionsComponent_Sprint_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerActionsComponent_Sprint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/PlayerActionsComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerActionsComponent_Sprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerActionsComponent, nullptr, "Sprint", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerActionsComponent_Sprint_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerActionsComponent_Sprint_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UPlayerActionsComponent_Sprint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerActionsComponent_Sprint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerActionsComponent_Walk_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerActionsComponent_Walk_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/PlayerActionsComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerActionsComponent_Walk_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerActionsComponent, nullptr, "Walk", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerActionsComponent_Walk_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerActionsComponent_Walk_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UPlayerActionsComponent_Walk()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerActionsComponent_Walk_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerActionsComponent);
	UClass* Z_Construct_UClass_UPlayerActionsComponent_NoRegister()
	{
		return UPlayerActionsComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerActionsComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SprintCost_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SprintCost;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SprintSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SprintSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WalkSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WalkSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSprintDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSprintDelegate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerActionsComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_RivalsMechanics,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerActionsComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlayerActionsComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayerActionsComponent_Sprint, "Sprint" }, // 66111659
		{ &Z_Construct_UFunction_UPlayerActionsComponent_Walk, "Walk" }, // 1876676772
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerActionsComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerActionsComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Characters/PlayerActionsComponent.h" },
		{ "ModuleRelativePath", "Public/Characters/PlayerActionsComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerActionsComponent_Statics::NewProp_SprintCost_MetaData[] = {
		{ "Category", "PlayerActionsComponent" },
		{ "ModuleRelativePath", "Public/Characters/PlayerActionsComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerActionsComponent_Statics::NewProp_SprintCost = { "SprintCost", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerActionsComponent, SprintCost), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerActionsComponent_Statics::NewProp_SprintCost_MetaData), Z_Construct_UClass_UPlayerActionsComponent_Statics::NewProp_SprintCost_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerActionsComponent_Statics::NewProp_SprintSpeed_MetaData[] = {
		{ "Category", "PlayerActionsComponent" },
		{ "ModuleRelativePath", "Public/Characters/PlayerActionsComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerActionsComponent_Statics::NewProp_SprintSpeed = { "SprintSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerActionsComponent, SprintSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerActionsComponent_Statics::NewProp_SprintSpeed_MetaData), Z_Construct_UClass_UPlayerActionsComponent_Statics::NewProp_SprintSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerActionsComponent_Statics::NewProp_WalkSpeed_MetaData[] = {
		{ "Category", "PlayerActionsComponent" },
		{ "ModuleRelativePath", "Public/Characters/PlayerActionsComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerActionsComponent_Statics::NewProp_WalkSpeed = { "WalkSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerActionsComponent, WalkSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerActionsComponent_Statics::NewProp_WalkSpeed_MetaData), Z_Construct_UClass_UPlayerActionsComponent_Statics::NewProp_WalkSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerActionsComponent_Statics::NewProp_OnSprintDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/Characters/PlayerActionsComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPlayerActionsComponent_Statics::NewProp_OnSprintDelegate = { "OnSprintDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::SparseMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerActionsComponent, OnSprintDelegate), Z_Construct_USparseDelegateFunction_RivalsMechanics_OnSprintSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerActionsComponent_Statics::NewProp_OnSprintDelegate_MetaData), Z_Construct_UClass_UPlayerActionsComponent_Statics::NewProp_OnSprintDelegate_MetaData) }; // 2940699807
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerActionsComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerActionsComponent_Statics::NewProp_SprintCost,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerActionsComponent_Statics::NewProp_SprintSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerActionsComponent_Statics::NewProp_WalkSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerActionsComponent_Statics::NewProp_OnSprintDelegate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerActionsComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerActionsComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerActionsComponent_Statics::ClassParams = {
		&UPlayerActionsComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPlayerActionsComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerActionsComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerActionsComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayerActionsComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerActionsComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UPlayerActionsComponent()
	{
		if (!Z_Registration_Info_UClass_UPlayerActionsComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerActionsComponent.OuterSingleton, Z_Construct_UClass_UPlayerActionsComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlayerActionsComponent.OuterSingleton;
	}
	template<> RIVALSMECHANICS_API UClass* StaticClass<UPlayerActionsComponent>()
	{
		return UPlayerActionsComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerActionsComponent);
	UPlayerActionsComponent::~UPlayerActionsComponent() {}
	struct Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Characters_PlayerActionsComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Characters_PlayerActionsComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerActionsComponent, UPlayerActionsComponent::StaticClass, TEXT("UPlayerActionsComponent"), &Z_Registration_Info_UClass_UPlayerActionsComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerActionsComponent), 884149591U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Characters_PlayerActionsComponent_h_771395904(TEXT("/Script/RivalsMechanics"),
		Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Characters_PlayerActionsComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Characters_PlayerActionsComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
