// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RivalsMechanics/Public/Animations/PlayerAnimInstance.h"
#include "../../Source/Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerAnimInstance() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	RIVALSMECHANICS_API UClass* Z_Construct_UClass_UPlayerAnimInstance();
	RIVALSMECHANICS_API UClass* Z_Construct_UClass_UPlayerAnimInstance_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RivalsMechanics();
// End Cross Module References
	DEFINE_FUNCTION(UPlayerAnimInstance::execUpdateDirection)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateDirection();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerAnimInstance::execHandleUpdatedTarget)
	{
		P_GET_OBJECT(AActor,Z_Param_NewTargetActorRef);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleUpdatedTarget(Z_Param_NewTargetActorRef);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerAnimInstance::execUpdateSpeed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateSpeed();
		P_NATIVE_END;
	}
	void UPlayerAnimInstance::StaticRegisterNativesUPlayerAnimInstance()
	{
		UClass* Class = UPlayerAnimInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleUpdatedTarget", &UPlayerAnimInstance::execHandleUpdatedTarget },
			{ "UpdateDirection", &UPlayerAnimInstance::execUpdateDirection },
			{ "UpdateSpeed", &UPlayerAnimInstance::execUpdateSpeed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlayerAnimInstance_HandleUpdatedTarget_Statics
	{
		struct PlayerAnimInstance_eventHandleUpdatedTarget_Parms
		{
			AActor* NewTargetActorRef;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewTargetActorRef;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayerAnimInstance_HandleUpdatedTarget_Statics::NewProp_NewTargetActorRef = { "NewTargetActorRef", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerAnimInstance_eventHandleUpdatedTarget_Parms, NewTargetActorRef), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerAnimInstance_HandleUpdatedTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerAnimInstance_HandleUpdatedTarget_Statics::NewProp_NewTargetActorRef,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerAnimInstance_HandleUpdatedTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Animations/PlayerAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerAnimInstance_HandleUpdatedTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerAnimInstance, nullptr, "HandleUpdatedTarget", nullptr, nullptr, Z_Construct_UFunction_UPlayerAnimInstance_HandleUpdatedTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAnimInstance_HandleUpdatedTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerAnimInstance_HandleUpdatedTarget_Statics::PlayerAnimInstance_eventHandleUpdatedTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAnimInstance_HandleUpdatedTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerAnimInstance_HandleUpdatedTarget_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAnimInstance_HandleUpdatedTarget_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPlayerAnimInstance_HandleUpdatedTarget_Statics::PlayerAnimInstance_eventHandleUpdatedTarget_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPlayerAnimInstance_HandleUpdatedTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerAnimInstance_HandleUpdatedTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerAnimInstance_UpdateDirection_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerAnimInstance_UpdateDirection_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Animations/PlayerAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerAnimInstance_UpdateDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerAnimInstance, nullptr, "UpdateDirection", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAnimInstance_UpdateDirection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerAnimInstance_UpdateDirection_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UPlayerAnimInstance_UpdateDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerAnimInstance_UpdateDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerAnimInstance_UpdateSpeed_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerAnimInstance_UpdateSpeed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Animations/PlayerAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerAnimInstance_UpdateSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerAnimInstance, nullptr, "UpdateSpeed", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAnimInstance_UpdateSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerAnimInstance_UpdateSpeed_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UPlayerAnimInstance_UpdateSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerAnimInstance_UpdateSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerAnimInstance);
	UClass* Z_Construct_UClass_UPlayerAnimInstance_NoRegister()
	{
		return UPlayerAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsInCombat_MetaData[];
#endif
		static void NewProp_bIsInCombat_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInCombat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentDirection_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentDirection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_RivalsMechanics,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnimInstance_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlayerAnimInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayerAnimInstance_HandleUpdatedTarget, "HandleUpdatedTarget" }, // 557872191
		{ &Z_Construct_UFunction_UPlayerAnimInstance_UpdateDirection, "UpdateDirection" }, // 1059984580
		{ &Z_Construct_UFunction_UPlayerAnimInstance_UpdateSpeed, "UpdateSpeed" }, // 685648773
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnimInstance_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerAnimInstance_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Animations/PlayerAnimInstance.h" },
		{ "ModuleRelativePath", "Public/Animations/PlayerAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_CurrentSpeed_MetaData[] = {
		{ "Category", "PlayerAnimInstance" },
		{ "ModuleRelativePath", "Public/Animations/PlayerAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_CurrentSpeed = { "CurrentSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerAnimInstance, CurrentSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_CurrentSpeed_MetaData), Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_CurrentSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_bIsInCombat_MetaData[] = {
		{ "Category", "PlayerAnimInstance" },
		{ "ModuleRelativePath", "Public/Animations/PlayerAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_bIsInCombat_SetBit(void* Obj)
	{
		((UPlayerAnimInstance*)Obj)->bIsInCombat = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_bIsInCombat = { "bIsInCombat", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPlayerAnimInstance), &Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_bIsInCombat_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_bIsInCombat_MetaData), Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_bIsInCombat_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_CurrentDirection_MetaData[] = {
		{ "Category", "PlayerAnimInstance" },
		{ "ModuleRelativePath", "Public/Animations/PlayerAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_CurrentDirection = { "CurrentDirection", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerAnimInstance, CurrentDirection), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_CurrentDirection_MetaData), Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_CurrentDirection_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerAnimInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_CurrentSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_bIsInCombat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_CurrentDirection,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerAnimInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerAnimInstance_Statics::ClassParams = {
		&UPlayerAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPlayerAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayerAnimInstance_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnimInstance_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UPlayerAnimInstance()
	{
		if (!Z_Registration_Info_UClass_UPlayerAnimInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerAnimInstance.OuterSingleton, Z_Construct_UClass_UPlayerAnimInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlayerAnimInstance.OuterSingleton;
	}
	template<> RIVALSMECHANICS_API UClass* StaticClass<UPlayerAnimInstance>()
	{
		return UPlayerAnimInstance::StaticClass();
	}
	UPlayerAnimInstance::UPlayerAnimInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerAnimInstance);
	UPlayerAnimInstance::~UPlayerAnimInstance() {}
	struct Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Animations_PlayerAnimInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Animations_PlayerAnimInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerAnimInstance, UPlayerAnimInstance::StaticClass, TEXT("UPlayerAnimInstance"), &Z_Registration_Info_UClass_UPlayerAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerAnimInstance), 1572501507U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Animations_PlayerAnimInstance_h_1915663388(TEXT("/Script/RivalsMechanics"),
		Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Animations_PlayerAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Animations_PlayerAnimInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
