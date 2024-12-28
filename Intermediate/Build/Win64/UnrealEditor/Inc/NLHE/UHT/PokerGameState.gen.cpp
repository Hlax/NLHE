// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NLHE/Public/PokerGameState.h"
#include "NLHE/Public/Card.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePokerGameState() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
NLHE_API UClass* Z_Construct_UClass_APokerGameState();
NLHE_API UClass* Z_Construct_UClass_APokerGameState_NoRegister();
NLHE_API UEnum* Z_Construct_UEnum_NLHE_EGamePhase();
NLHE_API UScriptStruct* Z_Construct_UScriptStruct_FCard();
UPackage* Z_Construct_UPackage__Script_NLHE();
// End Cross Module References

// Begin Class APokerGameState
void APokerGameState::StaticRegisterNativesAPokerGameState()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APokerGameState);
UClass* Z_Construct_UClass_APokerGameState_NoRegister()
{
	return APokerGameState::StaticClass();
}
struct Z_Construct_UClass_APokerGameState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "PokerGameState.h" },
		{ "ModuleRelativePath", "Public/PokerGameState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CommunityCards_MetaData[] = {
		{ "ModuleRelativePath", "Public/PokerGameState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TotalPot_MetaData[] = {
		{ "ModuleRelativePath", "Public/PokerGameState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentPhase_MetaData[] = {
		{ "ModuleRelativePath", "Public/PokerGameState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CommunityCards_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CommunityCards;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TotalPot;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentPhase_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentPhase;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APokerGameState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APokerGameState_Statics::NewProp_CommunityCards_Inner = { "CommunityCards", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCard, METADATA_PARAMS(0, nullptr) }; // 2470277742
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APokerGameState_Statics::NewProp_CommunityCards = { "CommunityCards", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokerGameState, CommunityCards), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CommunityCards_MetaData), NewProp_CommunityCards_MetaData) }; // 2470277742
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_APokerGameState_Statics::NewProp_TotalPot = { "TotalPot", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokerGameState, TotalPot), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TotalPot_MetaData), NewProp_TotalPot_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_APokerGameState_Statics::NewProp_CurrentPhase_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_APokerGameState_Statics::NewProp_CurrentPhase = { "CurrentPhase", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokerGameState, CurrentPhase), Z_Construct_UEnum_NLHE_EGamePhase, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentPhase_MetaData), NewProp_CurrentPhase_MetaData) }; // 1843195121
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APokerGameState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokerGameState_Statics::NewProp_CommunityCards_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokerGameState_Statics::NewProp_CommunityCards,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokerGameState_Statics::NewProp_TotalPot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokerGameState_Statics::NewProp_CurrentPhase_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokerGameState_Statics::NewProp_CurrentPhase,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APokerGameState_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APokerGameState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameStateBase,
	(UObject* (*)())Z_Construct_UPackage__Script_NLHE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APokerGameState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APokerGameState_Statics::ClassParams = {
	&APokerGameState::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_APokerGameState_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_APokerGameState_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APokerGameState_Statics::Class_MetaDataParams), Z_Construct_UClass_APokerGameState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APokerGameState()
{
	if (!Z_Registration_Info_UClass_APokerGameState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APokerGameState.OuterSingleton, Z_Construct_UClass_APokerGameState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APokerGameState.OuterSingleton;
}
template<> NLHE_API UClass* StaticClass<APokerGameState>()
{
	return APokerGameState::StaticClass();
}
void APokerGameState::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_CommunityCards(TEXT("CommunityCards"));
	static const FName Name_TotalPot(TEXT("TotalPot"));
	static const FName Name_CurrentPhase(TEXT("CurrentPhase"));
	const bool bIsValid = true
		&& Name_CommunityCards == ClassReps[(int32)ENetFields_Private::CommunityCards].Property->GetFName()
		&& Name_TotalPot == ClassReps[(int32)ENetFields_Private::TotalPot].Property->GetFName()
		&& Name_CurrentPhase == ClassReps[(int32)ENetFields_Private::CurrentPhase].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in APokerGameState"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APokerGameState);
APokerGameState::~APokerGameState() {}
// End Class APokerGameState

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_guestt_OneDrive_Documents_Unreal_Projects_NLHE_Source_NLHE_Public_PokerGameState_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APokerGameState, APokerGameState::StaticClass, TEXT("APokerGameState"), &Z_Registration_Info_UClass_APokerGameState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APokerGameState), 4182822137U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_guestt_OneDrive_Documents_Unreal_Projects_NLHE_Source_NLHE_Public_PokerGameState_h_2226073990(TEXT("/Script/NLHE"),
	Z_CompiledInDeferFile_FID_Users_guestt_OneDrive_Documents_Unreal_Projects_NLHE_Source_NLHE_Public_PokerGameState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_guestt_OneDrive_Documents_Unreal_Projects_NLHE_Source_NLHE_Public_PokerGameState_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
