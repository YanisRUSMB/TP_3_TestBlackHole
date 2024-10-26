// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TP_TrouNoir/TP_TrouNoirGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTP_TrouNoirGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
TP_TROUNOIR_API UClass* Z_Construct_UClass_ATP_TrouNoirGameMode();
TP_TROUNOIR_API UClass* Z_Construct_UClass_ATP_TrouNoirGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_TP_TrouNoir();
// End Cross Module References

// Begin Class ATP_TrouNoirGameMode
void ATP_TrouNoirGameMode::StaticRegisterNativesATP_TrouNoirGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATP_TrouNoirGameMode);
UClass* Z_Construct_UClass_ATP_TrouNoirGameMode_NoRegister()
{
	return ATP_TrouNoirGameMode::StaticClass();
}
struct Z_Construct_UClass_ATP_TrouNoirGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "TP_TrouNoirGameMode.h" },
		{ "ModuleRelativePath", "TP_TrouNoirGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATP_TrouNoirGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ATP_TrouNoirGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_TP_TrouNoir,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_TrouNoirGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATP_TrouNoirGameMode_Statics::ClassParams = {
	&ATP_TrouNoirGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_TrouNoirGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ATP_TrouNoirGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATP_TrouNoirGameMode()
{
	if (!Z_Registration_Info_UClass_ATP_TrouNoirGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATP_TrouNoirGameMode.OuterSingleton, Z_Construct_UClass_ATP_TrouNoirGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATP_TrouNoirGameMode.OuterSingleton;
}
template<> TP_TROUNOIR_API UClass* StaticClass<ATP_TrouNoirGameMode>()
{
	return ATP_TrouNoirGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATP_TrouNoirGameMode);
ATP_TrouNoirGameMode::~ATP_TrouNoirGameMode() {}
// End Class ATP_TrouNoirGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_reyna_Documents_Unreal_Projects_TP_3_TestBlackHole_TP_TrouNoir_Source_TP_TrouNoir_TP_TrouNoirGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATP_TrouNoirGameMode, ATP_TrouNoirGameMode::StaticClass, TEXT("ATP_TrouNoirGameMode"), &Z_Registration_Info_UClass_ATP_TrouNoirGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATP_TrouNoirGameMode), 83183633U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_reyna_Documents_Unreal_Projects_TP_3_TestBlackHole_TP_TrouNoir_Source_TP_TrouNoir_TP_TrouNoirGameMode_h_2168919879(TEXT("/Script/TP_TrouNoir"),
	Z_CompiledInDeferFile_FID_Users_reyna_Documents_Unreal_Projects_TP_3_TestBlackHole_TP_TrouNoir_Source_TP_TrouNoir_TP_TrouNoirGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_reyna_Documents_Unreal_Projects_TP_3_TestBlackHole_TP_TrouNoir_Source_TP_TrouNoir_TP_TrouNoirGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
