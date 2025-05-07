// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MP_ShooterCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MP_SHOOTER_MP_ShooterCharacter_generated_h
#error "MP_ShooterCharacter.generated.h already included, missing '#pragma once' in MP_ShooterCharacter.h"
#endif
#define MP_SHOOTER_MP_ShooterCharacter_generated_h

#define FID_Users_scott_Desktop_KTS_MP_Shooter_MP_Shooter_Source_MP_Shooter_MP_ShooterCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execJoinGameSession); \
	DECLARE_FUNCTION(execCreateGameSession);


#define FID_Users_scott_Desktop_KTS_MP_Shooter_MP_Shooter_Source_MP_Shooter_MP_ShooterCharacter_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMP_ShooterCharacter(); \
	friend struct Z_Construct_UClass_AMP_ShooterCharacter_Statics; \
public: \
	DECLARE_CLASS(AMP_ShooterCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MP_Shooter"), NO_API) \
	DECLARE_SERIALIZER(AMP_ShooterCharacter)


#define FID_Users_scott_Desktop_KTS_MP_Shooter_MP_Shooter_Source_MP_Shooter_MP_ShooterCharacter_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMP_ShooterCharacter(AMP_ShooterCharacter&&); \
	AMP_ShooterCharacter(const AMP_ShooterCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMP_ShooterCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMP_ShooterCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMP_ShooterCharacter) \
	NO_API virtual ~AMP_ShooterCharacter();


#define FID_Users_scott_Desktop_KTS_MP_Shooter_MP_Shooter_Source_MP_Shooter_MP_ShooterCharacter_h_21_PROLOG
#define FID_Users_scott_Desktop_KTS_MP_Shooter_MP_Shooter_Source_MP_Shooter_MP_ShooterCharacter_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_scott_Desktop_KTS_MP_Shooter_MP_Shooter_Source_MP_Shooter_MP_ShooterCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_scott_Desktop_KTS_MP_Shooter_MP_Shooter_Source_MP_Shooter_MP_ShooterCharacter_h_24_INCLASS_NO_PURE_DECLS \
	FID_Users_scott_Desktop_KTS_MP_Shooter_MP_Shooter_Source_MP_Shooter_MP_ShooterCharacter_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MP_SHOOTER_API UClass* StaticClass<class AMP_ShooterCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_scott_Desktop_KTS_MP_Shooter_MP_Shooter_Source_MP_Shooter_MP_ShooterCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
