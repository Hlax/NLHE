// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NLHE/Public/PokerTerms.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePokerTerms() {}

// Begin Cross Module References
NLHE_API UEnum* Z_Construct_UEnum_NLHE_EGamePhase();
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

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_guestt_OneDrive_Documents_Unreal_Projects_NLHE_Source_NLHE_Public_PokerTerms_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EGamePhase_StaticEnum, TEXT("EGamePhase"), &Z_Registration_Info_UEnum_EGamePhase, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1843195121U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_guestt_OneDrive_Documents_Unreal_Projects_NLHE_Source_NLHE_Public_PokerTerms_h_2666872843(TEXT("/Script/NLHE"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_guestt_OneDrive_Documents_Unreal_Projects_NLHE_Source_NLHE_Public_PokerTerms_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_guestt_OneDrive_Documents_Unreal_Projects_NLHE_Source_NLHE_Public_PokerTerms_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
