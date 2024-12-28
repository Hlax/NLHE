// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NLHE/Public/PokerTerms.h"
#include "NLHE/Public/Card.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePokerTerms() {}

// Begin Cross Module References
NLHE_API UEnum* Z_Construct_UEnum_NLHE_EGamePhase();
NLHE_API UEnum* Z_Construct_UEnum_NLHE_EPokerAction();
NLHE_API UEnum* Z_Construct_UEnum_NLHE_EPosition();
NLHE_API UScriptStruct* Z_Construct_UScriptStruct_FCard();
NLHE_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerBets();
NLHE_API UScriptStruct* Z_Construct_UScriptStruct_FPokerActionState();
NLHE_API UScriptStruct* Z_Construct_UScriptStruct_FPot();
UPackage* Z_Construct_UPackage__Script_NLHE();
// End Cross Module References

// Begin Enum EGamePhase
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGamePhase;
static UEnum* EGamePhase_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGamePhase.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGamePhase.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NLHE_EGamePhase, (UObject*)Z_Construct_UPackage__Script_NLHE(), TEXT("EGamePhase"));
	}
	return Z_Registration_Info_UEnum_EGamePhase.OuterSingleton;
}
template<> NLHE_API UEnum* StaticEnum<EGamePhase>()
{
	return EGamePhase_StaticEnum();
}
struct Z_Construct_UEnum_NLHE_EGamePhase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Deal.DisplayName", "Deal" },
		{ "Deal.Name", "EGamePhase::Deal" },
		{ "EndHand.DisplayName", "EndHand" },
		{ "EndHand.Name", "EGamePhase::EndHand" },
		{ "Flop.DisplayName", "Flop" },
		{ "Flop.Name", "EGamePhase::Flop" },
		{ "ModuleRelativePath", "Public/PokerTerms.h" },
		{ "Preflop.DisplayName", "Preflop" },
		{ "Preflop.Name", "EGamePhase::Preflop" },
		{ "River.DisplayName", "River" },
		{ "River.Name", "EGamePhase::River" },
		{ "Showdown.DisplayName", "Showdown" },
		{ "Showdown.Name", "EGamePhase::Showdown" },
		{ "Turn.DisplayName", "Turn" },
		{ "Turn.Name", "EGamePhase::Turn" },
		{ "WaitingToStart.DisplayName", "WaitingToStart" },
		{ "WaitingToStart.Name", "EGamePhase::WaitingToStart" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGamePhase::WaitingToStart", (int64)EGamePhase::WaitingToStart },
		{ "EGamePhase::Deal", (int64)EGamePhase::Deal },
		{ "EGamePhase::Preflop", (int64)EGamePhase::Preflop },
		{ "EGamePhase::Flop", (int64)EGamePhase::Flop },
		{ "EGamePhase::Turn", (int64)EGamePhase::Turn },
		{ "EGamePhase::River", (int64)EGamePhase::River },
		{ "EGamePhase::Showdown", (int64)EGamePhase::Showdown },
		{ "EGamePhase::EndHand", (int64)EGamePhase::EndHand },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NLHE_EGamePhase_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_NLHE,
	nullptr,
	"EGamePhase",
	"EGamePhase",
	Z_Construct_UEnum_NLHE_EGamePhase_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_NLHE_EGamePhase_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_NLHE_EGamePhase_Statics::Enum_MetaDataParams), Z_Construct_UEnum_NLHE_EGamePhase_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_NLHE_EGamePhase()
{
	if (!Z_Registration_Info_UEnum_EGamePhase.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGamePhase.InnerSingleton, Z_Construct_UEnum_NLHE_EGamePhase_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGamePhase.InnerSingleton;
}
// End Enum EGamePhase

// Begin Enum EPokerAction
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPokerAction;
static UEnum* EPokerAction_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPokerAction.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPokerAction.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NLHE_EPokerAction, (UObject*)Z_Construct_UPackage__Script_NLHE(), TEXT("EPokerAction"));
	}
	return Z_Registration_Info_UEnum_EPokerAction.OuterSingleton;
}
template<> NLHE_API UEnum* StaticEnum<EPokerAction>()
{
	return EPokerAction_StaticEnum();
}
struct Z_Construct_UEnum_NLHE_EPokerAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Bet.DisplayName", "Bet" },
		{ "Bet.Name", "EPokerAction::Bet" },
		{ "BlueprintType", "true" },
		{ "Call.DisplayName", "Call" },
		{ "Call.Name", "EPokerAction::Call" },
		{ "Check.DisplayName", "Check" },
		{ "Check.Name", "EPokerAction::Check" },
		{ "Fold.DisplayName", "Fold" },
		{ "Fold.Name", "EPokerAction::Fold" },
		{ "ModuleRelativePath", "Public/PokerTerms.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EPokerAction::None" },
		{ "Raise.DisplayName", "Raise" },
		{ "Raise.Name", "EPokerAction::Raise" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPokerAction::None", (int64)EPokerAction::None },
		{ "EPokerAction::Check", (int64)EPokerAction::Check },
		{ "EPokerAction::Call", (int64)EPokerAction::Call },
		{ "EPokerAction::Bet", (int64)EPokerAction::Bet },
		{ "EPokerAction::Raise", (int64)EPokerAction::Raise },
		{ "EPokerAction::Fold", (int64)EPokerAction::Fold },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NLHE_EPokerAction_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_NLHE,
	nullptr,
	"EPokerAction",
	"EPokerAction",
	Z_Construct_UEnum_NLHE_EPokerAction_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_NLHE_EPokerAction_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_NLHE_EPokerAction_Statics::Enum_MetaDataParams), Z_Construct_UEnum_NLHE_EPokerAction_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_NLHE_EPokerAction()
{
	if (!Z_Registration_Info_UEnum_EPokerAction.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPokerAction.InnerSingleton, Z_Construct_UEnum_NLHE_EPokerAction_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPokerAction.InnerSingleton;
}
// End Enum EPokerAction

// Begin Enum EPosition
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPosition;
static UEnum* EPosition_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPosition.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPosition.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NLHE_EPosition, (UObject*)Z_Construct_UPackage__Script_NLHE(), TEXT("EPosition"));
	}
	return Z_Registration_Info_UEnum_EPosition.OuterSingleton;
}
template<> NLHE_API UEnum* StaticEnum<EPosition>()
{
	return EPosition_StaticEnum();
}
struct Z_Construct_UEnum_NLHE_EPosition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BigBlind.DisplayName", "Big Blind" },
		{ "BigBlind.Name", "EPosition::BigBlind" },
		{ "BlueprintType", "true" },
		{ "Button.DisplayName", "Button" },
		{ "Button.Name", "EPosition::Button" },
		{ "CO.DisplayName", "Cutoff" },
		{ "CO.Name", "EPosition::CO" },
		{ "HJ.DisplayName", "Hijack" },
		{ "HJ.Name", "EPosition::HJ" },
		{ "ModuleRelativePath", "Public/PokerTerms.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EPosition::None" },
		{ "SmallBlind.DisplayName", "Small Blind" },
		{ "SmallBlind.Name", "EPosition::SmallBlind" },
		{ "UTG.DisplayName", "Under the Gun" },
		{ "UTG.Name", "EPosition::UTG" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPosition::None", (int64)EPosition::None },
		{ "EPosition::Button", (int64)EPosition::Button },
		{ "EPosition::SmallBlind", (int64)EPosition::SmallBlind },
		{ "EPosition::BigBlind", (int64)EPosition::BigBlind },
		{ "EPosition::UTG", (int64)EPosition::UTG },
		{ "EPosition::HJ", (int64)EPosition::HJ },
		{ "EPosition::CO", (int64)EPosition::CO },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NLHE_EPosition_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_NLHE,
	nullptr,
	"EPosition",
	"EPosition",
	Z_Construct_UEnum_NLHE_EPosition_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_NLHE_EPosition_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_NLHE_EPosition_Statics::Enum_MetaDataParams), Z_Construct_UEnum_NLHE_EPosition_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_NLHE_EPosition()
{
	if (!Z_Registration_Info_UEnum_EPosition.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPosition.InnerSingleton, Z_Construct_UEnum_NLHE_EPosition_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPosition.InnerSingleton;
}
// End Enum EPosition

// Begin ScriptStruct FPlayerBets
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PlayerBets;
class UScriptStruct* FPlayerBets::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PlayerBets.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PlayerBets.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayerBets, (UObject*)Z_Construct_UPackage__Script_NLHE(), TEXT("PlayerBets"));
	}
	return Z_Registration_Info_UScriptStruct_PlayerBets.OuterSingleton;
}
template<> NLHE_API UScriptStruct* StaticStruct<FPlayerBets>()
{
	return FPlayerBets::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPlayerBets_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PokerTerms.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentBet_MetaData[] = {
		{ "ModuleRelativePath", "Public/PokerTerms.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TotalBetThisStreet_MetaData[] = {
		{ "ModuleRelativePath", "Public/PokerTerms.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HasActed_MetaData[] = {
		{ "ModuleRelativePath", "Public/PokerTerms.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentBet;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TotalBetThisStreet;
	static void NewProp_HasActed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_HasActed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayerBets>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerBets_Statics::NewProp_CurrentBet = { "CurrentBet", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerBets, CurrentBet), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentBet_MetaData), NewProp_CurrentBet_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerBets_Statics::NewProp_TotalBetThisStreet = { "TotalBetThisStreet", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerBets, TotalBetThisStreet), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TotalBetThisStreet_MetaData), NewProp_TotalBetThisStreet_MetaData) };
void Z_Construct_UScriptStruct_FPlayerBets_Statics::NewProp_HasActed_SetBit(void* Obj)
{
	((FPlayerBets*)Obj)->HasActed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPlayerBets_Statics::NewProp_HasActed = { "HasActed", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPlayerBets), &Z_Construct_UScriptStruct_FPlayerBets_Statics::NewProp_HasActed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HasActed_MetaData), NewProp_HasActed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlayerBets_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerBets_Statics::NewProp_CurrentBet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerBets_Statics::NewProp_TotalBetThisStreet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerBets_Statics::NewProp_HasActed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerBets_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayerBets_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NLHE,
	nullptr,
	&NewStructOps,
	"PlayerBets",
	Z_Construct_UScriptStruct_FPlayerBets_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerBets_Statics::PropPointers),
	sizeof(FPlayerBets),
	alignof(FPlayerBets),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerBets_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPlayerBets_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPlayerBets()
{
	if (!Z_Registration_Info_UScriptStruct_PlayerBets.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PlayerBets.InnerSingleton, Z_Construct_UScriptStruct_FPlayerBets_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PlayerBets.InnerSingleton;
}
// End ScriptStruct FPlayerBets

// Begin ScriptStruct FPot
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Pot;
class UScriptStruct* FPot::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Pot.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Pot.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPot, (UObject*)Z_Construct_UPackage__Script_NLHE(), TEXT("Pot"));
	}
	return Z_Registration_Info_UScriptStruct_Pot.OuterSingleton;
}
template<> NLHE_API UScriptStruct* StaticStruct<FPot>()
{
	return FPot::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PokerTerms.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Amount_MetaData[] = {
		{ "ModuleRelativePath", "Public/PokerTerms.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EligiblePlayers_MetaData[] = {
		{ "ModuleRelativePath", "Public/PokerTerms.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EligiblePlayers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_EligiblePlayers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPot>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPot_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPot, Amount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Amount_MetaData), NewProp_Amount_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPot_Statics::NewProp_EligiblePlayers_Inner = { "EligiblePlayers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPot_Statics::NewProp_EligiblePlayers = { "EligiblePlayers", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPot, EligiblePlayers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EligiblePlayers_MetaData), NewProp_EligiblePlayers_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPot_Statics::NewProp_Amount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPot_Statics::NewProp_EligiblePlayers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPot_Statics::NewProp_EligiblePlayers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPot_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NLHE,
	nullptr,
	&NewStructOps,
	"Pot",
	Z_Construct_UScriptStruct_FPot_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPot_Statics::PropPointers),
	sizeof(FPot),
	alignof(FPot),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPot_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPot_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPot()
{
	if (!Z_Registration_Info_UScriptStruct_Pot.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Pot.InnerSingleton, Z_Construct_UScriptStruct_FPot_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_Pot.InnerSingleton;
}
// End ScriptStruct FPot

// Begin ScriptStruct FPokerActionState
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PokerActionState;
class UScriptStruct* FPokerActionState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PokerActionState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PokerActionState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPokerActionState, (UObject*)Z_Construct_UPackage__Script_NLHE(), TEXT("PokerActionState"));
	}
	return Z_Registration_Info_UScriptStruct_PokerActionState.OuterSingleton;
}
template<> NLHE_API UScriptStruct* StaticStruct<FPokerActionState>()
{
	return FPokerActionState::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPokerActionState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Changed from FGameState to better reflect its purpose\n" },
#endif
		{ "ModuleRelativePath", "Public/PokerTerms.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Changed from FGameState to better reflect its purpose" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Phase_MetaData[] = {
		{ "ModuleRelativePath", "Public/PokerTerms.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentBet_MetaData[] = {
		{ "ModuleRelativePath", "Public/PokerTerms.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainPot_MetaData[] = {
		{ "ModuleRelativePath", "Public/PokerTerms.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CommunityCards_MetaData[] = {
		{ "ModuleRelativePath", "Public/PokerTerms.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActionOn_MetaData[] = {
		{ "ModuleRelativePath", "Public/PokerTerms.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Phase_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Phase;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentBet;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MainPot;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CommunityCards_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CommunityCards;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ActionOn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPokerActionState>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPokerActionState_Statics::NewProp_Phase_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPokerActionState_Statics::NewProp_Phase = { "Phase", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPokerActionState, Phase), Z_Construct_UEnum_NLHE_EGamePhase, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Phase_MetaData), NewProp_Phase_MetaData) }; // 1843195121
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPokerActionState_Statics::NewProp_CurrentBet = { "CurrentBet", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPokerActionState, CurrentBet), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentBet_MetaData), NewProp_CurrentBet_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPokerActionState_Statics::NewProp_MainPot = { "MainPot", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPokerActionState, MainPot), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainPot_MetaData), NewProp_MainPot_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPokerActionState_Statics::NewProp_CommunityCards_Inner = { "CommunityCards", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCard, METADATA_PARAMS(0, nullptr) }; // 2470277742
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPokerActionState_Statics::NewProp_CommunityCards = { "CommunityCards", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPokerActionState, CommunityCards), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CommunityCards_MetaData), NewProp_CommunityCards_MetaData) }; // 2470277742
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPokerActionState_Statics::NewProp_ActionOn = { "ActionOn", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPokerActionState, ActionOn), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActionOn_MetaData), NewProp_ActionOn_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPokerActionState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPokerActionState_Statics::NewProp_Phase_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPokerActionState_Statics::NewProp_Phase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPokerActionState_Statics::NewProp_CurrentBet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPokerActionState_Statics::NewProp_MainPot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPokerActionState_Statics::NewProp_CommunityCards_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPokerActionState_Statics::NewProp_CommunityCards,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPokerActionState_Statics::NewProp_ActionOn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPokerActionState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPokerActionState_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NLHE,
	nullptr,
	&NewStructOps,
	"PokerActionState",
	Z_Construct_UScriptStruct_FPokerActionState_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPokerActionState_Statics::PropPointers),
	sizeof(FPokerActionState),
	alignof(FPokerActionState),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPokerActionState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPokerActionState_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPokerActionState()
{
	if (!Z_Registration_Info_UScriptStruct_PokerActionState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PokerActionState.InnerSingleton, Z_Construct_UScriptStruct_FPokerActionState_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PokerActionState.InnerSingleton;
}
// End ScriptStruct FPokerActionState

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_guestt_OneDrive_Documents_Unreal_Projects_NLHE_Source_NLHE_Public_PokerTerms_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EGamePhase_StaticEnum, TEXT("EGamePhase"), &Z_Registration_Info_UEnum_EGamePhase, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1843195121U) },
		{ EPokerAction_StaticEnum, TEXT("EPokerAction"), &Z_Registration_Info_UEnum_EPokerAction, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2750443181U) },
		{ EPosition_StaticEnum, TEXT("EPosition"), &Z_Registration_Info_UEnum_EPosition, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 638612710U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPlayerBets::StaticStruct, Z_Construct_UScriptStruct_FPlayerBets_Statics::NewStructOps, TEXT("PlayerBets"), &Z_Registration_Info_UScriptStruct_PlayerBets, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPlayerBets), 3425353836U) },
		{ FPot::StaticStruct, Z_Construct_UScriptStruct_FPot_Statics::NewStructOps, TEXT("Pot"), &Z_Registration_Info_UScriptStruct_Pot, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPot), 4159564864U) },
		{ FPokerActionState::StaticStruct, Z_Construct_UScriptStruct_FPokerActionState_Statics::NewStructOps, TEXT("PokerActionState"), &Z_Registration_Info_UScriptStruct_PokerActionState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPokerActionState), 4220946461U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_guestt_OneDrive_Documents_Unreal_Projects_NLHE_Source_NLHE_Public_PokerTerms_h_2918956949(TEXT("/Script/NLHE"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_guestt_OneDrive_Documents_Unreal_Projects_NLHE_Source_NLHE_Public_PokerTerms_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_guestt_OneDrive_Documents_Unreal_Projects_NLHE_Source_NLHE_Public_PokerTerms_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Users_guestt_OneDrive_Documents_Unreal_Projects_NLHE_Source_NLHE_Public_PokerTerms_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_guestt_OneDrive_Documents_Unreal_Projects_NLHE_Source_NLHE_Public_PokerTerms_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
