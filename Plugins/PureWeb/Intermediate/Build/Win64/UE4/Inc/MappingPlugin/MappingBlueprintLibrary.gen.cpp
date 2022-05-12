// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MappingPlugin/Public/MappingBlueprintLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMappingBlueprintLibrary() {}
// Cross Module References
	MAPPINGPLUGIN_API UEnum* Z_Construct_UEnum_MappingPlugin_GridDirectionality();
	UPackage* Z_Construct_UPackage__Script_MappingPlugin();
	MAPPINGPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FMappingWGS84();
	MAPPINGPLUGIN_API UClass* Z_Construct_UClass_UMappingBlueprintLibrary_NoRegister();
	MAPPINGPLUGIN_API UClass* Z_Construct_UClass_UMappingBlueprintLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	static UEnum* GridDirectionality_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MappingPlugin_GridDirectionality, Z_Construct_UPackage__Script_MappingPlugin(), TEXT("GridDirectionality"));
		}
		return Singleton;
	}
	template<> MAPPINGPLUGIN_API UEnum* StaticEnum<GridDirectionality>()
	{
		return GridDirectionality_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_GridDirectionality(GridDirectionality_StaticEnum, TEXT("/Script/MappingPlugin"), TEXT("GridDirectionality"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MappingPlugin_GridDirectionality_Hash() { return 1546365521U; }
	UEnum* Z_Construct_UEnum_MappingPlugin_GridDirectionality()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MappingPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("GridDirectionality"), 0, Get_Z_Construct_UEnum_MappingPlugin_GridDirectionality_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "PositiveYNorthPositiveXWest", (int64)PositiveYNorthPositiveXWest },
				{ "PositiveYNorthNegativeXWest", (int64)PositiveYNorthNegativeXWest },
				{ "NegativeYNorthPositiveXWest", (int64)NegativeYNorthPositiveXWest },
				{ "NegativeYNorthNegativeXWest", (int64)NegativeYNorthNegativeXWest },
				{ "PositiveXNorthPositiveYWest", (int64)PositiveXNorthPositiveYWest },
				{ "PositiveXNorthNegativeYWest", (int64)PositiveXNorthNegativeYWest },
				{ "NegativeXNorthPositiveYWest", (int64)NegativeXNorthPositiveYWest },
				{ "NegativeXNorthNegativeYWest", (int64)NegativeXNorthNegativeYWest },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/MappingBlueprintLibrary.h" },
				{ "NegativeXNorthNegativeYWest.Name", "NegativeXNorthNegativeYWest" },
				{ "NegativeXNorthPositiveYWest.Name", "NegativeXNorthPositiveYWest" },
				{ "NegativeYNorthNegativeXWest.Name", "NegativeYNorthNegativeXWest" },
				{ "NegativeYNorthPositiveXWest.Name", "NegativeYNorthPositiveXWest" },
				{ "PositiveXNorthNegativeYWest.Name", "PositiveXNorthNegativeYWest" },
				{ "PositiveXNorthPositiveYWest.Name", "PositiveXNorthPositiveYWest" },
				{ "PositiveYNorthNegativeXWest.Name", "PositiveYNorthNegativeXWest" },
				{ "PositiveYNorthPositiveXWest.Name", "PositiveYNorthPositiveXWest" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MappingPlugin,
				nullptr,
				"GridDirectionality",
				"GridDirectionality",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FMappingWGS84::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MAPPINGPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FMappingWGS84_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMappingWGS84, Z_Construct_UPackage__Script_MappingPlugin(), TEXT("MappingWGS84"), sizeof(FMappingWGS84), Get_Z_Construct_UScriptStruct_FMappingWGS84_Hash());
	}
	return Singleton;
}
template<> MAPPINGPLUGIN_API UScriptStruct* StaticStruct<FMappingWGS84>()
{
	return FMappingWGS84::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMappingWGS84(FMappingWGS84::StaticStruct, TEXT("/Script/MappingPlugin"), TEXT("MappingWGS84"), false, nullptr, nullptr);
static struct FScriptStruct_MappingPlugin_StaticRegisterNativesFMappingWGS84
{
	FScriptStruct_MappingPlugin_StaticRegisterNativesFMappingWGS84()
	{
		UScriptStruct::DeferCppStructOps<FMappingWGS84>(FName(TEXT("MappingWGS84")));
	}
} ScriptStruct_MappingPlugin_StaticRegisterNativesFMappingWGS84;
	struct Z_Construct_UScriptStruct_FMappingWGS84_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_longitude_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_longitude;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_latitude_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_latitude;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMappingWGS84_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MappingBlueprintLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMappingWGS84_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMappingWGS84>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMappingWGS84_Statics::NewProp_longitude_MetaData[] = {
		{ "Category", "Pureweb Mapping" },
		{ "ModuleRelativePath", "Public/MappingBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMappingWGS84_Statics::NewProp_longitude = { "longitude", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMappingWGS84, longitude), METADATA_PARAMS(Z_Construct_UScriptStruct_FMappingWGS84_Statics::NewProp_longitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMappingWGS84_Statics::NewProp_longitude_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMappingWGS84_Statics::NewProp_latitude_MetaData[] = {
		{ "Category", "Pureweb Mapping" },
		{ "ModuleRelativePath", "Public/MappingBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMappingWGS84_Statics::NewProp_latitude = { "latitude", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMappingWGS84, latitude), METADATA_PARAMS(Z_Construct_UScriptStruct_FMappingWGS84_Statics::NewProp_latitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMappingWGS84_Statics::NewProp_latitude_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMappingWGS84_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMappingWGS84_Statics::NewProp_longitude,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMappingWGS84_Statics::NewProp_latitude,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMappingWGS84_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MappingPlugin,
		nullptr,
		&NewStructOps,
		"MappingWGS84",
		sizeof(FMappingWGS84),
		alignof(FMappingWGS84),
		Z_Construct_UScriptStruct_FMappingWGS84_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMappingWGS84_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMappingWGS84_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMappingWGS84_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMappingWGS84()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMappingWGS84_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MappingPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MappingWGS84"), sizeof(FMappingWGS84), Get_Z_Construct_UScriptStruct_FMappingWGS84_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMappingWGS84_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMappingWGS84_Hash() { return 1055011261U; }
	DEFINE_FUNCTION(UMappingBlueprintLibrary::execBearingModel)
	{
		P_GET_STRUCT(FVector,Z_Param_origin);
		P_GET_STRUCT(FVector,Z_Param_point);
		P_GET_PROPERTY(FByteProperty,Z_Param_gridDirectionality);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UMappingBlueprintLibrary::BearingModel(Z_Param_origin,Z_Param_point,GridDirectionality(Z_Param_gridDirectionality));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMappingBlueprintLibrary::execBearingRealWorld)
	{
		P_GET_STRUCT(FMappingWGS84,Z_Param_origin);
		P_GET_STRUCT(FMappingWGS84,Z_Param_point);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UMappingBlueprintLibrary::BearingRealWorld(Z_Param_origin,Z_Param_point);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMappingBlueprintLibrary::execDistanceFromModelOrigin)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_pixelSize);
		P_GET_STRUCT(FVector,Z_Param_origin);
		P_GET_STRUCT(FVector,Z_Param_point);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UMappingBlueprintLibrary::DistanceFromModelOrigin(Z_Param_pixelSize,Z_Param_origin,Z_Param_point);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMappingBlueprintLibrary::execDistanceFromRealWorldOrigin)
	{
		P_GET_STRUCT(FMappingWGS84,Z_Param_origin);
		P_GET_STRUCT(FMappingWGS84,Z_Param_point);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UMappingBlueprintLibrary::DistanceFromRealWorldOrigin(Z_Param_origin,Z_Param_point);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMappingBlueprintLibrary::execRadiansToDegrees)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_radians);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UMappingBlueprintLibrary::RadiansToDegrees(Z_Param_radians);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMappingBlueprintLibrary::execDegreesToRadians)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_degrees);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UMappingBlueprintLibrary::DegreesToRadians(Z_Param_degrees);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMappingBlueprintLibrary::execConvertModelPointToWGS84Point)
	{
		P_GET_STRUCT(FVector,Z_Param_modelOrigin);
		P_GET_STRUCT(FMappingWGS84,Z_Param_realWorldOrigin);
		P_GET_PROPERTY(FFloatProperty,Z_Param_pixelSize);
		P_GET_STRUCT(FVector,Z_Param_pointToConvert);
		P_GET_PROPERTY(FByteProperty,Z_Param_directionality);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FMappingWGS84*)Z_Param__Result=UMappingBlueprintLibrary::ConvertModelPointToWGS84Point(Z_Param_modelOrigin,Z_Param_realWorldOrigin,Z_Param_pixelSize,Z_Param_pointToConvert,GridDirectionality(Z_Param_directionality));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMappingBlueprintLibrary::execConvertWGS84PointToModelPoint)
	{
		P_GET_STRUCT(FVector,Z_Param_modelOrigin);
		P_GET_STRUCT(FMappingWGS84,Z_Param_realWorldOrigin);
		P_GET_PROPERTY(FFloatProperty,Z_Param_pixelSize);
		P_GET_STRUCT(FMappingWGS84,Z_Param_pointToConvert);
		P_GET_PROPERTY(FByteProperty,Z_Param_directionality);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UMappingBlueprintLibrary::ConvertWGS84PointToModelPoint(Z_Param_modelOrigin,Z_Param_realWorldOrigin,Z_Param_pixelSize,Z_Param_pointToConvert,GridDirectionality(Z_Param_directionality));
		P_NATIVE_END;
	}
	void UMappingBlueprintLibrary::StaticRegisterNativesUMappingBlueprintLibrary()
	{
		UClass* Class = UMappingBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BearingModel", &UMappingBlueprintLibrary::execBearingModel },
			{ "BearingRealWorld", &UMappingBlueprintLibrary::execBearingRealWorld },
			{ "ConvertModelPointToWGS84Point", &UMappingBlueprintLibrary::execConvertModelPointToWGS84Point },
			{ "ConvertWGS84PointToModelPoint", &UMappingBlueprintLibrary::execConvertWGS84PointToModelPoint },
			{ "DegreesToRadians", &UMappingBlueprintLibrary::execDegreesToRadians },
			{ "DistanceFromModelOrigin", &UMappingBlueprintLibrary::execDistanceFromModelOrigin },
			{ "DistanceFromRealWorldOrigin", &UMappingBlueprintLibrary::execDistanceFromRealWorldOrigin },
			{ "RadiansToDegrees", &UMappingBlueprintLibrary::execRadiansToDegrees },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMappingBlueprintLibrary_BearingModel_Statics
	{
		struct MappingBlueprintLibrary_eventBearingModel_Parms
		{
			FVector origin;
			FVector point;
			TEnumAsByte<GridDirectionality> gridDirectionality;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_origin;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_point;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_gridDirectionality;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMappingBlueprintLibrary_BearingModel_Statics::NewProp_origin = { "origin", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MappingBlueprintLibrary_eventBearingModel_Parms, origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMappingBlueprintLibrary_BearingModel_Statics::NewProp_point = { "point", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MappingBlueprintLibrary_eventBearingModel_Parms, point), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMappingBlueprintLibrary_BearingModel_Statics::NewProp_gridDirectionality = { "gridDirectionality", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MappingBlueprintLibrary_eventBearingModel_Parms, gridDirectionality), Z_Construct_UEnum_MappingPlugin_GridDirectionality, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMappingBlueprintLibrary_BearingModel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MappingBlueprintLibrary_eventBearingModel_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMappingBlueprintLibrary_BearingModel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMappingBlueprintLibrary_BearingModel_Statics::NewProp_origin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMappingBlueprintLibrary_BearingModel_Statics::NewProp_point,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMappingBlueprintLibrary_BearingModel_Statics::NewProp_gridDirectionality,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMappingBlueprintLibrary_BearingModel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMappingBlueprintLibrary_BearingModel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pureweb Mapping" },
		{ "ModuleRelativePath", "Public/MappingBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMappingBlueprintLibrary_BearingModel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMappingBlueprintLibrary, nullptr, "BearingModel", nullptr, nullptr, sizeof(MappingBlueprintLibrary_eventBearingModel_Parms), Z_Construct_UFunction_UMappingBlueprintLibrary_BearingModel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMappingBlueprintLibrary_BearingModel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMappingBlueprintLibrary_BearingModel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMappingBlueprintLibrary_BearingModel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMappingBlueprintLibrary_BearingModel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMappingBlueprintLibrary_BearingModel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMappingBlueprintLibrary_BearingRealWorld_Statics
	{
		struct MappingBlueprintLibrary_eventBearingRealWorld_Parms
		{
			FMappingWGS84 origin;
			FMappingWGS84 point;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_origin;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_point;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMappingBlueprintLibrary_BearingRealWorld_Statics::NewProp_origin = { "origin", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MappingBlueprintLibrary_eventBearingRealWorld_Parms, origin), Z_Construct_UScriptStruct_FMappingWGS84, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMappingBlueprintLibrary_BearingRealWorld_Statics::NewProp_point = { "point", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MappingBlueprintLibrary_eventBearingRealWorld_Parms, point), Z_Construct_UScriptStruct_FMappingWGS84, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMappingBlueprintLibrary_BearingRealWorld_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MappingBlueprintLibrary_eventBearingRealWorld_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMappingBlueprintLibrary_BearingRealWorld_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMappingBlueprintLibrary_BearingRealWorld_Statics::NewProp_origin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMappingBlueprintLibrary_BearingRealWorld_Statics::NewProp_point,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMappingBlueprintLibrary_BearingRealWorld_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMappingBlueprintLibrary_BearingRealWorld_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pureweb Mapping" },
		{ "ModuleRelativePath", "Public/MappingBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMappingBlueprintLibrary_BearingRealWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMappingBlueprintLibrary, nullptr, "BearingRealWorld", nullptr, nullptr, sizeof(MappingBlueprintLibrary_eventBearingRealWorld_Parms), Z_Construct_UFunction_UMappingBlueprintLibrary_BearingRealWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMappingBlueprintLibrary_BearingRealWorld_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMappingBlueprintLibrary_BearingRealWorld_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMappingBlueprintLibrary_BearingRealWorld_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMappingBlueprintLibrary_BearingRealWorld()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMappingBlueprintLibrary_BearingRealWorld_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMappingBlueprintLibrary_ConvertModelPointToWGS84Point_Statics
	{
		struct MappingBlueprintLibrary_eventConvertModelPointToWGS84Point_Parms
		{
			FVector modelOrigin;
			FMappingWGS84 realWorldOrigin;
			float pixelSize;
			FVector pointToConvert;
			TEnumAsByte<GridDirectionality> directionality;
			FMappingWGS84 ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_modelOrigin;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_realWorldOrigin;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_pixelSize;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_pointToConvert;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_directionality;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMappingBlueprintLibrary_ConvertModelPointToWGS84Point_Statics::NewProp_modelOrigin = { "modelOrigin", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MappingBlueprintLibrary_eventConvertModelPointToWGS84Point_Parms, modelOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMappingBlueprintLibrary_ConvertModelPointToWGS84Point_Statics::NewProp_realWorldOrigin = { "realWorldOrigin", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MappingBlueprintLibrary_eventConvertModelPointToWGS84Point_Parms, realWorldOrigin), Z_Construct_UScriptStruct_FMappingWGS84, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMappingBlueprintLibrary_ConvertModelPointToWGS84Point_Statics::NewProp_pixelSize = { "pixelSize", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MappingBlueprintLibrary_eventConvertModelPointToWGS84Point_Parms, pixelSize), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMappingBlueprintLibrary_ConvertModelPointToWGS84Point_Statics::NewProp_pointToConvert = { "pointToConvert", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MappingBlueprintLibrary_eventConvertModelPointToWGS84Point_Parms, pointToConvert), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMappingBlueprintLibrary_ConvertModelPointToWGS84Point_Statics::NewProp_directionality = { "directionality", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MappingBlueprintLibrary_eventConvertModelPointToWGS84Point_Parms, directionality), Z_Construct_UEnum_MappingPlugin_GridDirectionality, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMappingBlueprintLibrary_ConvertModelPointToWGS84Point_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MappingBlueprintLibrary_eventConvertModelPointToWGS84Point_Parms, ReturnValue), Z_Construct_UScriptStruct_FMappingWGS84, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMappingBlueprintLibrary_ConvertModelPointToWGS84Point_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMappingBlueprintLibrary_ConvertModelPointToWGS84Point_Statics::NewProp_modelOrigin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMappingBlueprintLibrary_ConvertModelPointToWGS84Point_Statics::NewProp_realWorldOrigin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMappingBlueprintLibrary_ConvertModelPointToWGS84Point_Statics::NewProp_pixelSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMappingBlueprintLibrary_ConvertModelPointToWGS84Point_Statics::NewProp_pointToConvert,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMappingBlueprintLibrary_ConvertModelPointToWGS84Point_Statics::NewProp_directionality,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMappingBlueprintLibrary_ConvertModelPointToWGS84Point_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMappingBlueprintLibrary_ConvertModelPointToWGS84Point_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pureweb Mapping" },
		{ "ModuleRelativePath", "Public/MappingBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMappingBlueprintLibrary_ConvertModelPointToWGS84Point_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMappingBlueprintLibrary, nullptr, "ConvertModelPointToWGS84Point", nullptr, nullptr, sizeof(MappingBlueprintLibrary_eventConvertModelPointToWGS84Point_Parms), Z_Construct_UFunction_UMappingBlueprintLibrary_ConvertModelPointToWGS84Point_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMappingBlueprintLibrary_ConvertModelPointToWGS84Point_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMappingBlueprintLibrary_ConvertModelPointToWGS84Point_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMappingBlueprintLibrary_ConvertModelPointToWGS84Point_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMappingBlueprintLibrary_ConvertModelPointToWGS84Point()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMappingBlueprintLibrary_ConvertModelPointToWGS84Point_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMappingBlueprintLibrary_ConvertWGS84PointToModelPoint_Statics
	{
		struct MappingBlueprintLibrary_eventConvertWGS84PointToModelPoint_Parms
		{
			FVector modelOrigin;
			FMappingWGS84 realWorldOrigin;
			float pixelSize;
			FMappingWGS84 pointToConvert;
			TEnumAsByte<GridDirectionality> directionality;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_modelOrigin;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_realWorldOrigin;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_pixelSize;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_pointToConvert;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_directionality;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMappingBlueprintLibrary_ConvertWGS84PointToModelPoint_Statics::NewProp_modelOrigin = { "modelOrigin", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MappingBlueprintLibrary_eventConvertWGS84PointToModelPoint_Parms, modelOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMappingBlueprintLibrary_ConvertWGS84PointToModelPoint_Statics::NewProp_realWorldOrigin = { "realWorldOrigin", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MappingBlueprintLibrary_eventConvertWGS84PointToModelPoint_Parms, realWorldOrigin), Z_Construct_UScriptStruct_FMappingWGS84, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMappingBlueprintLibrary_ConvertWGS84PointToModelPoint_Statics::NewProp_pixelSize = { "pixelSize", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MappingBlueprintLibrary_eventConvertWGS84PointToModelPoint_Parms, pixelSize), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMappingBlueprintLibrary_ConvertWGS84PointToModelPoint_Statics::NewProp_pointToConvert = { "pointToConvert", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MappingBlueprintLibrary_eventConvertWGS84PointToModelPoint_Parms, pointToConvert), Z_Construct_UScriptStruct_FMappingWGS84, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMappingBlueprintLibrary_ConvertWGS84PointToModelPoint_Statics::NewProp_directionality = { "directionality", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MappingBlueprintLibrary_eventConvertWGS84PointToModelPoint_Parms, directionality), Z_Construct_UEnum_MappingPlugin_GridDirectionality, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMappingBlueprintLibrary_ConvertWGS84PointToModelPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MappingBlueprintLibrary_eventConvertWGS84PointToModelPoint_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMappingBlueprintLibrary_ConvertWGS84PointToModelPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMappingBlueprintLibrary_ConvertWGS84PointToModelPoint_Statics::NewProp_modelOrigin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMappingBlueprintLibrary_ConvertWGS84PointToModelPoint_Statics::NewProp_realWorldOrigin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMappingBlueprintLibrary_ConvertWGS84PointToModelPoint_Statics::NewProp_pixelSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMappingBlueprintLibrary_ConvertWGS84PointToModelPoint_Statics::NewProp_pointToConvert,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMappingBlueprintLibrary_ConvertWGS84PointToModelPoint_Statics::NewProp_directionality,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMappingBlueprintLibrary_ConvertWGS84PointToModelPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMappingBlueprintLibrary_ConvertWGS84PointToModelPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pureweb Mapping" },
		{ "ModuleRelativePath", "Public/MappingBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMappingBlueprintLibrary_ConvertWGS84PointToModelPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMappingBlueprintLibrary, nullptr, "ConvertWGS84PointToModelPoint", nullptr, nullptr, sizeof(MappingBlueprintLibrary_eventConvertWGS84PointToModelPoint_Parms), Z_Construct_UFunction_UMappingBlueprintLibrary_ConvertWGS84PointToModelPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMappingBlueprintLibrary_ConvertWGS84PointToModelPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMappingBlueprintLibrary_ConvertWGS84PointToModelPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMappingBlueprintLibrary_ConvertWGS84PointToModelPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMappingBlueprintLibrary_ConvertWGS84PointToModelPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMappingBlueprintLibrary_ConvertWGS84PointToModelPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMappingBlueprintLibrary_DegreesToRadians_Statics
	{
		struct MappingBlueprintLibrary_eventDegreesToRadians_Parms
		{
			float degrees;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_degrees;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMappingBlueprintLibrary_DegreesToRadians_Statics::NewProp_degrees = { "degrees", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MappingBlueprintLibrary_eventDegreesToRadians_Parms, degrees), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMappingBlueprintLibrary_DegreesToRadians_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MappingBlueprintLibrary_eventDegreesToRadians_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMappingBlueprintLibrary_DegreesToRadians_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMappingBlueprintLibrary_DegreesToRadians_Statics::NewProp_degrees,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMappingBlueprintLibrary_DegreesToRadians_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMappingBlueprintLibrary_DegreesToRadians_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pureweb Mapping" },
		{ "ModuleRelativePath", "Public/MappingBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMappingBlueprintLibrary_DegreesToRadians_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMappingBlueprintLibrary, nullptr, "DegreesToRadians", nullptr, nullptr, sizeof(MappingBlueprintLibrary_eventDegreesToRadians_Parms), Z_Construct_UFunction_UMappingBlueprintLibrary_DegreesToRadians_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMappingBlueprintLibrary_DegreesToRadians_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMappingBlueprintLibrary_DegreesToRadians_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMappingBlueprintLibrary_DegreesToRadians_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMappingBlueprintLibrary_DegreesToRadians()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMappingBlueprintLibrary_DegreesToRadians_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMappingBlueprintLibrary_DistanceFromModelOrigin_Statics
	{
		struct MappingBlueprintLibrary_eventDistanceFromModelOrigin_Parms
		{
			float pixelSize;
			FVector origin;
			FVector point;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_pixelSize;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_origin;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_point;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMappingBlueprintLibrary_DistanceFromModelOrigin_Statics::NewProp_pixelSize = { "pixelSize", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MappingBlueprintLibrary_eventDistanceFromModelOrigin_Parms, pixelSize), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMappingBlueprintLibrary_DistanceFromModelOrigin_Statics::NewProp_origin = { "origin", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MappingBlueprintLibrary_eventDistanceFromModelOrigin_Parms, origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMappingBlueprintLibrary_DistanceFromModelOrigin_Statics::NewProp_point = { "point", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MappingBlueprintLibrary_eventDistanceFromModelOrigin_Parms, point), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMappingBlueprintLibrary_DistanceFromModelOrigin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MappingBlueprintLibrary_eventDistanceFromModelOrigin_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMappingBlueprintLibrary_DistanceFromModelOrigin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMappingBlueprintLibrary_DistanceFromModelOrigin_Statics::NewProp_pixelSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMappingBlueprintLibrary_DistanceFromModelOrigin_Statics::NewProp_origin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMappingBlueprintLibrary_DistanceFromModelOrigin_Statics::NewProp_point,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMappingBlueprintLibrary_DistanceFromModelOrigin_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMappingBlueprintLibrary_DistanceFromModelOrigin_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pureweb Mapping" },
		{ "ModuleRelativePath", "Public/MappingBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMappingBlueprintLibrary_DistanceFromModelOrigin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMappingBlueprintLibrary, nullptr, "DistanceFromModelOrigin", nullptr, nullptr, sizeof(MappingBlueprintLibrary_eventDistanceFromModelOrigin_Parms), Z_Construct_UFunction_UMappingBlueprintLibrary_DistanceFromModelOrigin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMappingBlueprintLibrary_DistanceFromModelOrigin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMappingBlueprintLibrary_DistanceFromModelOrigin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMappingBlueprintLibrary_DistanceFromModelOrigin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMappingBlueprintLibrary_DistanceFromModelOrigin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMappingBlueprintLibrary_DistanceFromModelOrigin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMappingBlueprintLibrary_DistanceFromRealWorldOrigin_Statics
	{
		struct MappingBlueprintLibrary_eventDistanceFromRealWorldOrigin_Parms
		{
			FMappingWGS84 origin;
			FMappingWGS84 point;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_origin;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_point;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMappingBlueprintLibrary_DistanceFromRealWorldOrigin_Statics::NewProp_origin = { "origin", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MappingBlueprintLibrary_eventDistanceFromRealWorldOrigin_Parms, origin), Z_Construct_UScriptStruct_FMappingWGS84, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMappingBlueprintLibrary_DistanceFromRealWorldOrigin_Statics::NewProp_point = { "point", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MappingBlueprintLibrary_eventDistanceFromRealWorldOrigin_Parms, point), Z_Construct_UScriptStruct_FMappingWGS84, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMappingBlueprintLibrary_DistanceFromRealWorldOrigin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MappingBlueprintLibrary_eventDistanceFromRealWorldOrigin_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMappingBlueprintLibrary_DistanceFromRealWorldOrigin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMappingBlueprintLibrary_DistanceFromRealWorldOrigin_Statics::NewProp_origin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMappingBlueprintLibrary_DistanceFromRealWorldOrigin_Statics::NewProp_point,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMappingBlueprintLibrary_DistanceFromRealWorldOrigin_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMappingBlueprintLibrary_DistanceFromRealWorldOrigin_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pureweb Mapping" },
		{ "ModuleRelativePath", "Public/MappingBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMappingBlueprintLibrary_DistanceFromRealWorldOrigin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMappingBlueprintLibrary, nullptr, "DistanceFromRealWorldOrigin", nullptr, nullptr, sizeof(MappingBlueprintLibrary_eventDistanceFromRealWorldOrigin_Parms), Z_Construct_UFunction_UMappingBlueprintLibrary_DistanceFromRealWorldOrigin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMappingBlueprintLibrary_DistanceFromRealWorldOrigin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMappingBlueprintLibrary_DistanceFromRealWorldOrigin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMappingBlueprintLibrary_DistanceFromRealWorldOrigin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMappingBlueprintLibrary_DistanceFromRealWorldOrigin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMappingBlueprintLibrary_DistanceFromRealWorldOrigin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMappingBlueprintLibrary_RadiansToDegrees_Statics
	{
		struct MappingBlueprintLibrary_eventRadiansToDegrees_Parms
		{
			float radians;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_radians;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMappingBlueprintLibrary_RadiansToDegrees_Statics::NewProp_radians = { "radians", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MappingBlueprintLibrary_eventRadiansToDegrees_Parms, radians), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMappingBlueprintLibrary_RadiansToDegrees_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MappingBlueprintLibrary_eventRadiansToDegrees_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMappingBlueprintLibrary_RadiansToDegrees_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMappingBlueprintLibrary_RadiansToDegrees_Statics::NewProp_radians,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMappingBlueprintLibrary_RadiansToDegrees_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMappingBlueprintLibrary_RadiansToDegrees_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pureweb Mapping" },
		{ "ModuleRelativePath", "Public/MappingBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMappingBlueprintLibrary_RadiansToDegrees_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMappingBlueprintLibrary, nullptr, "RadiansToDegrees", nullptr, nullptr, sizeof(MappingBlueprintLibrary_eventRadiansToDegrees_Parms), Z_Construct_UFunction_UMappingBlueprintLibrary_RadiansToDegrees_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMappingBlueprintLibrary_RadiansToDegrees_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMappingBlueprintLibrary_RadiansToDegrees_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMappingBlueprintLibrary_RadiansToDegrees_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMappingBlueprintLibrary_RadiansToDegrees()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMappingBlueprintLibrary_RadiansToDegrees_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMappingBlueprintLibrary_NoRegister()
	{
		return UMappingBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UMappingBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMappingBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_MappingPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMappingBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMappingBlueprintLibrary_BearingModel, "BearingModel" }, // 2724308032
		{ &Z_Construct_UFunction_UMappingBlueprintLibrary_BearingRealWorld, "BearingRealWorld" }, // 868983982
		{ &Z_Construct_UFunction_UMappingBlueprintLibrary_ConvertModelPointToWGS84Point, "ConvertModelPointToWGS84Point" }, // 2465180055
		{ &Z_Construct_UFunction_UMappingBlueprintLibrary_ConvertWGS84PointToModelPoint, "ConvertWGS84PointToModelPoint" }, // 1050192105
		{ &Z_Construct_UFunction_UMappingBlueprintLibrary_DegreesToRadians, "DegreesToRadians" }, // 1504496364
		{ &Z_Construct_UFunction_UMappingBlueprintLibrary_DistanceFromModelOrigin, "DistanceFromModelOrigin" }, // 584381263
		{ &Z_Construct_UFunction_UMappingBlueprintLibrary_DistanceFromRealWorldOrigin, "DistanceFromRealWorldOrigin" }, // 2533784265
		{ &Z_Construct_UFunction_UMappingBlueprintLibrary_RadiansToDegrees, "RadiansToDegrees" }, // 3566341514
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMappingBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MappingBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/MappingBlueprintLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMappingBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMappingBlueprintLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMappingBlueprintLibrary_Statics::ClassParams = {
		&UMappingBlueprintLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMappingBlueprintLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMappingBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMappingBlueprintLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMappingBlueprintLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMappingBlueprintLibrary, 4884909);
	template<> MAPPINGPLUGIN_API UClass* StaticClass<UMappingBlueprintLibrary>()
	{
		return UMappingBlueprintLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMappingBlueprintLibrary(Z_Construct_UClass_UMappingBlueprintLibrary, &UMappingBlueprintLibrary::StaticClass, TEXT("/Script/MappingPlugin"), TEXT("UMappingBlueprintLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMappingBlueprintLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
