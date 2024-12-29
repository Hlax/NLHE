// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ActionInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NLHE_ActionInterface_generated_h
#error "ActionInterface.generated.h already included, missing '#pragma once' in ActionInterface.h"
#endif
#define NLHE_ActionInterface_generated_h

#define FID_Users_guestt_OneDrive_Documents_Unreal_Projects_NLHE_Source_NLHE_Public_ActionInterface_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NLHE_API UActionInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UActionInterface(UActionInterface&&); \
	UActionInterface(const UActionInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NLHE_API, UActionInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActionInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActionInterface) \
	NLHE_API virtual ~UActionInterface();


#define FID_Users_guestt_OneDrive_Documents_Unreal_Projects_NLHE_Source_NLHE_Public_ActionInterface_h_10_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUActionInterface(); \
	friend struct Z_Construct_UClass_UActionInterface_Statics; \
public: \
	DECLARE_CLASS(UActionInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/NLHE"), NLHE_API) \
	DECLARE_SERIALIZER(UActionInterface)


#define FID_Users_guestt_OneDrive_Documents_Unreal_Projects_NLHE_Source_NLHE_Public_ActionInterface_h_10_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Users_guestt_OneDrive_Documents_Unreal_Projects_NLHE_Source_NLHE_Public_ActionInterface_h_10_GENERATED_UINTERFACE_BODY() \
	FID_Users_guestt_OneDrive_Documents_Unreal_Projects_NLHE_Source_NLHE_Public_ActionInterface_h_10_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_guestt_OneDrive_Documents_Unreal_Projects_NLHE_Source_NLHE_Public_ActionInterface_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IActionInterface() {} \
public: \
	typedef UActionInterface UClassType; \
	typedef IActionInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Users_guestt_OneDrive_Documents_Unreal_Projects_NLHE_Source_NLHE_Public_ActionInterface_h_8_PROLOG
#define FID_Users_guestt_OneDrive_Documents_Unreal_Projects_NLHE_Source_NLHE_Public_ActionInterface_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_guestt_OneDrive_Documents_Unreal_Projects_NLHE_Source_NLHE_Public_ActionInterface_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NLHE_API UClass* StaticClass<class UActionInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_guestt_OneDrive_Documents_Unreal_Projects_NLHE_Source_NLHE_Public_ActionInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
