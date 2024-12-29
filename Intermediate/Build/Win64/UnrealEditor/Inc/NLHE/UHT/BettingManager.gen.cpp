// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NLHE/Public/BettingManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBettingManager() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
NLHE_API UClass* Z_Construct_UClass_ABettingManager();
NLHE_API UClass* Z_Construct_UClass_ABettingManager_NoRegister();
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
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABettingManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
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
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
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
		{ Z_Construct_UClass_ABettingManager, ABettingManager::StaticClass, TEXT("ABettingManager"), &Z_Registration_Info_UClass_ABettingManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABettingManager), 4136240100U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_guestt_OneDrive_Documents_Unreal_Projects_NLHE_Source_NLHE_Public_BettingManager_h_1495782681(TEXT("/Script/NLHE"),
	Z_CompiledInDeferFile_FID_Users_guestt_OneDrive_Documents_Unreal_Projects_NLHE_Source_NLHE_Public_BettingManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_guestt_OneDrive_Documents_Unreal_Projects_NLHE_Source_NLHE_Public_BettingManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
