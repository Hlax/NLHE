// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NLHE/Public/Dealer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDealer() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
NLHE_API UClass* Z_Construct_UClass_ADealer();
NLHE_API UClass* Z_Construct_UClass_ADealer_NoRegister();
UPackage* Z_Construct_UPackage__Script_NLHE();
// End Cross Module References

// Begin Class ADealer
void ADealer::StaticRegisterNativesADealer()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADealer);
UClass* Z_Construct_UClass_ADealer_NoRegister()
{
	return ADealer::StaticClass();
}
struct Z_Construct_UClass_ADealer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Dealer.h" },
		{ "ModuleRelativePath", "Public/Dealer.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADealer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ADealer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_NLHE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADealer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADealer_Statics::ClassParams = {
	&ADealer::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADealer_Statics::Class_MetaDataParams), Z_Construct_UClass_ADealer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADealer()
{
	if (!Z_Registration_Info_UClass_ADealer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADealer.OuterSingleton, Z_Construct_UClass_ADealer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADealer.OuterSingleton;
}
template<> NLHE_API UClass* StaticClass<ADealer>()
{
	return ADealer::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADealer);
ADealer::~ADealer() {}
// End Class ADealer

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_guestt_OneDrive_Documents_Unreal_Projects_NLHE_Source_NLHE_Public_Dealer_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADealer, ADealer::StaticClass, TEXT("ADealer"), &Z_Registration_Info_UClass_ADealer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADealer), 1601140581U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_guestt_OneDrive_Documents_Unreal_Projects_NLHE_Source_NLHE_Public_Dealer_h_139125157(TEXT("/Script/NLHE"),
	Z_CompiledInDeferFile_FID_Users_guestt_OneDrive_Documents_Unreal_Projects_NLHE_Source_NLHE_Public_Dealer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_guestt_OneDrive_Documents_Unreal_Projects_NLHE_Source_NLHE_Public_Dealer_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
