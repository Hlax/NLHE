// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NLHE/Public/TableManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTableManager() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
NLHE_API UClass* Z_Construct_UClass_ATableManager();
NLHE_API UClass* Z_Construct_UClass_ATableManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_NLHE();
// End Cross Module References

// Begin Class ATableManager
void ATableManager::StaticRegisterNativesATableManager()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATableManager);
UClass* Z_Construct_UClass_ATableManager_NoRegister()
{
	return ATableManager::StaticClass();
}
struct Z_Construct_UClass_ATableManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "TableManager.h" },
		{ "ModuleRelativePath", "Public/TableManager.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATableManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ATableManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_NLHE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATableManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATableManager_Statics::ClassParams = {
	&ATableManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATableManager_Statics::Class_MetaDataParams), Z_Construct_UClass_ATableManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATableManager()
{
	if (!Z_Registration_Info_UClass_ATableManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATableManager.OuterSingleton, Z_Construct_UClass_ATableManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATableManager.OuterSingleton;
}
template<> NLHE_API UClass* StaticClass<ATableManager>()
{
	return ATableManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATableManager);
ATableManager::~ATableManager() {}
// End Class ATableManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_guestt_OneDrive_Documents_Unreal_Projects_NLHE_Source_NLHE_Public_TableManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATableManager, ATableManager::StaticClass, TEXT("ATableManager"), &Z_Registration_Info_UClass_ATableManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATableManager), 1325822793U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_guestt_OneDrive_Documents_Unreal_Projects_NLHE_Source_NLHE_Public_TableManager_h_1581702424(TEXT("/Script/NLHE"),
	Z_CompiledInDeferFile_FID_Users_guestt_OneDrive_Documents_Unreal_Projects_NLHE_Source_NLHE_Public_TableManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_guestt_OneDrive_Documents_Unreal_Projects_NLHE_Source_NLHE_Public_TableManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
