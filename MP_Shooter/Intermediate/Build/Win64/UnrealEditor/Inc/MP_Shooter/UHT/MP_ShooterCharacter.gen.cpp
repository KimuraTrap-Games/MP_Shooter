// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MP_Shooter/MP_ShooterCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMP_ShooterCharacter() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
MP_SHOOTER_API UClass* Z_Construct_UClass_AMP_ShooterCharacter();
MP_SHOOTER_API UClass* Z_Construct_UClass_AMP_ShooterCharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_MP_Shooter();
// End Cross Module References

// Begin Class AMP_ShooterCharacter Function CreateGameSession
struct Z_Construct_UFunction_AMP_ShooterCharacter_CreateGameSession_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MP_ShooterCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMP_ShooterCharacter_CreateGameSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMP_ShooterCharacter, nullptr, "CreateGameSession", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMP_ShooterCharacter_CreateGameSession_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMP_ShooterCharacter_CreateGameSession_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMP_ShooterCharacter_CreateGameSession()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMP_ShooterCharacter_CreateGameSession_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMP_ShooterCharacter::execCreateGameSession)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CreateGameSession();
	P_NATIVE_END;
}
// End Class AMP_ShooterCharacter Function CreateGameSession

// Begin Class AMP_ShooterCharacter
void AMP_ShooterCharacter::StaticRegisterNativesAMP_ShooterCharacter()
{
	UClass* Class = AMP_ShooterCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateGameSession", &AMP_ShooterCharacter::execCreateGameSession },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMP_ShooterCharacter);
UClass* Z_Construct_UClass_AMP_ShooterCharacter_NoRegister()
{
	return AMP_ShooterCharacter::StaticClass();
}
struct Z_Construct_UClass_AMP_ShooterCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MP_ShooterCharacter.h" },
		{ "ModuleRelativePath", "MP_ShooterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Camera boom positioning the camera behind the character */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MP_ShooterCharacter.h" },
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
		{ "ModuleRelativePath", "MP_ShooterCharacter.h" },
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
		{ "ModuleRelativePath", "MP_ShooterCharacter.h" },
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
		{ "ModuleRelativePath", "MP_ShooterCharacter.h" },
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
		{ "ModuleRelativePath", "MP_ShooterCharacter.h" },
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
		{ "ModuleRelativePath", "MP_ShooterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Look Input Action" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMP_ShooterCharacter_CreateGameSession, "CreateGameSession" }, // 2898799373
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMP_ShooterCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMP_ShooterCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMP_ShooterCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraBoom_MetaData), NewProp_CameraBoom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMP_ShooterCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMP_ShooterCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FollowCamera_MetaData), NewProp_FollowCamera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMP_ShooterCharacter_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMP_ShooterCharacter, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMappingContext_MetaData), NewProp_DefaultMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMP_ShooterCharacter_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMP_ShooterCharacter, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpAction_MetaData), NewProp_JumpAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMP_ShooterCharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMP_ShooterCharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMP_ShooterCharacter_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMP_ShooterCharacter, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAction_MetaData), NewProp_LookAction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMP_ShooterCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMP_ShooterCharacter_Statics::NewProp_CameraBoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMP_ShooterCharacter_Statics::NewProp_FollowCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMP_ShooterCharacter_Statics::NewProp_DefaultMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMP_ShooterCharacter_Statics::NewProp_JumpAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMP_ShooterCharacter_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMP_ShooterCharacter_Statics::NewProp_LookAction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMP_ShooterCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMP_ShooterCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_MP_Shooter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMP_ShooterCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMP_ShooterCharacter_Statics::ClassParams = {
	&AMP_ShooterCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMP_ShooterCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMP_ShooterCharacter_Statics::PropPointers),
	0,
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMP_ShooterCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AMP_ShooterCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMP_ShooterCharacter()
{
	if (!Z_Registration_Info_UClass_AMP_ShooterCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMP_ShooterCharacter.OuterSingleton, Z_Construct_UClass_AMP_ShooterCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMP_ShooterCharacter.OuterSingleton;
}
template<> MP_SHOOTER_API UClass* StaticClass<AMP_ShooterCharacter>()
{
	return AMP_ShooterCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMP_ShooterCharacter);
AMP_ShooterCharacter::~AMP_ShooterCharacter() {}
// End Class AMP_ShooterCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_scott_Desktop_KTS_MP_Shooter_MP_Shooter_Source_MP_Shooter_MP_ShooterCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMP_ShooterCharacter, AMP_ShooterCharacter::StaticClass, TEXT("AMP_ShooterCharacter"), &Z_Registration_Info_UClass_AMP_ShooterCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMP_ShooterCharacter), 1311662670U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_scott_Desktop_KTS_MP_Shooter_MP_Shooter_Source_MP_Shooter_MP_ShooterCharacter_h_3969607217(TEXT("/Script/MP_Shooter"),
	Z_CompiledInDeferFile_FID_Users_scott_Desktop_KTS_MP_Shooter_MP_Shooter_Source_MP_Shooter_MP_ShooterCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_scott_Desktop_KTS_MP_Shooter_MP_Shooter_Source_MP_Shooter_MP_ShooterCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
