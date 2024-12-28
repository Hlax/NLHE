// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NLHE/Public/GameManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameManager() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
NLHE_API UClass* Z_Construct_UClass_ABettingManager_NoRegister();
NLHE_API UClass* Z_Construct_UClass_ADealer_NoRegister();
NLHE_API UClass* Z_Construct_UClass_AGameManager();
NLHE_API UClass* Z_Construct_UClass_AGameManager_NoRegister();
NLHE_API UClass* Z_Construct_UClass_ATableManager_NoRegister();
NLHE_API UEnum* Z_Construct_UEnum_NLHE_EGamePhase();
UPackage* Z_Construct_UPackage__Script_NLHE();
// End Cross Module References

// Begin Class AGameManager
void AGameManager::StaticRegisterNativesAGameManager()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGameManager);
UClass* Z_Construct_UClass_AGameManager_NoRegister()
{
	return AGameManager::StaticClass();
}
struct Z_Construct_UClass_AGameManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameManager.h" },
		{ "ModuleRelativePath", "Public/GameManager.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentPhase_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HandCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TableManager_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Dealer_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BettingManager_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentPhase_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentPhase;
	static const UECodeGen_Private::FIntPropertyParams NewProp_HandCount;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TableManager;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Dealer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BettingManager;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AGameManager_Statics::NewProp_CurrentPhase_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AGameManager_Statics::NewProp_CurrentPhase = { "CurrentPhase", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameManager, CurrentPhase), Z_Construct_UEnum_NLHE_EGamePhase, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentPhase_MetaData), NewProp_CurrentPhase_MetaData) }; // 1843195121
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGameManager_Statics::NewProp_HandCount = { "HandCount", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameManager, HandCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandCount_MetaData), NewProp_HandCount_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGameManager_Statics::NewProp_TableManager = { "TableManager", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameManager, TableManager), Z_Construct_UClass_ATableManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TableManager_MetaData), NewProp_TableManager_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGameManager_Statics::NewProp_Dealer = { "Dealer", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameManager, Dealer), Z_Construct_UClass_ADealer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Dealer_MetaData), NewProp_Dealer_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGameManager_Statics::NewProp_BettingManager = { "BettingManager", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameManager, BettingManager), Z_Construct_UClass_ABettingManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BettingManager_MetaData), NewProp_BettingManager_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGameManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameManager_Statics::NewProp_CurrentPhase_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameManager_Statics::NewProp_CurrentPhase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameManager_Statics::NewProp_HandCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameManager_Statics::NewProp_TableManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameManager_Statics::NewProp_Dealer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameManager_Statics::NewProp_BettingManager,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGameManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AGameManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_NLHE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGameManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGameManager_Statics::ClassParams = {
	&AGameManager::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AGameManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AGameManager_Statics::PropPointers),
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGameManager_Statics::Class_MetaDataParams), Z_Construct_UClass_AGameManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGameManager()
{
	if (!Z_Registration_Info_UClass_AGameManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGameManager.OuterSingleton, Z_Construct_UClass_AGameManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGameManager.OuterSingleton;
}
template<> NLHE_API UClass* StaticClass<AGameManager>()
{
	return AGameManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGameManager);
AGameManager::~AGameManager() {}
// End Class AGameManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_guestt_OneDrive_Documents_Unreal_Projects_NLHE_Source_NLHE_Public_GameManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGameManager, AGameManager::StaticClass, TEXT("AGameManager"), &Z_Registration_Info_UClass_AGameManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGameManager), 2532060370U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_guestt_OneDrive_Documents_Unreal_Projects_NLHE_Source_NLHE_Public_GameManager_h_2878511437(TEXT("/Script/NLHE"),
	Z_CompiledInDeferFile_FID_Users_guestt_OneDrive_Documents_Unreal_Projects_NLHE_Source_NLHE_Public_GameManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_guestt_OneDrive_Documents_Unreal_Projects_NLHE_Source_NLHE_Public_GameManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
