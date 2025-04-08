// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MP_Shooter/MP_ShooterGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMP_ShooterGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
MP_SHOOTER_API UClass* Z_Construct_UClass_AMP_ShooterGameMode();
MP_SHOOTER_API UClass* Z_Construct_UClass_AMP_ShooterGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_MP_Shooter();
// End Cross Module References

// Begin Class AMP_ShooterGameMode
void AMP_ShooterGameMode::StaticRegisterNativesAMP_ShooterGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMP_ShooterGameMode);
UClass* Z_Construct_UClass_AMP_ShooterGameMode_NoRegister()
{
	return AMP_ShooterGameMode::StaticClass();
}
struct Z_Construct_UClass_AMP_ShooterGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "MP_ShooterGameMode.h" },
		{ "ModuleRelativePath", "MP_ShooterGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMP_ShooterGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMP_ShooterGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MP_Shooter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMP_ShooterGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMP_ShooterGameMode_Statics::ClassParams = {
	&AMP_ShooterGameMode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMP_ShooterGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AMP_ShooterGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMP_ShooterGameMode()
{
	if (!Z_Registration_Info_UClass_AMP_ShooterGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMP_ShooterGameMode.OuterSingleton, Z_Construct_UClass_AMP_ShooterGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMP_ShooterGameMode.OuterSingleton;
}
template<> MP_SHOOTER_API UClass* StaticClass<AMP_ShooterGameMode>()
{
	return AMP_ShooterGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMP_ShooterGameMode);
AMP_ShooterGameMode::~AMP_ShooterGameMode() {}
// End Class AMP_ShooterGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_scott_Desktop_KTS_MP_Shooter_MP_Shooter_Source_MP_Shooter_MP_ShooterGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMP_ShooterGameMode, AMP_ShooterGameMode::StaticClass, TEXT("AMP_ShooterGameMode"), &Z_Registration_Info_UClass_AMP_ShooterGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMP_ShooterGameMode), 3679123515U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_scott_Desktop_KTS_MP_Shooter_MP_Shooter_Source_MP_Shooter_MP_ShooterGameMode_h_2115142578(TEXT("/Script/MP_Shooter"),
	Z_CompiledInDeferFile_FID_Users_scott_Desktop_KTS_MP_Shooter_MP_Shooter_Source_MP_Shooter_MP_ShooterGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_scott_Desktop_KTS_MP_Shooter_MP_Shooter_Source_MP_Shooter_MP_ShooterGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
