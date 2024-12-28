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
NLHE_API UClass* Z_Construct_UClass_AAIPlayer_NoRegister();
NLHE_API UClass* Z_Construct_UClass_ATableManager();
NLHE_API UClass* Z_Construct_UClass_ATableManager_NoRegister();
NLHE_API UEnum* Z_Construct_UEnum_NLHE_EPosition();
NLHE_API UScriptStruct* Z_Construct_UScriptStruct_FSeat();
UPackage* Z_Construct_UPackage__Script_NLHE();
// End Cross Module References

// Begin ScriptStruct FSeat
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Seat;
class UScriptStruct* FSeat::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Seat.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Seat.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSeat, (UObject*)Z_Construct_UPackage__Script_NLHE(), TEXT("Seat"));
	}
	return Z_Registration_Info_UScriptStruct_Seat.OuterSingleton;
}
template<> NLHE_API UScriptStruct* StaticStruct<FSeat>()
{
	return FSeat::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSeat_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TableManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Player_MetaData[] = {
		{ "ModuleRelativePath", "Public/TableManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Stack_MetaData[] = {
		{ "ModuleRelativePath", "Public/TableManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsActive_MetaData[] = {
		{ "ModuleRelativePath", "Public/TableManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "ModuleRelativePath", "Public/TableManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Stack;
	static void NewProp_IsActive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsActive;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Position_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Position;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSeat>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSeat_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSeat, Player), Z_Construct_UClass_AAIPlayer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Player_MetaData), NewProp_Player_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSeat_Statics::NewProp_Stack = { "Stack", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSeat, Stack), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Stack_MetaData), NewProp_Stack_MetaData) };
void Z_Construct_UScriptStruct_FSeat_Statics::NewProp_IsActive_SetBit(void* Obj)
{
	((FSeat*)Obj)->IsActive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSeat_Statics::NewProp_IsActive = { "IsActive", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSeat), &Z_Construct_UScriptStruct_FSeat_Statics::NewProp_IsActive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsActive_MetaData), NewProp_IsActive_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSeat_Statics::NewProp_Position_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSeat_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSeat, Position), Z_Construct_UEnum_NLHE_EPosition, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) }; // 638612710
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSeat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSeat_Statics::NewProp_Player,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSeat_Statics::NewProp_Stack,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSeat_Statics::NewProp_IsActive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSeat_Statics::NewProp_Position_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSeat_Statics::NewProp_Position,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSeat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSeat_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NLHE,
	nullptr,
	&NewStructOps,
	"Seat",
	Z_Construct_UScriptStruct_FSeat_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSeat_Statics::PropPointers),
	sizeof(FSeat),
	alignof(FSeat),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSeat_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSeat_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSeat()
{
	if (!Z_Registration_Info_UScriptStruct_Seat.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Seat.InnerSingleton, Z_Construct_UScriptStruct_FSeat_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_Seat.InnerSingleton;
}
// End ScriptStruct FSeat

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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Seats_MetaData[] = {
		{ "ModuleRelativePath", "Public/TableManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ButtonPosition_MetaData[] = {
		{ "ModuleRelativePath", "Public/TableManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentActionOn_MetaData[] = {
		{ "ModuleRelativePath", "Public/TableManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Seats_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Seats;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ButtonPosition;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentActionOn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATableManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATableManager_Statics::NewProp_Seats_Inner = { "Seats", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSeat, METADATA_PARAMS(0, nullptr) }; // 454910982
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATableManager_Statics::NewProp_Seats = { "Seats", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATableManager, Seats), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Seats_MetaData), NewProp_Seats_MetaData) }; // 454910982
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATableManager_Statics::NewProp_ButtonPosition = { "ButtonPosition", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATableManager, ButtonPosition), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ButtonPosition_MetaData), NewProp_ButtonPosition_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATableManager_Statics::NewProp_CurrentActionOn = { "CurrentActionOn", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATableManager, CurrentActionOn), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentActionOn_MetaData), NewProp_CurrentActionOn_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATableManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATableManager_Statics::NewProp_Seats_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATableManager_Statics::NewProp_Seats,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATableManager_Statics::NewProp_ButtonPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATableManager_Statics::NewProp_CurrentActionOn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATableManager_Statics::PropPointers) < 2048);
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
	Z_Construct_UClass_ATableManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ATableManager_Statics::PropPointers),
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
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSeat::StaticStruct, Z_Construct_UScriptStruct_FSeat_Statics::NewStructOps, TEXT("Seat"), &Z_Registration_Info_UScriptStruct_Seat, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSeat), 454910982U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATableManager, ATableManager::StaticClass, TEXT("ATableManager"), &Z_Registration_Info_UClass_ATableManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATableManager), 3958610430U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_guestt_OneDrive_Documents_Unreal_Projects_NLHE_Source_NLHE_Public_TableManager_h_3467800637(TEXT("/Script/NLHE"),
	Z_CompiledInDeferFile_FID_Users_guestt_OneDrive_Documents_Unreal_Projects_NLHE_Source_NLHE_Public_TableManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_guestt_OneDrive_Documents_Unreal_Projects_NLHE_Source_NLHE_Public_TableManager_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_guestt_OneDrive_Documents_Unreal_Projects_NLHE_Source_NLHE_Public_TableManager_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_guestt_OneDrive_Documents_Unreal_Projects_NLHE_Source_NLHE_Public_TableManager_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
