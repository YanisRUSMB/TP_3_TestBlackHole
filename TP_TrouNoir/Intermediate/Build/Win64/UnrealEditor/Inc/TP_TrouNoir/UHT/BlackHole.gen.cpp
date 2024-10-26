// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TP_TrouNoir/Public/BlackHole.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlackHole() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
TP_TROUNOIR_API UClass* Z_Construct_UClass_ABlackHole();
TP_TROUNOIR_API UClass* Z_Construct_UClass_ABlackHole_NoRegister();
UPackage* Z_Construct_UPackage__Script_TP_TrouNoir();
// End Cross Module References

// Begin Class ABlackHole
void ABlackHole::StaticRegisterNativesABlackHole()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABlackHole);
UClass* Z_Construct_UClass_ABlackHole_NoRegister()
{
	return ABlackHole::StaticClass();
}
struct Z_Construct_UClass_ABlackHole_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BlackHole.h" },
		{ "ModuleRelativePath", "Public/BlackHole.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BulletFX_MetaData[] = {
		{ "Category", "BlackHole" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BlackHole.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionSphere_MetaData[] = {
		{ "Category", "BlackHole" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BlackHole.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjetileComponent_MetaData[] = {
		{ "Category", "BlackHole" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BlackHole.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[] = {
		{ "Category", "BlackHole" },
		{ "ModuleRelativePath", "Public/BlackHole.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BulletFX;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CollisionSphere;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProjetileComponent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABlackHole>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlackHole_Statics::NewProp_BulletFX = { "BulletFX", nullptr, (EPropertyFlags)0x0020080000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlackHole, BulletFX), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BulletFX_MetaData), NewProp_BulletFX_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlackHole_Statics::NewProp_CollisionSphere = { "CollisionSphere", nullptr, (EPropertyFlags)0x0020080000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlackHole, CollisionSphere), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionSphere_MetaData), NewProp_CollisionSphere_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlackHole_Statics::NewProp_ProjetileComponent = { "ProjetileComponent", nullptr, (EPropertyFlags)0x0020080000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlackHole, ProjetileComponent), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjetileComponent_MetaData), NewProp_ProjetileComponent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABlackHole_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlackHole, Speed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Speed_MetaData), NewProp_Speed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABlackHole_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlackHole_Statics::NewProp_BulletFX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlackHole_Statics::NewProp_CollisionSphere,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlackHole_Statics::NewProp_ProjetileComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlackHole_Statics::NewProp_Speed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABlackHole_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABlackHole_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_TP_TrouNoir,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABlackHole_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABlackHole_Statics::ClassParams = {
	&ABlackHole::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ABlackHole_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABlackHole_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABlackHole_Statics::Class_MetaDataParams), Z_Construct_UClass_ABlackHole_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABlackHole()
{
	if (!Z_Registration_Info_UClass_ABlackHole.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABlackHole.OuterSingleton, Z_Construct_UClass_ABlackHole_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABlackHole.OuterSingleton;
}
template<> TP_TROUNOIR_API UClass* StaticClass<ABlackHole>()
{
	return ABlackHole::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABlackHole);
ABlackHole::~ABlackHole() {}
// End Class ABlackHole

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_reyna_Documents_Unreal_Projects_TP_3_TestBlackHole_TP_TrouNoir_Source_TP_TrouNoir_Public_BlackHole_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABlackHole, ABlackHole::StaticClass, TEXT("ABlackHole"), &Z_Registration_Info_UClass_ABlackHole, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABlackHole), 329975717U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_reyna_Documents_Unreal_Projects_TP_3_TestBlackHole_TP_TrouNoir_Source_TP_TrouNoir_Public_BlackHole_h_3355295686(TEXT("/Script/TP_TrouNoir"),
	Z_CompiledInDeferFile_FID_Users_reyna_Documents_Unreal_Projects_TP_3_TestBlackHole_TP_TrouNoir_Source_TP_TrouNoir_Public_BlackHole_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_reyna_Documents_Unreal_Projects_TP_3_TestBlackHole_TP_TrouNoir_Source_TP_TrouNoir_Public_BlackHole_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
