// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
struct FMappingWGS84;
#ifdef MAPPINGPLUGIN_MappingBlueprintLibrary_generated_h
#error "MappingBlueprintLibrary.generated.h already included, missing '#pragma once' in MappingBlueprintLibrary.h"
#endif
#define MAPPINGPLUGIN_MappingBlueprintLibrary_generated_h

#define Showroom_Plugins_PureWeb_Source_MappingPlugin_Public_MappingBlueprintLibrary_h_20_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMappingWGS84_Statics; \
	MAPPINGPLUGIN_API static class UScriptStruct* StaticStruct();


template<> MAPPINGPLUGIN_API UScriptStruct* StaticStruct<struct FMappingWGS84>();

#define Showroom_Plugins_PureWeb_Source_MappingPlugin_Public_MappingBlueprintLibrary_h_52_SPARSE_DATA
#define Showroom_Plugins_PureWeb_Source_MappingPlugin_Public_MappingBlueprintLibrary_h_52_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBearingModel); \
	DECLARE_FUNCTION(execBearingRealWorld); \
	DECLARE_FUNCTION(execDistanceFromModelOrigin); \
	DECLARE_FUNCTION(execDistanceFromRealWorldOrigin); \
	DECLARE_FUNCTION(execRadiansToDegrees); \
	DECLARE_FUNCTION(execDegreesToRadians); \
	DECLARE_FUNCTION(execConvertModelPointToWGS84Point); \
	DECLARE_FUNCTION(execConvertWGS84PointToModelPoint);


#define Showroom_Plugins_PureWeb_Source_MappingPlugin_Public_MappingBlueprintLibrary_h_52_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBearingModel); \
	DECLARE_FUNCTION(execBearingRealWorld); \
	DECLARE_FUNCTION(execDistanceFromModelOrigin); \
	DECLARE_FUNCTION(execDistanceFromRealWorldOrigin); \
	DECLARE_FUNCTION(execRadiansToDegrees); \
	DECLARE_FUNCTION(execDegreesToRadians); \
	DECLARE_FUNCTION(execConvertModelPointToWGS84Point); \
	DECLARE_FUNCTION(execConvertWGS84PointToModelPoint);


#define Showroom_Plugins_PureWeb_Source_MappingPlugin_Public_MappingBlueprintLibrary_h_52_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMappingBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UMappingBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UMappingBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MappingPlugin"), NO_API) \
	DECLARE_SERIALIZER(UMappingBlueprintLibrary)


#define Showroom_Plugins_PureWeb_Source_MappingPlugin_Public_MappingBlueprintLibrary_h_52_INCLASS \
private: \
	static void StaticRegisterNativesUMappingBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UMappingBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UMappingBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MappingPlugin"), NO_API) \
	DECLARE_SERIALIZER(UMappingBlueprintLibrary)


#define Showroom_Plugins_PureWeb_Source_MappingPlugin_Public_MappingBlueprintLibrary_h_52_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMappingBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMappingBlueprintLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMappingBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMappingBlueprintLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMappingBlueprintLibrary(UMappingBlueprintLibrary&&); \
	NO_API UMappingBlueprintLibrary(const UMappingBlueprintLibrary&); \
public:


#define Showroom_Plugins_PureWeb_Source_MappingPlugin_Public_MappingBlueprintLibrary_h_52_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMappingBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMappingBlueprintLibrary(UMappingBlueprintLibrary&&); \
	NO_API UMappingBlueprintLibrary(const UMappingBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMappingBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMappingBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMappingBlueprintLibrary)


#define Showroom_Plugins_PureWeb_Source_MappingPlugin_Public_MappingBlueprintLibrary_h_52_PRIVATE_PROPERTY_OFFSET
#define Showroom_Plugins_PureWeb_Source_MappingPlugin_Public_MappingBlueprintLibrary_h_49_PROLOG
#define Showroom_Plugins_PureWeb_Source_MappingPlugin_Public_MappingBlueprintLibrary_h_52_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Showroom_Plugins_PureWeb_Source_MappingPlugin_Public_MappingBlueprintLibrary_h_52_PRIVATE_PROPERTY_OFFSET \
	Showroom_Plugins_PureWeb_Source_MappingPlugin_Public_MappingBlueprintLibrary_h_52_SPARSE_DATA \
	Showroom_Plugins_PureWeb_Source_MappingPlugin_Public_MappingBlueprintLibrary_h_52_RPC_WRAPPERS \
	Showroom_Plugins_PureWeb_Source_MappingPlugin_Public_MappingBlueprintLibrary_h_52_INCLASS \
	Showroom_Plugins_PureWeb_Source_MappingPlugin_Public_MappingBlueprintLibrary_h_52_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Showroom_Plugins_PureWeb_Source_MappingPlugin_Public_MappingBlueprintLibrary_h_52_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Showroom_Plugins_PureWeb_Source_MappingPlugin_Public_MappingBlueprintLibrary_h_52_PRIVATE_PROPERTY_OFFSET \
	Showroom_Plugins_PureWeb_Source_MappingPlugin_Public_MappingBlueprintLibrary_h_52_SPARSE_DATA \
	Showroom_Plugins_PureWeb_Source_MappingPlugin_Public_MappingBlueprintLibrary_h_52_RPC_WRAPPERS_NO_PURE_DECLS \
	Showroom_Plugins_PureWeb_Source_MappingPlugin_Public_MappingBlueprintLibrary_h_52_INCLASS_NO_PURE_DECLS \
	Showroom_Plugins_PureWeb_Source_MappingPlugin_Public_MappingBlueprintLibrary_h_52_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MAPPINGPLUGIN_API UClass* StaticClass<class UMappingBlueprintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Showroom_Plugins_PureWeb_Source_MappingPlugin_Public_MappingBlueprintLibrary_h


#define FOREACH_ENUM_GRIDDIRECTIONALITY(op) \
	op(PositiveYNorthPositiveXWest) \
	op(PositiveYNorthNegativeXWest) \
	op(NegativeYNorthPositiveXWest) \
	op(NegativeYNorthNegativeXWest) \
	op(PositiveXNorthPositiveYWest) \
	op(PositiveXNorthNegativeYWest) \
	op(NegativeXNorthPositiveYWest) \
	op(NegativeXNorthNegativeYWest) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
