// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NLHE/Public/ActionInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActionInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
NLHE_API UClass* Z_Construct_UClass_UActionInterface();
NLHE_API UClass* Z_Construct_UClass_UActionInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_NLHE();
// End Cross Module References

// Begin Interface UActionInterface
void UActionInterface::StaticRegisterNativesUActionInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActionInterface);
UClass* Z_Construct_UClass_UActionInterface_NoRegister()
{
	return UActionInterface::StaticClass();
}
struct Z_Construct_UClass_UActionInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActionInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IActionInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UActionInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_NLHE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UActionInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UActionInterface_Statics::ClassParams = {
	&UActionInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActionInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UActionInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UActionInterface()
{
	if (!Z_Registration_Info_UClass_UActionInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActionInterface.OuterSingleton, Z_Construct_UClass_UActionInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UActionInterface.OuterSingleton;
}
template<> NLHE_API UClass* StaticClass<UActionInterface>()
{
	return UActionInterface::StaticClass();
}
UActionInterface::UActionInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UActionInterface);
UActionInterface::~UActionInterface() {}
// End Interface UActionInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_guestt_OneDrive_Documents_Unreal_Projects_NLHE_Source_NLHE_Public_ActionInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UActionInterface, UActionInterface::StaticClass, TEXT("UActionInterface"), &Z_Registration_Info_UClass_UActionInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActionInterface), 2385584651U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_guestt_OneDrive_Documents_Unreal_Projects_NLHE_Source_NLHE_Public_ActionInterface_h_1776850356(TEXT("/Script/NLHE"),
	Z_CompiledInDeferFile_FID_Users_guestt_OneDrive_Documents_Unreal_Projects_NLHE_Source_NLHE_Public_ActionInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_guestt_OneDrive_Documents_Unreal_Projects_NLHE_Source_NLHE_Public_ActionInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
