// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LifecyclePlugin/Private/FProcessInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFProcessInfo() {}
// Cross Module References
	LIFECYCLEPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FProcessInfo();
	UPackage* Z_Construct_UPackage__Script_LifecyclePlugin();
// End Cross Module References
class UScriptStruct* FProcessInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LIFECYCLEPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FProcessInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FProcessInfo, Z_Construct_UPackage__Script_LifecyclePlugin(), TEXT("ProcessInfo"), sizeof(FProcessInfo), Get_Z_Construct_UScriptStruct_FProcessInfo_Hash());
	}
	return Singleton;
}
template<> LIFECYCLEPLUGIN_API UScriptStruct* StaticStruct<FProcessInfo>()
{
	return FProcessInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FProcessInfo(FProcessInfo::StaticStruct, TEXT("/Script/LifecyclePlugin"), TEXT("ProcessInfo"), false, nullptr, nullptr);
static struct FScriptStruct_LifecyclePlugin_StaticRegisterNativesFProcessInfo
{
	FScriptStruct_LifecyclePlugin_StaticRegisterNativesFProcessInfo()
	{
		UScriptStruct::DeferCppStructOps<FProcessInfo>(FName(TEXT("ProcessInfo")));
	}
} ScriptStruct_LifecyclePlugin_StaticRegisterNativesFProcessInfo;
	struct Z_Construct_UScriptStruct_FProcessInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AppName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AppName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AppID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AppID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProcessID_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ProcessID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServiceManagerID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ServiceManagerID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SchedulerID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SchedulerID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LaunchReqURL_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LaunchReqURL;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectToken_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProjectToken;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AgentToken_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AgentToken;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProcessInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/FProcessInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FProcessInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProcessInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProcessInfo_Statics::NewProp_Type_MetaData[] = {
		{ "ModuleRelativePath", "Private/FProcessInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProcessInfo_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProcessInfo, Type), METADATA_PARAMS(Z_Construct_UScriptStruct_FProcessInfo_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProcessInfo_Statics::NewProp_Type_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProcessInfo_Statics::NewProp_AppName_MetaData[] = {
		{ "ModuleRelativePath", "Private/FProcessInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProcessInfo_Statics::NewProp_AppName = { "AppName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProcessInfo, AppName), METADATA_PARAMS(Z_Construct_UScriptStruct_FProcessInfo_Statics::NewProp_AppName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProcessInfo_Statics::NewProp_AppName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProcessInfo_Statics::NewProp_AppID_MetaData[] = {
		{ "ModuleRelativePath", "Private/FProcessInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProcessInfo_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProcessInfo, AppID), METADATA_PARAMS(Z_Construct_UScriptStruct_FProcessInfo_Statics::NewProp_AppID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProcessInfo_Statics::NewProp_AppID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProcessInfo_Statics::NewProp_ProcessID_MetaData[] = {
		{ "ModuleRelativePath", "Private/FProcessInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FProcessInfo_Statics::NewProp_ProcessID = { "ProcessID", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProcessInfo, ProcessID), METADATA_PARAMS(Z_Construct_UScriptStruct_FProcessInfo_Statics::NewProp_ProcessID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProcessInfo_Statics::NewProp_ProcessID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProcessInfo_Statics::NewProp_ServiceManagerID_MetaData[] = {
		{ "ModuleRelativePath", "Private/FProcessInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProcessInfo_Statics::NewProp_ServiceManagerID = { "ServiceManagerID", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProcessInfo, ServiceManagerID), METADATA_PARAMS(Z_Construct_UScriptStruct_FProcessInfo_Statics::NewProp_ServiceManagerID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProcessInfo_Statics::NewProp_ServiceManagerID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProcessInfo_Statics::NewProp_SchedulerID_MetaData[] = {
		{ "ModuleRelativePath", "Private/FProcessInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProcessInfo_Statics::NewProp_SchedulerID = { "SchedulerID", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProcessInfo, SchedulerID), METADATA_PARAMS(Z_Construct_UScriptStruct_FProcessInfo_Statics::NewProp_SchedulerID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProcessInfo_Statics::NewProp_SchedulerID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProcessInfo_Statics::NewProp_LaunchReqURL_MetaData[] = {
		{ "ModuleRelativePath", "Private/FProcessInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProcessInfo_Statics::NewProp_LaunchReqURL = { "LaunchReqURL", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProcessInfo, LaunchReqURL), METADATA_PARAMS(Z_Construct_UScriptStruct_FProcessInfo_Statics::NewProp_LaunchReqURL_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProcessInfo_Statics::NewProp_LaunchReqURL_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProcessInfo_Statics::NewProp_ProjectToken_MetaData[] = {
		{ "ModuleRelativePath", "Private/FProcessInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProcessInfo_Statics::NewProp_ProjectToken = { "ProjectToken", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProcessInfo, ProjectToken), METADATA_PARAMS(Z_Construct_UScriptStruct_FProcessInfo_Statics::NewProp_ProjectToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProcessInfo_Statics::NewProp_ProjectToken_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProcessInfo_Statics::NewProp_AgentToken_MetaData[] = {
		{ "ModuleRelativePath", "Private/FProcessInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProcessInfo_Statics::NewProp_AgentToken = { "AgentToken", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProcessInfo, AgentToken), METADATA_PARAMS(Z_Construct_UScriptStruct_FProcessInfo_Statics::NewProp_AgentToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProcessInfo_Statics::NewProp_AgentToken_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProcessInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProcessInfo_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProcessInfo_Statics::NewProp_AppName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProcessInfo_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProcessInfo_Statics::NewProp_ProcessID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProcessInfo_Statics::NewProp_ServiceManagerID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProcessInfo_Statics::NewProp_SchedulerID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProcessInfo_Statics::NewProp_LaunchReqURL,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProcessInfo_Statics::NewProp_ProjectToken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProcessInfo_Statics::NewProp_AgentToken,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProcessInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LifecyclePlugin,
		nullptr,
		&NewStructOps,
		"ProcessInfo",
		sizeof(FProcessInfo),
		alignof(FProcessInfo),
		Z_Construct_UScriptStruct_FProcessInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProcessInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FProcessInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProcessInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FProcessInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FProcessInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_LifecyclePlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ProcessInfo"), sizeof(FProcessInfo), Get_Z_Construct_UScriptStruct_FProcessInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FProcessInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FProcessInfo_Hash() { return 542138576U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
