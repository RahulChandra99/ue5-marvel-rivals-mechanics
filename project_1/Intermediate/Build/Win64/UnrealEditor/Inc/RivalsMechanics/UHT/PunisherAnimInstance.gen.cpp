// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RivalsMechanics/Public/Punisher/PunisherAnimInstance.h"
#include "../../Source/Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePunisherAnimInstance() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	RIVALSMECHANICS_API UClass* Z_Construct_UClass_APunisherCharacter_NoRegister();
	RIVALSMECHANICS_API UClass* Z_Construct_UClass_UPunisherAnimInstance();
	RIVALSMECHANICS_API UClass* Z_Construct_UClass_UPunisherAnimInstance_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RivalsMechanics();
// End Cross Module References
	DEFINE_FUNCTION(UPunisherAnimInstance::execUpdateAnimationProperties)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateAnimationProperties(Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	void UPunisherAnimInstance::StaticRegisterNativesUPunisherAnimInstance()
	{
		UClass* Class = UPunisherAnimInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UpdateAnimationProperties", &UPunisherAnimInstance::execUpdateAnimationProperties },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPunisherAnimInstance_UpdateAnimationProperties_Statics
	{
		struct PunisherAnimInstance_eventUpdateAnimationProperties_Parms
		{
			float DeltaTime;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPunisherAnimInstance_UpdateAnimationProperties_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PunisherAnimInstance_eventUpdateAnimationProperties_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPunisherAnimInstance_UpdateAnimationProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPunisherAnimInstance_UpdateAnimationProperties_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPunisherAnimInstance_UpdateAnimationProperties_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Punisher/PunisherAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPunisherAnimInstance_UpdateAnimationProperties_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPunisherAnimInstance, nullptr, "UpdateAnimationProperties", nullptr, nullptr, Z_Construct_UFunction_UPunisherAnimInstance_UpdateAnimationProperties_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPunisherAnimInstance_UpdateAnimationProperties_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPunisherAnimInstance_UpdateAnimationProperties_Statics::PunisherAnimInstance_eventUpdateAnimationProperties_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPunisherAnimInstance_UpdateAnimationProperties_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPunisherAnimInstance_UpdateAnimationProperties_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPunisherAnimInstance_UpdateAnimationProperties_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPunisherAnimInstance_UpdateAnimationProperties_Statics::PunisherAnimInstance_eventUpdateAnimationProperties_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPunisherAnimInstance_UpdateAnimationProperties()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPunisherAnimInstance_UpdateAnimationProperties_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPunisherAnimInstance);
	UClass* Z_Construct_UClass_UPunisherAnimInstance_NoRegister()
	{
		return UPunisherAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UPunisherAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PunisherCharacter_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PunisherCharacter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsInAir_MetaData[];
#endif
		static void NewProp_bIsInAir_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInAir;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsAccelerating_MetaData[];
#endif
		static void NewProp_bIsAccelerating_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAccelerating;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementOffsetYaw_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MovementOffsetYaw;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastMovementOffsetYaw_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LastMovementOffsetYaw;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPunisherAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_RivalsMechanics,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPunisherAnimInstance_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UPunisherAnimInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPunisherAnimInstance_UpdateAnimationProperties, "UpdateAnimationProperties" }, // 445486139
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPunisherAnimInstance_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPunisherAnimInstance_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Punisher/PunisherAnimInstance.h" },
		{ "ModuleRelativePath", "Public/Punisher/PunisherAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPunisherAnimInstance_Statics::NewProp_PunisherCharacter_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Punisher/PunisherAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPunisherAnimInstance_Statics::NewProp_PunisherCharacter = { "PunisherCharacter", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPunisherAnimInstance, PunisherCharacter), Z_Construct_UClass_APunisherCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPunisherAnimInstance_Statics::NewProp_PunisherCharacter_MetaData), Z_Construct_UClass_UPunisherAnimInstance_Statics::NewProp_PunisherCharacter_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPunisherAnimInstance_Statics::NewProp_Speed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Speed of the character\n" },
#endif
		{ "ModuleRelativePath", "Public/Punisher/PunisherAnimInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Speed of the character" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPunisherAnimInstance_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPunisherAnimInstance, Speed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPunisherAnimInstance_Statics::NewProp_Speed_MetaData), Z_Construct_UClass_UPunisherAnimInstance_Statics::NewProp_Speed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPunisherAnimInstance_Statics::NewProp_bIsInAir_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Punisher/PunisherAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UPunisherAnimInstance_Statics::NewProp_bIsInAir_SetBit(void* Obj)
	{
		((UPunisherAnimInstance*)Obj)->bIsInAir = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPunisherAnimInstance_Statics::NewProp_bIsInAir = { "bIsInAir", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPunisherAnimInstance), &Z_Construct_UClass_UPunisherAnimInstance_Statics::NewProp_bIsInAir_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPunisherAnimInstance_Statics::NewProp_bIsInAir_MetaData), Z_Construct_UClass_UPunisherAnimInstance_Statics::NewProp_bIsInAir_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPunisherAnimInstance_Statics::NewProp_bIsAccelerating_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Whether character is moving or not\n" },
#endif
		{ "ModuleRelativePath", "Public/Punisher/PunisherAnimInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether character is moving or not" },
#endif
	};
#endif
	void Z_Construct_UClass_UPunisherAnimInstance_Statics::NewProp_bIsAccelerating_SetBit(void* Obj)
	{
		((UPunisherAnimInstance*)Obj)->bIsAccelerating = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPunisherAnimInstance_Statics::NewProp_bIsAccelerating = { "bIsAccelerating", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPunisherAnimInstance), &Z_Construct_UClass_UPunisherAnimInstance_Statics::NewProp_bIsAccelerating_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPunisherAnimInstance_Statics::NewProp_bIsAccelerating_MetaData), Z_Construct_UClass_UPunisherAnimInstance_Statics::NewProp_bIsAccelerating_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPunisherAnimInstance_Statics::NewProp_MovementOffsetYaw_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//offset yaw used for strafing\n" },
#endif
		{ "ModuleRelativePath", "Public/Punisher/PunisherAnimInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "offset yaw used for strafing" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPunisherAnimInstance_Statics::NewProp_MovementOffsetYaw = { "MovementOffsetYaw", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPunisherAnimInstance, MovementOffsetYaw), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPunisherAnimInstance_Statics::NewProp_MovementOffsetYaw_MetaData), Z_Construct_UClass_UPunisherAnimInstance_Statics::NewProp_MovementOffsetYaw_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPunisherAnimInstance_Statics::NewProp_LastMovementOffsetYaw_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//offset yaw for frame before we stop moving\n" },
#endif
		{ "ModuleRelativePath", "Public/Punisher/PunisherAnimInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "offset yaw for frame before we stop moving" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPunisherAnimInstance_Statics::NewProp_LastMovementOffsetYaw = { "LastMovementOffsetYaw", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPunisherAnimInstance, LastMovementOffsetYaw), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPunisherAnimInstance_Statics::NewProp_LastMovementOffsetYaw_MetaData), Z_Construct_UClass_UPunisherAnimInstance_Statics::NewProp_LastMovementOffsetYaw_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPunisherAnimInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPunisherAnimInstance_Statics::NewProp_PunisherCharacter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPunisherAnimInstance_Statics::NewProp_Speed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPunisherAnimInstance_Statics::NewProp_bIsInAir,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPunisherAnimInstance_Statics::NewProp_bIsAccelerating,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPunisherAnimInstance_Statics::NewProp_MovementOffsetYaw,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPunisherAnimInstance_Statics::NewProp_LastMovementOffsetYaw,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPunisherAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPunisherAnimInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPunisherAnimInstance_Statics::ClassParams = {
		&UPunisherAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPunisherAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPunisherAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPunisherAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UPunisherAnimInstance_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPunisherAnimInstance_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UPunisherAnimInstance()
	{
		if (!Z_Registration_Info_UClass_UPunisherAnimInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPunisherAnimInstance.OuterSingleton, Z_Construct_UClass_UPunisherAnimInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPunisherAnimInstance.OuterSingleton;
	}
	template<> RIVALSMECHANICS_API UClass* StaticClass<UPunisherAnimInstance>()
	{
		return UPunisherAnimInstance::StaticClass();
	}
	UPunisherAnimInstance::UPunisherAnimInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPunisherAnimInstance);
	UPunisherAnimInstance::~UPunisherAnimInstance() {}
	struct Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Punisher_PunisherAnimInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Punisher_PunisherAnimInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPunisherAnimInstance, UPunisherAnimInstance::StaticClass, TEXT("UPunisherAnimInstance"), &Z_Registration_Info_UClass_UPunisherAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPunisherAnimInstance), 2707860453U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Punisher_PunisherAnimInstance_h_3546873576(TEXT("/Script/RivalsMechanics"),
		Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Punisher_PunisherAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_marvel_rivals_mechanics_ue5_Source_RivalsMechanics_Public_Punisher_PunisherAnimInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
