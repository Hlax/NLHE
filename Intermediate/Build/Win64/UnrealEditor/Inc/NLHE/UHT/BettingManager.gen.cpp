// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NLHE/Public/BettingManager.h"
#include "NLHE/Public/PokerTerms.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBettingManager() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
NLHE_API UClass* Z_Construct_UClass_ABettingManager();
NLHE_API UClass* Z_Construct_UClass_ABettingManager_NoRegister();
NLHE_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerBets();
NLHE_API UScriptStruct* Z_Construct_UScriptStruct_FPot();
UPackage* Z_Construct_UPackage__Script_NLHE();
// End Cross Module References

// Begin Class ABettingManager
void ABettingManager::StaticRegisterNativesABettingManager()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABettingManager);
UClass* Z_Construct_UClass_ABettingManager_NoRegister()
{
	return ABettingManager::StaticClass();
}
struct Z_Construct_UClass_ABettingManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BettingManager.h" },
		{ "ModuleRelativePath", "Public/BettingManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentBet_MetaData[] = {
		{ "ModuleRelativePath", "Public/BettingManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinRaise_MetaData[] = {
		{ "ModuleRelativePath", "Public/BettingManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainPot_MetaData[] = {
		{ "ModuleRelativePath", "Public/BettingManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SidePots_MetaData[] = {
		{ "ModuleRelativePath", "Public/BettingManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerBets_MetaData[] = {
		{ "ModuleRelativePath", "Public/BettingManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentBet;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinRaise;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MainPot;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SidePots_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SidePots;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerBets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PlayerBets;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABettingManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABettingManager_Statics::NewProp_CurrentBet = { "CurrentBet", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABettingManager, CurrentBet), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentBet_MetaData), NewProp_CurrentBet_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABettingManager_Statics::NewProp_MinRaise = { "MinRaise", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABettingManager, MinRaise), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinRaise_MetaData), NewProp_MinRaise_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABettingManager_Statics::NewProp_MainPot = { "MainPot", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABettingManager, MainPot), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainPot_MetaData), NewProp_MainPot_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABettingManager_Statics::NewProp_SidePots_Inner = { "SidePots", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPot, METADATA_PARAMS(0, nullptr) }; // 4159564864
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABettingManager_Statics::NewProp_SidePots = { "SidePots", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABettingManager, SidePots), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SidePots_MetaData), NewProp_SidePots_MetaData) }; // 4159564864
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABettingManager_Statics::NewProp_PlayerBets_Inner = { "PlayerBets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPlayerBets, METADATA_PARAMS(0, nullptr) }; // 3425353836
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABettingManager_Statics::NewProp_PlayerBets = { "PlayerBets", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABettingManager, PlayerBets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerBets_MetaData), NewProp_PlayerBets_MetaData) }; // 3425353836
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABettingManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABettingManager_Statics::NewProp_CurrentBet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABettingManager_Statics::NewProp_MinRaise,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABettingManager_Statics::NewProp_MainPot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABettingManager_Statics::NewProp_SidePots_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABettingManager_Statics::NewProp_SidePots,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABettingManager_Statics::NewProp_PlayerBets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABettingManager_Statics::NewProp_PlayerBets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABettingManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABettingManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_NLHE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABettingManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABettingManager_Statics::ClassParams = {
	&ABettingManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ABettingManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABettingManager_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABettingManager_Statics::Class_MetaDataParams), Z_Construct_UClass_ABettingManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABettingManager()
{
	if (!Z_Registration_Info_UClass_ABettingManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABettingManager.OuterSingleton, Z_Construct_UClass_ABettingManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABettingManager.OuterSingleton;
}
template<> NLHE_API UClass* StaticClass<ABettingManager>()
{
	return ABettingManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABettingManager);
ABettingManager::~ABettingManager() {}
// End Class ABettingManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_guestt_OneDrive_Documents_Unreal_Projects_NLHE_Source_NLHE_Public_BettingManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABettingManager, ABettingManager::StaticClass, TEXT("ABettingManager"), &Z_Registration_Info_UClass_ABettingManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABettingManager), 2841877142U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_guestt_OneDrive_Documents_Unreal_Projects_NLHE_Source_NLHE_Public_BettingManager_h_3795407854(TEXT("/Script/NLHE"),
	Z_CompiledInDeferFile_FID_Users_guestt_OneDrive_Documents_Unreal_Projects_NLHE_Source_NLHE_Public_BettingManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_guestt_OneDrive_Documents_Unreal_Projects_NLHE_Source_NLHE_Public_BettingManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
