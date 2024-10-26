// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TP_TrouNoir/TP_TrouNoirCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTP_TrouNoirCharacter() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
TP_TROUNOIR_API UClass* Z_Construct_UClass_ABlackHole_NoRegister();
TP_TROUNOIR_API UClass* Z_Construct_UClass_ATP_TrouNoirCharacter();
TP_TROUNOIR_API UClass* Z_Construct_UClass_ATP_TrouNoirCharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_TP_TrouNoir();
// End Cross Module References

// Begin Class ATP_TrouNoirCharacter Function SetCanFire
struct Z_Construct_UFunction_ATP_TrouNoirCharacter_SetCanFire_Statics
{
	struct TP_TrouNoirCharacter_eventSetCanFire_Parms
	{
		bool Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TP_TrouNoirCharacter.h" },
	};
#endif // WITH_METADATA
	static void NewProp_Value_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ATP_TrouNoirCharacter_SetCanFire_Statics::NewProp_Value_SetBit(void* Obj)
{
	((TP_TrouNoirCharacter_eventSetCanFire_Parms*)Obj)->Value = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATP_TrouNoirCharacter_SetCanFire_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TP_TrouNoirCharacter_eventSetCanFire_Parms), &Z_Construct_UFunction_ATP_TrouNoirCharacter_SetCanFire_Statics::NewProp_Value_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATP_TrouNoirCharacter_SetCanFire_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_TrouNoirCharacter_SetCanFire_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_TrouNoirCharacter_SetCanFire_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATP_TrouNoirCharacter_SetCanFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATP_TrouNoirCharacter, nullptr, "SetCanFire", nullptr, nullptr, Z_Construct_UFunction_ATP_TrouNoirCharacter_SetCanFire_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_TrouNoirCharacter_SetCanFire_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATP_TrouNoirCharacter_SetCanFire_Statics::TP_TrouNoirCharacter_eventSetCanFire_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_TrouNoirCharacter_SetCanFire_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATP_TrouNoirCharacter_SetCanFire_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ATP_TrouNoirCharacter_SetCanFire_Statics::TP_TrouNoirCharacter_eventSetCanFire_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATP_TrouNoirCharacter_SetCanFire()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATP_TrouNoirCharacter_SetCanFire_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATP_TrouNoirCharacter::execSetCanFire)
{
	P_GET_UBOOL(Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCanFire(Z_Param_Value);
	P_NATIVE_END;
}
// End Class ATP_TrouNoirCharacter Function SetCanFire

// Begin Class ATP_TrouNoirCharacter
void ATP_TrouNoirCharacter::StaticRegisterNativesATP_TrouNoirCharacter()
{
	UClass* Class = ATP_TrouNoirCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetCanFire", &ATP_TrouNoirCharacter::execSetCanFire },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATP_TrouNoirCharacter);
UClass* Z_Construct_UClass_ATP_TrouNoirCharacter_NoRegister()
{
	return ATP_TrouNoirCharacter::StaticClass();
}
struct Z_Construct_UClass_ATP_TrouNoirCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "TP_TrouNoirCharacter.h" },
		{ "ModuleRelativePath", "TP_TrouNoirCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Camera boom positioning the camera behind the character */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TP_TrouNoirCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera boom positioning the camera behind the character" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Follow camera */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TP_TrouNoirCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Follow camera" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** MappingContext */" },
#endif
		{ "ModuleRelativePath", "TP_TrouNoirCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MappingContext" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Jump Input Action */" },
#endif
		{ "ModuleRelativePath", "TP_TrouNoirCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Jump Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Move Input Action */" },
#endif
		{ "ModuleRelativePath", "TP_TrouNoirCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Move Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Look Input Action */" },
#endif
		{ "ModuleRelativePath", "TP_TrouNoirCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Look Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FireInput_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "TP_TrouNoirCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnLocation_MetaData[] = {
		{ "Category", "TP_TrouNoirCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TP_TrouNoirCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BulletToSpawn_MetaData[] = {
		{ "Category", "TP_TrouNoirCharacter" },
		{ "ModuleRelativePath", "TP_TrouNoirCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_timeBetweenFire_MetaData[] = {
		{ "Category", "TP_TrouNoirCharacter" },
		{ "ModuleRelativePath", "TP_TrouNoirCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FireInput;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnLocation;
	static const UECodeGen_Private::FClassPropertyParams NewProp_BulletToSpawn;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_timeBetweenFire;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ATP_TrouNoirCharacter_SetCanFire, "SetCanFire" }, // 1499540444
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATP_TrouNoirCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_TrouNoirCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_TrouNoirCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraBoom_MetaData), NewProp_CameraBoom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_TrouNoirCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_TrouNoirCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FollowCamera_MetaData), NewProp_FollowCamera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_TrouNoirCharacter_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_TrouNoirCharacter, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMappingContext_MetaData), NewProp_DefaultMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_TrouNoirCharacter_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_TrouNoirCharacter, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpAction_MetaData), NewProp_JumpAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_TrouNoirCharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_TrouNoirCharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_TrouNoirCharacter_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_TrouNoirCharacter, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAction_MetaData), NewProp_LookAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_TrouNoirCharacter_Statics::NewProp_FireInput = { "FireInput", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_TrouNoirCharacter, FireInput), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FireInput_MetaData), NewProp_FireInput_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_TrouNoirCharacter_Statics::NewProp_SpawnLocation = { "SpawnLocation", nullptr, (EPropertyFlags)0x0020080000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_TrouNoirCharacter, SpawnLocation), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnLocation_MetaData), NewProp_SpawnLocation_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATP_TrouNoirCharacter_Statics::NewProp_BulletToSpawn = { "BulletToSpawn", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_TrouNoirCharacter, BulletToSpawn), Z_Construct_UClass_UClass, Z_Construct_UClass_ABlackHole_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BulletToSpawn_MetaData), NewProp_BulletToSpawn_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATP_TrouNoirCharacter_Statics::NewProp_timeBetweenFire = { "timeBetweenFire", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_TrouNoirCharacter, timeBetweenFire), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_timeBetweenFire_MetaData), NewProp_timeBetweenFire_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATP_TrouNoirCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_TrouNoirCharacter_Statics::NewProp_CameraBoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_TrouNoirCharacter_Statics::NewProp_FollowCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_TrouNoirCharacter_Statics::NewProp_DefaultMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_TrouNoirCharacter_Statics::NewProp_JumpAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_TrouNoirCharacter_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_TrouNoirCharacter_Statics::NewProp_LookAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_TrouNoirCharacter_Statics::NewProp_FireInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_TrouNoirCharacter_Statics::NewProp_SpawnLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_TrouNoirCharacter_Statics::NewProp_BulletToSpawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_TrouNoirCharacter_Statics::NewProp_timeBetweenFire,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_TrouNoirCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ATP_TrouNoirCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_TP_TrouNoir,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_TrouNoirCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATP_TrouNoirCharacter_Statics::ClassParams = {
	&ATP_TrouNoirCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ATP_TrouNoirCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ATP_TrouNoirCharacter_Statics::PropPointers),
	0,
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_TrouNoirCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ATP_TrouNoirCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATP_TrouNoirCharacter()
{
	if (!Z_Registration_Info_UClass_ATP_TrouNoirCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATP_TrouNoirCharacter.OuterSingleton, Z_Construct_UClass_ATP_TrouNoirCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATP_TrouNoirCharacter.OuterSingleton;
}
template<> TP_TROUNOIR_API UClass* StaticClass<ATP_TrouNoirCharacter>()
{
	return ATP_TrouNoirCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATP_TrouNoirCharacter);
ATP_TrouNoirCharacter::~ATP_TrouNoirCharacter() {}
// End Class ATP_TrouNoirCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_reyna_Documents_Unreal_Projects_TP_3_TestBlackHole_TP_TrouNoir_Source_TP_TrouNoir_TP_TrouNoirCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATP_TrouNoirCharacter, ATP_TrouNoirCharacter::StaticClass, TEXT("ATP_TrouNoirCharacter"), &Z_Registration_Info_UClass_ATP_TrouNoirCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATP_TrouNoirCharacter), 1920026488U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_reyna_Documents_Unreal_Projects_TP_3_TestBlackHole_TP_TrouNoir_Source_TP_TrouNoir_TP_TrouNoirCharacter_h_3999321069(TEXT("/Script/TP_TrouNoir"),
	Z_CompiledInDeferFile_FID_Users_reyna_Documents_Unreal_Projects_TP_3_TestBlackHole_TP_TrouNoir_Source_TP_TrouNoir_TP_TrouNoirCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_reyna_Documents_Unreal_Projects_TP_3_TestBlackHole_TP_TrouNoir_Source_TP_TrouNoir_TP_TrouNoirCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
