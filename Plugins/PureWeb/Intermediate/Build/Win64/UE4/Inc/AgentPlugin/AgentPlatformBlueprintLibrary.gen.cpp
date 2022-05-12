// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AgentPlugin/Public/AgentPlatformBlueprintLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAgentPlatformBlueprintLibrary() {}
// Cross Module References
	AGENTPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FAgentPlatformJsonValue();
	UPackage* Z_Construct_UPackage__Script_AgentPlugin();
	AGENTPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FAgentPlatformJsonObject();
	AGENTPLUGIN_API UClass* Z_Construct_UClass_UAgentPlatformBlueprintLibrary_NoRegister();
	AGENTPLUGIN_API UClass* Z_Construct_UClass_UAgentPlatformBlueprintLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
// End Cross Module References
class UScriptStruct* FAgentPlatformJsonValue::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AGENTPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FAgentPlatformJsonValue_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAgentPlatformJsonValue, Z_Construct_UPackage__Script_AgentPlugin(), TEXT("AgentPlatformJsonValue"), sizeof(FAgentPlatformJsonValue), Get_Z_Construct_UScriptStruct_FAgentPlatformJsonValue_Hash());
	}
	return Singleton;
}
template<> AGENTPLUGIN_API UScriptStruct* StaticStruct<FAgentPlatformJsonValue>()
{
	return FAgentPlatformJsonValue::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAgentPlatformJsonValue(FAgentPlatformJsonValue::StaticStruct, TEXT("/Script/AgentPlugin"), TEXT("AgentPlatformJsonValue"), false, nullptr, nullptr);
static struct FScriptStruct_AgentPlugin_StaticRegisterNativesFAgentPlatformJsonValue
{
	FScriptStruct_AgentPlugin_StaticRegisterNativesFAgentPlatformJsonValue()
	{
		UScriptStruct::DeferCppStructOps<FAgentPlatformJsonValue>(FName(TEXT("AgentPlatformJsonValue")));
	}
} ScriptStruct_AgentPlugin_StaticRegisterNativesFAgentPlatformJsonValue;
	struct Z_Construct_UScriptStruct_FAgentPlatformJsonValue_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAgentPlatformJsonValue_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AgentPlatformBlueprintLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAgentPlatformJsonValue_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAgentPlatformJsonValue>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAgentPlatformJsonValue_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AgentPlugin,
		nullptr,
		&NewStructOps,
		"AgentPlatformJsonValue",
		sizeof(FAgentPlatformJsonValue),
		alignof(FAgentPlatformJsonValue),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAgentPlatformJsonValue_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAgentPlatformJsonValue_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAgentPlatformJsonValue()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAgentPlatformJsonValue_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AgentPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AgentPlatformJsonValue"), sizeof(FAgentPlatformJsonValue), Get_Z_Construct_UScriptStruct_FAgentPlatformJsonValue_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAgentPlatformJsonValue_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAgentPlatformJsonValue_Hash() { return 1245639890U; }
class UScriptStruct* FAgentPlatformJsonObject::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AGENTPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FAgentPlatformJsonObject_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAgentPlatformJsonObject, Z_Construct_UPackage__Script_AgentPlugin(), TEXT("AgentPlatformJsonObject"), sizeof(FAgentPlatformJsonObject), Get_Z_Construct_UScriptStruct_FAgentPlatformJsonObject_Hash());
	}
	return Singleton;
}
template<> AGENTPLUGIN_API UScriptStruct* StaticStruct<FAgentPlatformJsonObject>()
{
	return FAgentPlatformJsonObject::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAgentPlatformJsonObject(FAgentPlatformJsonObject::StaticStruct, TEXT("/Script/AgentPlugin"), TEXT("AgentPlatformJsonObject"), false, nullptr, nullptr);
static struct FScriptStruct_AgentPlugin_StaticRegisterNativesFAgentPlatformJsonObject
{
	FScriptStruct_AgentPlugin_StaticRegisterNativesFAgentPlatformJsonObject()
	{
		UScriptStruct::DeferCppStructOps<FAgentPlatformJsonObject>(FName(TEXT("AgentPlatformJsonObject")));
	}
} ScriptStruct_AgentPlugin_StaticRegisterNativesFAgentPlatformJsonObject;
	struct Z_Construct_UScriptStruct_FAgentPlatformJsonObject_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAgentPlatformJsonObject_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AgentPlatformBlueprintLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAgentPlatformJsonObject_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAgentPlatformJsonObject>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAgentPlatformJsonObject_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AgentPlugin,
		nullptr,
		&NewStructOps,
		"AgentPlatformJsonObject",
		sizeof(FAgentPlatformJsonObject),
		alignof(FAgentPlatformJsonObject),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAgentPlatformJsonObject_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAgentPlatformJsonObject_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAgentPlatformJsonObject()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAgentPlatformJsonObject_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AgentPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AgentPlatformJsonObject"), sizeof(FAgentPlatformJsonObject), Get_Z_Construct_UScriptStruct_FAgentPlatformJsonObject_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAgentPlatformJsonObject_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAgentPlatformJsonObject_Hash() { return 1486012458U; }
	DEFINE_FUNCTION(UAgentPlatformBlueprintLibrary::execHandleStreamerInputComponent)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_descriptor);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAgentPlatformBlueprintLibrary::HandleStreamerInputComponent(Z_Param_descriptor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAgentPlatformBlueprintLibrary::execJsonToString)
	{
		P_GET_STRUCT(FAgentPlatformJsonObject,Z_Param_jsonObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UAgentPlatformBlueprintLibrary::JsonToString(Z_Param_jsonObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAgentPlatformBlueprintLibrary::execJsonAddObject)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_STRUCT(FAgentPlatformJsonObject,Z_Param_newObject);
		P_GET_STRUCT(FAgentPlatformJsonObject,Z_Param_jsonObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAgentPlatformJsonObject*)Z_Param__Result=UAgentPlatformBlueprintLibrary::JsonAddObject(Z_Param_key,Z_Param_newObject,Z_Param_jsonObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAgentPlatformBlueprintLibrary::execJsonAddValue)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FStrProperty,Z_Param_value);
		P_GET_STRUCT(FAgentPlatformJsonObject,Z_Param_jsonObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAgentPlatformJsonObject*)Z_Param__Result=UAgentPlatformBlueprintLibrary::JsonAddValue(Z_Param_key,Z_Param_value,Z_Param_jsonObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAgentPlatformBlueprintLibrary::execJsonGetObject)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_json);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAgentPlatformJsonObject*)Z_Param__Result=UAgentPlatformBlueprintLibrary::JsonGetObject(Z_Param_json);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAgentPlatformBlueprintLibrary::execJsonGetValue)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_json);
		P_GET_PROPERTY(FStrProperty,Z_Param_keyValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UAgentPlatformBlueprintLibrary::JsonGetValue(Z_Param_json,Z_Param_keyValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAgentPlatformBlueprintLibrary::execGetKeyValue)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_values);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UAgentPlatformBlueprintLibrary::GetKeyValue(Z_Param_values,Z_Param_key);
		P_NATIVE_END;
	}
	void UAgentPlatformBlueprintLibrary::StaticRegisterNativesUAgentPlatformBlueprintLibrary()
	{
		UClass* Class = UAgentPlatformBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetKeyValue", &UAgentPlatformBlueprintLibrary::execGetKeyValue },
			{ "HandleStreamerInputComponent", &UAgentPlatformBlueprintLibrary::execHandleStreamerInputComponent },
			{ "JsonAddObject", &UAgentPlatformBlueprintLibrary::execJsonAddObject },
			{ "JsonAddValue", &UAgentPlatformBlueprintLibrary::execJsonAddValue },
			{ "JsonGetObject", &UAgentPlatformBlueprintLibrary::execJsonGetObject },
			{ "JsonGetValue", &UAgentPlatformBlueprintLibrary::execJsonGetValue },
			{ "JsonToString", &UAgentPlatformBlueprintLibrary::execJsonToString },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAgentPlatformBlueprintLibrary_GetKeyValue_Statics
	{
		struct AgentPlatformBlueprintLibrary_eventGetKeyValue_Parms
		{
			FString values;
			FString key;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_values;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAgentPlatformBlueprintLibrary_GetKeyValue_Statics::NewProp_values = { "values", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AgentPlatformBlueprintLibrary_eventGetKeyValue_Parms, values), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAgentPlatformBlueprintLibrary_GetKeyValue_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AgentPlatformBlueprintLibrary_eventGetKeyValue_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAgentPlatformBlueprintLibrary_GetKeyValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AgentPlatformBlueprintLibrary_eventGetKeyValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgentPlatformBlueprintLibrary_GetKeyValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgentPlatformBlueprintLibrary_GetKeyValue_Statics::NewProp_values,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgentPlatformBlueprintLibrary_GetKeyValue_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgentPlatformBlueprintLibrary_GetKeyValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAgentPlatformBlueprintLibrary_GetKeyValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pureweb Agent" },
		{ "ModuleRelativePath", "Public/AgentPlatformBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgentPlatformBlueprintLibrary_GetKeyValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgentPlatformBlueprintLibrary, nullptr, "GetKeyValue", nullptr, nullptr, sizeof(AgentPlatformBlueprintLibrary_eventGetKeyValue_Parms), Z_Construct_UFunction_UAgentPlatformBlueprintLibrary_GetKeyValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgentPlatformBlueprintLibrary_GetKeyValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAgentPlatformBlueprintLibrary_GetKeyValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgentPlatformBlueprintLibrary_GetKeyValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAgentPlatformBlueprintLibrary_GetKeyValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAgentPlatformBlueprintLibrary_GetKeyValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAgentPlatformBlueprintLibrary_HandleStreamerInputComponent_Statics
	{
		struct AgentPlatformBlueprintLibrary_eventHandleStreamerInputComponent_Parms
		{
			FString descriptor;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_descriptor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_descriptor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAgentPlatformBlueprintLibrary_HandleStreamerInputComponent_Statics::NewProp_descriptor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAgentPlatformBlueprintLibrary_HandleStreamerInputComponent_Statics::NewProp_descriptor = { "descriptor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AgentPlatformBlueprintLibrary_eventHandleStreamerInputComponent_Parms, descriptor), METADATA_PARAMS(Z_Construct_UFunction_UAgentPlatformBlueprintLibrary_HandleStreamerInputComponent_Statics::NewProp_descriptor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgentPlatformBlueprintLibrary_HandleStreamerInputComponent_Statics::NewProp_descriptor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgentPlatformBlueprintLibrary_HandleStreamerInputComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgentPlatformBlueprintLibrary_HandleStreamerInputComponent_Statics::NewProp_descriptor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAgentPlatformBlueprintLibrary_HandleStreamerInputComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pureweb Agent" },
		{ "ModuleRelativePath", "Public/AgentPlatformBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgentPlatformBlueprintLibrary_HandleStreamerInputComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgentPlatformBlueprintLibrary, nullptr, "HandleStreamerInputComponent", nullptr, nullptr, sizeof(AgentPlatformBlueprintLibrary_eventHandleStreamerInputComponent_Parms), Z_Construct_UFunction_UAgentPlatformBlueprintLibrary_HandleStreamerInputComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgentPlatformBlueprintLibrary_HandleStreamerInputComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAgentPlatformBlueprintLibrary_HandleStreamerInputComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgentPlatformBlueprintLibrary_HandleStreamerInputComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAgentPlatformBlueprintLibrary_HandleStreamerInputComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAgentPlatformBlueprintLibrary_HandleStreamerInputComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAgentPlatformBlueprintLibrary_JsonAddObject_Statics
	{
		struct AgentPlatformBlueprintLibrary_eventJsonAddObject_Parms
		{
			FString key;
			FAgentPlatformJsonObject newObject;
			FAgentPlatformJsonObject jsonObject;
			FAgentPlatformJsonObject ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_newObject;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_jsonObject;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAgentPlatformBlueprintLibrary_JsonAddObject_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AgentPlatformBlueprintLibrary_eventJsonAddObject_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAgentPlatformBlueprintLibrary_JsonAddObject_Statics::NewProp_newObject = { "newObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AgentPlatformBlueprintLibrary_eventJsonAddObject_Parms, newObject), Z_Construct_UScriptStruct_FAgentPlatformJsonObject, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAgentPlatformBlueprintLibrary_JsonAddObject_Statics::NewProp_jsonObject = { "jsonObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AgentPlatformBlueprintLibrary_eventJsonAddObject_Parms, jsonObject), Z_Construct_UScriptStruct_FAgentPlatformJsonObject, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAgentPlatformBlueprintLibrary_JsonAddObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AgentPlatformBlueprintLibrary_eventJsonAddObject_Parms, ReturnValue), Z_Construct_UScriptStruct_FAgentPlatformJsonObject, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgentPlatformBlueprintLibrary_JsonAddObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgentPlatformBlueprintLibrary_JsonAddObject_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgentPlatformBlueprintLibrary_JsonAddObject_Statics::NewProp_newObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgentPlatformBlueprintLibrary_JsonAddObject_Statics::NewProp_jsonObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgentPlatformBlueprintLibrary_JsonAddObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAgentPlatformBlueprintLibrary_JsonAddObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pureweb Agent" },
		{ "ModuleRelativePath", "Public/AgentPlatformBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgentPlatformBlueprintLibrary_JsonAddObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgentPlatformBlueprintLibrary, nullptr, "JsonAddObject", nullptr, nullptr, sizeof(AgentPlatformBlueprintLibrary_eventJsonAddObject_Parms), Z_Construct_UFunction_UAgentPlatformBlueprintLibrary_JsonAddObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgentPlatformBlueprintLibrary_JsonAddObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAgentPlatformBlueprintLibrary_JsonAddObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgentPlatformBlueprintLibrary_JsonAddObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAgentPlatformBlueprintLibrary_JsonAddObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAgentPlatformBlueprintLibrary_JsonAddObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAgentPlatformBlueprintLibrary_JsonAddValue_Statics
	{
		struct AgentPlatformBlueprintLibrary_eventJsonAddValue_Parms
		{
			FString key;
			FString value;
			FAgentPlatformJsonObject jsonObject;
			FAgentPlatformJsonObject ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_jsonObject;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAgentPlatformBlueprintLibrary_JsonAddValue_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AgentPlatformBlueprintLibrary_eventJsonAddValue_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAgentPlatformBlueprintLibrary_JsonAddValue_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AgentPlatformBlueprintLibrary_eventJsonAddValue_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAgentPlatformBlueprintLibrary_JsonAddValue_Statics::NewProp_jsonObject = { "jsonObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AgentPlatformBlueprintLibrary_eventJsonAddValue_Parms, jsonObject), Z_Construct_UScriptStruct_FAgentPlatformJsonObject, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAgentPlatformBlueprintLibrary_JsonAddValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AgentPlatformBlueprintLibrary_eventJsonAddValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FAgentPlatformJsonObject, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgentPlatformBlueprintLibrary_JsonAddValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgentPlatformBlueprintLibrary_JsonAddValue_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgentPlatformBlueprintLibrary_JsonAddValue_Statics::NewProp_value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgentPlatformBlueprintLibrary_JsonAddValue_Statics::NewProp_jsonObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgentPlatformBlueprintLibrary_JsonAddValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAgentPlatformBlueprintLibrary_JsonAddValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pureweb Agent" },
		{ "ModuleRelativePath", "Public/AgentPlatformBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgentPlatformBlueprintLibrary_JsonAddValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgentPlatformBlueprintLibrary, nullptr, "JsonAddValue", nullptr, nullptr, sizeof(AgentPlatformBlueprintLibrary_eventJsonAddValue_Parms), Z_Construct_UFunction_UAgentPlatformBlueprintLibrary_JsonAddValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgentPlatformBlueprintLibrary_JsonAddValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAgentPlatformBlueprintLibrary_JsonAddValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgentPlatformBlueprintLibrary_JsonAddValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAgentPlatformBlueprintLibrary_JsonAddValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAgentPlatformBlueprintLibrary_JsonAddValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAgentPlatformBlueprintLibrary_JsonGetObject_Statics
	{
		struct AgentPlatformBlueprintLibrary_eventJsonGetObject_Parms
		{
			FString json;
			FAgentPlatformJsonObject ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_json;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAgentPlatformBlueprintLibrary_JsonGetObject_Statics::NewProp_json = { "json", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AgentPlatformBlueprintLibrary_eventJsonGetObject_Parms, json), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAgentPlatformBlueprintLibrary_JsonGetObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AgentPlatformBlueprintLibrary_eventJsonGetObject_Parms, ReturnValue), Z_Construct_UScriptStruct_FAgentPlatformJsonObject, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgentPlatformBlueprintLibrary_JsonGetObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgentPlatformBlueprintLibrary_JsonGetObject_Statics::NewProp_json,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgentPlatformBlueprintLibrary_JsonGetObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAgentPlatformBlueprintLibrary_JsonGetObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pureweb Agent" },
		{ "ModuleRelativePath", "Public/AgentPlatformBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgentPlatformBlueprintLibrary_JsonGetObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgentPlatformBlueprintLibrary, nullptr, "JsonGetObject", nullptr, nullptr, sizeof(AgentPlatformBlueprintLibrary_eventJsonGetObject_Parms), Z_Construct_UFunction_UAgentPlatformBlueprintLibrary_JsonGetObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgentPlatformBlueprintLibrary_JsonGetObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAgentPlatformBlueprintLibrary_JsonGetObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgentPlatformBlueprintLibrary_JsonGetObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAgentPlatformBlueprintLibrary_JsonGetObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAgentPlatformBlueprintLibrary_JsonGetObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAgentPlatformBlueprintLibrary_JsonGetValue_Statics
	{
		struct AgentPlatformBlueprintLibrary_eventJsonGetValue_Parms
		{
			FString json;
			FString keyValue;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_json;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_keyValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAgentPlatformBlueprintLibrary_JsonGetValue_Statics::NewProp_json = { "json", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AgentPlatformBlueprintLibrary_eventJsonGetValue_Parms, json), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAgentPlatformBlueprintLibrary_JsonGetValue_Statics::NewProp_keyValue = { "keyValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AgentPlatformBlueprintLibrary_eventJsonGetValue_Parms, keyValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAgentPlatformBlueprintLibrary_JsonGetValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AgentPlatformBlueprintLibrary_eventJsonGetValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgentPlatformBlueprintLibrary_JsonGetValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgentPlatformBlueprintLibrary_JsonGetValue_Statics::NewProp_json,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgentPlatformBlueprintLibrary_JsonGetValue_Statics::NewProp_keyValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgentPlatformBlueprintLibrary_JsonGetValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAgentPlatformBlueprintLibrary_JsonGetValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pureweb Agent" },
		{ "ModuleRelativePath", "Public/AgentPlatformBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgentPlatformBlueprintLibrary_JsonGetValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgentPlatformBlueprintLibrary, nullptr, "JsonGetValue", nullptr, nullptr, sizeof(AgentPlatformBlueprintLibrary_eventJsonGetValue_Parms), Z_Construct_UFunction_UAgentPlatformBlueprintLibrary_JsonGetValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgentPlatformBlueprintLibrary_JsonGetValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAgentPlatformBlueprintLibrary_JsonGetValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgentPlatformBlueprintLibrary_JsonGetValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAgentPlatformBlueprintLibrary_JsonGetValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAgentPlatformBlueprintLibrary_JsonGetValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAgentPlatformBlueprintLibrary_JsonToString_Statics
	{
		struct AgentPlatformBlueprintLibrary_eventJsonToString_Parms
		{
			FAgentPlatformJsonObject jsonObject;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_jsonObject;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAgentPlatformBlueprintLibrary_JsonToString_Statics::NewProp_jsonObject = { "jsonObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AgentPlatformBlueprintLibrary_eventJsonToString_Parms, jsonObject), Z_Construct_UScriptStruct_FAgentPlatformJsonObject, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAgentPlatformBlueprintLibrary_JsonToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AgentPlatformBlueprintLibrary_eventJsonToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgentPlatformBlueprintLibrary_JsonToString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgentPlatformBlueprintLibrary_JsonToString_Statics::NewProp_jsonObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgentPlatformBlueprintLibrary_JsonToString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAgentPlatformBlueprintLibrary_JsonToString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pureweb Agent" },
		{ "ModuleRelativePath", "Public/AgentPlatformBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgentPlatformBlueprintLibrary_JsonToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgentPlatformBlueprintLibrary, nullptr, "JsonToString", nullptr, nullptr, sizeof(AgentPlatformBlueprintLibrary_eventJsonToString_Parms), Z_Construct_UFunction_UAgentPlatformBlueprintLibrary_JsonToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgentPlatformBlueprintLibrary_JsonToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAgentPlatformBlueprintLibrary_JsonToString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgentPlatformBlueprintLibrary_JsonToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAgentPlatformBlueprintLibrary_JsonToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAgentPlatformBlueprintLibrary_JsonToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAgentPlatformBlueprintLibrary_NoRegister()
	{
		return UAgentPlatformBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UAgentPlatformBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAgentPlatformBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_AgentPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAgentPlatformBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAgentPlatformBlueprintLibrary_GetKeyValue, "GetKeyValue" }, // 45270084
		{ &Z_Construct_UFunction_UAgentPlatformBlueprintLibrary_HandleStreamerInputComponent, "HandleStreamerInputComponent" }, // 2297361012
		{ &Z_Construct_UFunction_UAgentPlatformBlueprintLibrary_JsonAddObject, "JsonAddObject" }, // 2252068119
		{ &Z_Construct_UFunction_UAgentPlatformBlueprintLibrary_JsonAddValue, "JsonAddValue" }, // 3068160487
		{ &Z_Construct_UFunction_UAgentPlatformBlueprintLibrary_JsonGetObject, "JsonGetObject" }, // 2694094288
		{ &Z_Construct_UFunction_UAgentPlatformBlueprintLibrary_JsonGetValue, "JsonGetValue" }, // 2438534541
		{ &Z_Construct_UFunction_UAgentPlatformBlueprintLibrary_JsonToString, "JsonToString" }, // 3454843272
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAgentPlatformBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AgentPlatformBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/AgentPlatformBlueprintLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAgentPlatformBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAgentPlatformBlueprintLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAgentPlatformBlueprintLibrary_Statics::ClassParams = {
		&UAgentPlatformBlueprintLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAgentPlatformBlueprintLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAgentPlatformBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAgentPlatformBlueprintLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAgentPlatformBlueprintLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAgentPlatformBlueprintLibrary, 3783499327);
	template<> AGENTPLUGIN_API UClass* StaticClass<UAgentPlatformBlueprintLibrary>()
	{
		return UAgentPlatformBlueprintLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAgentPlatformBlueprintLibrary(Z_Construct_UClass_UAgentPlatformBlueprintLibrary, &UAgentPlatformBlueprintLibrary::StaticClass, TEXT("/Script/AgentPlugin"), TEXT("UAgentPlatformBlueprintLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAgentPlatformBlueprintLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
