// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NLHE/Public/AIPlayer.h"
#include "NLHE/Public/Card.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIPlayer() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
NLHE_API UClass* Z_Construct_UClass_AAIPlayer();
NLHE_API UClass* Z_Construct_UClass_AAIPlayer_NoRegister();
NLHE_API UEnum* Z_Construct_UEnum_NLHE_EPosition();
NLHE_API UScriptStruct* Z_Construct_UScriptStruct_FCard();
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Stack_MetaData[] = {
		{ "ModuleRelativePath", "Public/AIPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoleCards_MetaData[] = {
		{ "ModuleRelativePath", "Public/AIPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "ModuleRelativePath", "Public/AIPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Stack;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HoleCards_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_HoleCards;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Position_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Position;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAIPlayer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AAIPlayer_Statics::NewProp_Stack = { "Stack", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAIPlayer, Stack), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Stack_MetaData), NewProp_Stack_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAIPlayer_Statics::NewProp_HoleCards_Inner = { "HoleCards", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCard, METADATA_PARAMS(0, nullptr) }; // 2470277742
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AAIPlayer_Statics::NewProp_HoleCards = { "HoleCards", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAIPlayer, HoleCards), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoleCards_MetaData), NewProp_HoleCards_MetaData) }; // 2470277742
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AAIPlayer_Statics::NewProp_Position_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AAIPlayer_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAIPlayer, Position), Z_Construct_UEnum_NLHE_EPosition, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) }; // 638612710
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAIPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIPlayer_Statics::NewProp_Stack,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIPlayer_Statics::NewProp_HoleCards_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIPlayer_Statics::NewProp_HoleCards,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIPlayer_Statics::NewProp_Position_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIPlayer_Statics::NewProp_Position,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAIPlayer_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AAIPlayer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_NLHE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAIPlayer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAIPlayer_Statics::ClassParams = {
	&AAIPlayer::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AAIPlayer_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AAIPlayer_Statics::PropPointers),
	0,
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
		{ Z_Construct_UClass_AAIPlayer, AAIPlayer::StaticClass, TEXT("AAIPlayer"), &Z_Registration_Info_UClass_AAIPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAIPlayer), 2081260298U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_guestt_OneDrive_Documents_Unreal_Projects_NLHE_Source_NLHE_Public_AIPlayer_h_2085090783(TEXT("/Script/NLHE"),
	Z_CompiledInDeferFile_FID_Users_guestt_OneDrive_Documents_Unreal_Projects_NLHE_Source_NLHE_Public_AIPlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_guestt_OneDrive_Documents_Unreal_Projects_NLHE_Source_NLHE_Public_AIPlayer_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
