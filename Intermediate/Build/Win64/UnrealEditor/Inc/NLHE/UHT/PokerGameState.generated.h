// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PokerGameState.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NLHE_PokerGameState_generated_h
#error "PokerGameState.generated.h already included, missing '#pragma once' in PokerGameState.h"
#endif
#define NLHE_PokerGameState_generated_h

#define FID_Users_guestt_OneDrive_Documents_Unreal_Projects_NLHE_Source_NLHE_Public_PokerGameState_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPokerGameState(); \
	friend struct Z_Construct_UClass_APokerGameState_Statics; \
public: \
	DECLARE_CLASS(APokerGameState, AGameStateBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NLHE"), NO_API) \
	DECLARE_SERIALIZER(APokerGameState) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CommunityCards=NETFIELD_REP_START, \
		TotalPot, \
		CurrentPhase, \
		NETFIELD_REP_END=CurrentPhase	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Users_guestt_OneDrive_Documents_Unreal_Projects_NLHE_Source_NLHE_Public_PokerGameState_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	APokerGameState(APokerGameState&&); \
	APokerGameState(const APokerGameState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APokerGameState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APokerGameState); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APokerGameState) \
	NO_API virtual ~APokerGameState();


#define FID_Users_guestt_OneDrive_Documents_Unreal_Projects_NLHE_Source_NLHE_Public_PokerGameState_h_10_PROLOG
#define FID_Users_guestt_OneDrive_Documents_Unreal_Projects_NLHE_Source_NLHE_Public_PokerGameState_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_guestt_OneDrive_Documents_Unreal_Projects_NLHE_Source_NLHE_Public_PokerGameState_h_13_INCLASS_NO_PURE_DECLS \
	FID_Users_guestt_OneDrive_Documents_Unreal_Projects_NLHE_Source_NLHE_Public_PokerGameState_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NLHE_API UClass* StaticClass<class APokerGameState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_guestt_OneDrive_Documents_Unreal_Projects_NLHE_Source_NLHE_Public_PokerGameState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
