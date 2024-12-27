// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PokerTerms.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NLHE_PokerTerms_generated_h
#error "PokerTerms.generated.h already included, missing '#pragma once' in PokerTerms.h"
#endif
#define NLHE_PokerTerms_generated_h

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

PRAGMA_ENABLE_DEPRECATION_WARNINGS
