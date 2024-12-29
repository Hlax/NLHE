// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NLHE/Public/AIPlayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIPlayer() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
NLHE_API UClass* Z_Construct_UClass_AAIPlayer();
NLHE_API UClass* Z_Construct_UClass_AAIPlayer_NoRegister();
NLHE_API UClass* Z_Construct_UClass_UActionInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_NLHE();
// End Cross Module References

// Begin Class AAIPlayer
void AAIPlayer::StaticRegisterNativesAAIPlayer()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAIPlayer);
UClass* Z_Construct_UClass_AAIPlayer_NoRegister()
{
	return AAIPlayer::StaticClass();
}
struct Z_Construct_UClass_AAIPlayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AIPlayer.h" },
		{ "ModuleRelativePath", "Public/AIPlayer.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAIPlayer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AAIPlayer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_NLHE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAIPlayer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AAIPlayer_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UActionInterface_NoRegister, (int32)VTABLE_OFFSET(AAIPlayer, IActionInterface), false },  // 2385584651
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAIPlayer_Statics::ClassParams = {
	&AAIPlayer::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAIPlayer_Statics::Class_MetaDataParams), Z_Construct_UClass_AAIPlayer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAIPlayer()
{
	if (!Z_Registration_Info_UClass_AAIPlayer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAIPlayer.OuterSingleton, Z_Construct_UClass_AAIPlayer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAIPlayer.OuterSingleton;
}
template<> NLHE_API UClass* StaticClass<AAIPlayer>()
{
	return AAIPlayer::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAIPlayer);
AAIPlayer::~AAIPlayer() {}
// End Class AAIPlayer

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_guestt_OneDrive_Documents_Unreal_Projects_NLHE_Source_NLHE_Public_AIPlayer_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAIPlayer, AAIPlayer::StaticClass, TEXT("AAIPlayer"), &Z_Registration_Info_UClass_AAIPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAIPlayer), 780650547U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_guestt_OneDrive_Documents_Unreal_Projects_NLHE_Source_NLHE_Public_AIPlayer_h_1623031525(TEXT("/Script/NLHE"),
	Z_CompiledInDeferFile_FID_Users_guestt_OneDrive_Documents_Unreal_Projects_NLHE_Source_NLHE_Public_AIPlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_guestt_OneDrive_Documents_Unreal_Projects_NLHE_Source_NLHE_Public_AIPlayer_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
