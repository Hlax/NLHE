// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PokerTerms.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NLHE_PokerTerms_generated_h
#error "PokerTerms.generated.h already included, missing '#pragma once' in PokerTerms.h"
#endif
#define NLHE_PokerTerms_generated_h

#define FID_Users_guestt_OneDrive_Documents_Unreal_Projects_NLHE_Source_NLHE_Public_PokerTerms_h_47_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPlayerBets_Statics; \
	NLHE_API static class UScriptStruct* StaticStruct();


template<> NLHE_API UScriptStruct* StaticStruct<struct FPlayerBets>();

#define FID_Users_guestt_OneDrive_Documents_Unreal_Projects_NLHE_Source_NLHE_Public_PokerTerms_h_64_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPot_Statics; \
	NLHE_API static class UScriptStruct* StaticStruct();


template<> NLHE_API UScriptStruct* StaticStruct<struct FPot>();

#define FID_Users_guestt_OneDrive_Documents_Unreal_Projects_NLHE_Source_NLHE_Public_PokerTerms_h_78_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPokerActionState_Statics; \
	NLHE_API static class UScriptStruct* StaticStruct();


template<> NLHE_API UScriptStruct* StaticStruct<struct FPokerActionState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_guestt_OneDrive_Documents_Unreal_Projects_NLHE_Source_NLHE_Public_PokerTerms_h


#define FOREACH_ENUM_EGAMEPHASE(op) \
	op(EGamePhase::WaitingToStart) \
	op(EGamePhase::Deal) \
	op(EGamePhase::Preflop) \
	op(EGamePhase::Flop) \
	op(EGamePhase::Turn) \
	op(EGamePhase::River) \
	op(EGamePhase::Showdown) \
	op(EGamePhase::EndHand) 

enum class EGamePhase : uint8;
template<> struct TIsUEnumClass<EGamePhase> { enum { Value = true }; };
template<> NLHE_API UEnum* StaticEnum<EGamePhase>();

#define FOREACH_ENUM_EPOKERACTION(op) \
	op(EPokerAction::None) \
	op(EPokerAction::Check) \
	op(EPokerAction::Call) \
	op(EPokerAction::Bet) \
	op(EPokerAction::Raise) \
	op(EPokerAction::Fold) 

enum class EPokerAction : uint8;
template<> struct TIsUEnumClass<EPokerAction> { enum { Value = true }; };
template<> NLHE_API UEnum* StaticEnum<EPokerAction>();

#define FOREACH_ENUM_EPOSITION(op) \
	op(EPosition::None) \
	op(EPosition::Button) \
	op(EPosition::SmallBlind) \
	op(EPosition::BigBlind) \
	op(EPosition::UTG) \
	op(EPosition::HJ) \
	op(EPosition::CO) 

enum class EPosition : uint8;
template<> struct TIsUEnumClass<EPosition> { enum { Value = true }; };
template<> NLHE_API UEnum* StaticEnum<EPosition>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
