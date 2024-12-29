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
NLHE_API UClass* Z_Construct_UClass_AGameManager();
NLHE_API UClass* Z_Construct_UClass_AGameManager_NoRegister();
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
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
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
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
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
		{ Z_Construct_UClass_AGameManager, AGameManager::StaticClass, TEXT("AGameManager"), &Z_Registration_Info_UClass_AGameManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGameManager), 1003057958U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_guestt_OneDrive_Documents_Unreal_Projects_NLHE_Source_NLHE_Public_GameManager_h_1017154576(TEXT("/Script/NLHE"),
	Z_CompiledInDeferFile_FID_Users_guestt_OneDrive_Documents_Unreal_Projects_NLHE_Source_NLHE_Public_GameManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_guestt_OneDrive_Documents_Unreal_Projects_NLHE_Source_NLHE_Public_GameManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
