// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAgentPlugin_init() {}
	AGENTPLUGIN_API UFunction* Z_Construct_UDelegateFunction_AgentPlugin_AgentConnectionDelegate__DelegateSignature();
	AGENTPLUGIN_API UFunction* Z_Construct_UDelegateFunction_AgentPlugin_BroadcastMessageDelegate__DelegateSignature();
	AGENTPLUGIN_API UFunction* Z_Construct_UDelegateFunction_AgentPlugin_PrivateMessagedDelegate__DelegateSignature();
	AGENTPLUGIN_API UFunction* Z_Construct_UDelegateFunction_AgentPlugin_ArrivaldDelegate__DelegateSignature();
	AGENTPLUGIN_API UFunction* Z_Construct_UDelegateFunction_AgentPlugin_DepartureDelegate__DelegateSignature();
	AGENTPLUGIN_API UFunction* Z_Construct_UDelegateFunction_AgentPlugin_PresenceEventDelegate__DelegateSignature();
	AGENTPLUGIN_API UFunction* Z_Construct_UDelegateFunction_AgentPlugin_KeyChangeDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_AgentPlugin()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_AgentPlugin_AgentConnectionDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_AgentPlugin_BroadcastMessageDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_AgentPlugin_PrivateMessagedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_AgentPlugin_ArrivaldDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_AgentPlugin_DepartureDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_AgentPlugin_PresenceEventDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_AgentPlugin_KeyChangeDelegate__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/AgentPlugin",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xA9DF47AF,
				0x977F8193,
				METADATA_PARAMS(nullptr, 0)
			};
			UE4CodeGen_Private::ConstructUPackage(ReturnPackage, PackageParams);
		}
		return ReturnPackage;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
