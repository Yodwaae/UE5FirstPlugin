// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FirstPluginUE5BPLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FIRSTPLUGINUE5_FirstPluginUE5BPLibrary_generated_h
#error "FirstPluginUE5BPLibrary.generated.h already included, missing '#pragma once' in FirstPluginUE5BPLibrary.h"
#endif
#define FIRSTPLUGINUE5_FirstPluginUE5BPLibrary_generated_h

#define FID_FirstPlugin_Plugins_FirstPluginUE5_Source_FirstPluginUE5_Public_FirstPluginUE5BPLibrary_h_28_RPC_WRAPPERS \
	DECLARE_FUNCTION(execFirstPluginUE5SampleFunction);


#define FID_FirstPlugin_Plugins_FirstPluginUE5_Source_FirstPluginUE5_Public_FirstPluginUE5BPLibrary_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUFirstPluginUE5BPLibrary(); \
	friend struct Z_Construct_UClass_UFirstPluginUE5BPLibrary_Statics; \
public: \
	DECLARE_CLASS(UFirstPluginUE5BPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirstPluginUE5"), NO_API) \
	DECLARE_SERIALIZER(UFirstPluginUE5BPLibrary)


#define FID_FirstPlugin_Plugins_FirstPluginUE5_Source_FirstPluginUE5_Public_FirstPluginUE5BPLibrary_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFirstPluginUE5BPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFirstPluginUE5BPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFirstPluginUE5BPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFirstPluginUE5BPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UFirstPluginUE5BPLibrary(UFirstPluginUE5BPLibrary&&); \
	UFirstPluginUE5BPLibrary(const UFirstPluginUE5BPLibrary&); \
public: \
	NO_API virtual ~UFirstPluginUE5BPLibrary();


#define FID_FirstPlugin_Plugins_FirstPluginUE5_Source_FirstPluginUE5_Public_FirstPluginUE5BPLibrary_h_25_PROLOG
#define FID_FirstPlugin_Plugins_FirstPluginUE5_Source_FirstPluginUE5_Public_FirstPluginUE5BPLibrary_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FirstPlugin_Plugins_FirstPluginUE5_Source_FirstPluginUE5_Public_FirstPluginUE5BPLibrary_h_28_RPC_WRAPPERS \
	FID_FirstPlugin_Plugins_FirstPluginUE5_Source_FirstPluginUE5_Public_FirstPluginUE5BPLibrary_h_28_INCLASS \
	FID_FirstPlugin_Plugins_FirstPluginUE5_Source_FirstPluginUE5_Public_FirstPluginUE5BPLibrary_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIRSTPLUGINUE5_API UClass* StaticClass<class UFirstPluginUE5BPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_FirstPlugin_Plugins_FirstPluginUE5_Source_FirstPluginUE5_Public_FirstPluginUE5BPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
