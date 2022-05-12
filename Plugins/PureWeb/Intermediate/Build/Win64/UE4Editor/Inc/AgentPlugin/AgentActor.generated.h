// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAgentPlatformJsonObject;
class AAgentActor;
enum class APState : uint8;
#ifdef AGENTPLUGIN_AgentActor_generated_h
#error "AgentActor.generated.h already included, missing '#pragma once' in AgentActor.h"
#endif
#define AGENTPLUGIN_AgentActor_generated_h

#define Showroom_Plugins_PureWeb_Source_AgentPlugin_Public_AgentActor_h_36_DELEGATE \
struct _Script_AgentPlugin_eventKeyChangeDelegate_Parms \
{ \
	FAgentPlatformJsonObject message; \
}; \
static inline void FKeyChangeDelegate_DelegateWrapper(const FMulticastScriptDelegate& KeyChangeDelegate, FAgentPlatformJsonObject message) \
{ \
	_Script_AgentPlugin_eventKeyChangeDelegate_Parms Parms; \
	Parms.message=message; \
	KeyChangeDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Showroom_Plugins_PureWeb_Source_AgentPlugin_Public_AgentActor_h_35_DELEGATE \
struct _Script_AgentPlugin_eventPresenceEventDelegate_Parms \
{ \
	FAgentPlatformJsonObject message; \
}; \
static inline void FPresenceEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& PresenceEventDelegate, FAgentPlatformJsonObject message) \
{ \
	_Script_AgentPlugin_eventPresenceEventDelegate_Parms Parms; \
	Parms.message=message; \
	PresenceEventDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Showroom_Plugins_PureWeb_Source_AgentPlugin_Public_AgentActor_h_34_DELEGATE \
struct _Script_AgentPlugin_eventDepartureDelegate_Parms \
{ \
	FAgentPlatformJsonObject message; \
}; \
static inline void FDepartureDelegate_DelegateWrapper(const FMulticastScriptDelegate& DepartureDelegate, FAgentPlatformJsonObject message) \
{ \
	_Script_AgentPlugin_eventDepartureDelegate_Parms Parms; \
	Parms.message=message; \
	DepartureDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Showroom_Plugins_PureWeb_Source_AgentPlugin_Public_AgentActor_h_33_DELEGATE \
struct _Script_AgentPlugin_eventArrivaldDelegate_Parms \
{ \
	FAgentPlatformJsonObject message; \
}; \
static inline void FArrivaldDelegate_DelegateWrapper(const FMulticastScriptDelegate& ArrivaldDelegate, FAgentPlatformJsonObject message) \
{ \
	_Script_AgentPlugin_eventArrivaldDelegate_Parms Parms; \
	Parms.message=message; \
	ArrivaldDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Showroom_Plugins_PureWeb_Source_AgentPlugin_Public_AgentActor_h_32_DELEGATE \
struct _Script_AgentPlugin_eventPrivateMessagedDelegate_Parms \
{ \
	FAgentPlatformJsonObject message; \
}; \
static inline void FPrivateMessagedDelegate_DelegateWrapper(const FMulticastScriptDelegate& PrivateMessagedDelegate, FAgentPlatformJsonObject message) \
{ \
	_Script_AgentPlugin_eventPrivateMessagedDelegate_Parms Parms; \
	Parms.message=message; \
	PrivateMessagedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Showroom_Plugins_PureWeb_Source_AgentPlugin_Public_AgentActor_h_31_DELEGATE \
struct _Script_AgentPlugin_eventBroadcastMessageDelegate_Parms \
{ \
	FAgentPlatformJsonObject message; \
}; \
static inline void FBroadcastMessageDelegate_DelegateWrapper(const FMulticastScriptDelegate& BroadcastMessageDelegate, FAgentPlatformJsonObject message) \
{ \
	_Script_AgentPlugin_eventBroadcastMessageDelegate_Parms Parms; \
	Parms.message=message; \
	BroadcastMessageDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Showroom_Plugins_PureWeb_Source_AgentPlugin_Public_AgentActor_h_30_DELEGATE \
struct _Script_AgentPlugin_eventAgentConnectionDelegate_Parms \
{ \
	FAgentPlatformJsonObject message; \
}; \
static inline void FAgentConnectionDelegate_DelegateWrapper(const FMulticastScriptDelegate& AgentConnectionDelegate, FAgentPlatformJsonObject message) \
{ \
	_Script_AgentPlugin_eventAgentConnectionDelegate_Parms Parms; \
	Parms.message=message; \
	AgentConnectionDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Showroom_Plugins_PureWeb_Source_AgentPlugin_Public_AgentActor_h_41_SPARSE_DATA
#define Showroom_Plugins_PureWeb_Source_AgentPlugin_Public_AgentActor_h_41_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSubscribeToKeyWrite); \
	DECLARE_FUNCTION(execSubscribeToKeyRemove); \
	DECLARE_FUNCTION(execSubscribeToKey); \
	DECLARE_FUNCTION(execRemovePrivateScoped); \
	DECLARE_FUNCTION(execRemoveAgentScoped); \
	DECLARE_FUNCTION(execRemove); \
	DECLARE_FUNCTION(execRetrievePrivateScoped); \
	DECLARE_FUNCTION(execRetrieveAgentScoped); \
	DECLARE_FUNCTION(execRetrieve); \
	DECLARE_FUNCTION(execStorePrivateScoped); \
	DECLARE_FUNCTION(execStoreAgentScoped); \
	DECLARE_FUNCTION(execStore); \
	DECLARE_FUNCTION(execSubscribeToAllPresenceEvents); \
	DECLARE_FUNCTION(execSubscribeToDepartures); \
	DECLARE_FUNCTION(execSubscribeToArrivals); \
	DECLARE_FUNCTION(execSubscribeToPrivateMessages); \
	DECLARE_FUNCTION(execSubscribeToBroadcastMessages); \
	DECLARE_FUNCTION(execSendDirectMessage); \
	DECLARE_FUNCTION(execSendMessage); \
	DECLARE_FUNCTION(execSubscribeToAllMessages); \
	DECLARE_FUNCTION(execCreateAgentByURL); \
	DECLARE_FUNCTION(execCreateAgent);


#define Showroom_Plugins_PureWeb_Source_AgentPlugin_Public_AgentActor_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSubscribeToKeyWrite); \
	DECLARE_FUNCTION(execSubscribeToKeyRemove); \
	DECLARE_FUNCTION(execSubscribeToKey); \
	DECLARE_FUNCTION(execRemovePrivateScoped); \
	DECLARE_FUNCTION(execRemoveAgentScoped); \
	DECLARE_FUNCTION(execRemove); \
	DECLARE_FUNCTION(execRetrievePrivateScoped); \
	DECLARE_FUNCTION(execRetrieveAgentScoped); \
	DECLARE_FUNCTION(execRetrieve); \
	DECLARE_FUNCTION(execStorePrivateScoped); \
	DECLARE_FUNCTION(execStoreAgentScoped); \
	DECLARE_FUNCTION(execStore); \
	DECLARE_FUNCTION(execSubscribeToAllPresenceEvents); \
	DECLARE_FUNCTION(execSubscribeToDepartures); \
	DECLARE_FUNCTION(execSubscribeToArrivals); \
	DECLARE_FUNCTION(execSubscribeToPrivateMessages); \
	DECLARE_FUNCTION(execSubscribeToBroadcastMessages); \
	DECLARE_FUNCTION(execSendDirectMessage); \
	DECLARE_FUNCTION(execSendMessage); \
	DECLARE_FUNCTION(execSubscribeToAllMessages); \
	DECLARE_FUNCTION(execCreateAgentByURL); \
	DECLARE_FUNCTION(execCreateAgent);


#define Showroom_Plugins_PureWeb_Source_AgentPlugin_Public_AgentActor_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAgentActor(); \
	friend struct Z_Construct_UClass_AAgentActor_Statics; \
public: \
	DECLARE_CLASS(AAgentActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AgentPlugin"), NO_API) \
	DECLARE_SERIALIZER(AAgentActor)


#define Showroom_Plugins_PureWeb_Source_AgentPlugin_Public_AgentActor_h_41_INCLASS \
private: \
	static void StaticRegisterNativesAAgentActor(); \
	friend struct Z_Construct_UClass_AAgentActor_Statics; \
public: \
	DECLARE_CLASS(AAgentActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AgentPlugin"), NO_API) \
	DECLARE_SERIALIZER(AAgentActor)


#define Showroom_Plugins_PureWeb_Source_AgentPlugin_Public_AgentActor_h_41_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAgentActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAgentActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAgentActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAgentActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAgentActor(AAgentActor&&); \
	NO_API AAgentActor(const AAgentActor&); \
public:


#define Showroom_Plugins_PureWeb_Source_AgentPlugin_Public_AgentActor_h_41_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAgentActor(AAgentActor&&); \
	NO_API AAgentActor(const AAgentActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAgentActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAgentActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAgentActor)


#define Showroom_Plugins_PureWeb_Source_AgentPlugin_Public_AgentActor_h_41_PRIVATE_PROPERTY_OFFSET
#define Showroom_Plugins_PureWeb_Source_AgentPlugin_Public_AgentActor_h_38_PROLOG
#define Showroom_Plugins_PureWeb_Source_AgentPlugin_Public_AgentActor_h_41_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Showroom_Plugins_PureWeb_Source_AgentPlugin_Public_AgentActor_h_41_PRIVATE_PROPERTY_OFFSET \
	Showroom_Plugins_PureWeb_Source_AgentPlugin_Public_AgentActor_h_41_SPARSE_DATA \
	Showroom_Plugins_PureWeb_Source_AgentPlugin_Public_AgentActor_h_41_RPC_WRAPPERS \
	Showroom_Plugins_PureWeb_Source_AgentPlugin_Public_AgentActor_h_41_INCLASS \
	Showroom_Plugins_PureWeb_Source_AgentPlugin_Public_AgentActor_h_41_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Showroom_Plugins_PureWeb_Source_AgentPlugin_Public_AgentActor_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Showroom_Plugins_PureWeb_Source_AgentPlugin_Public_AgentActor_h_41_PRIVATE_PROPERTY_OFFSET \
	Showroom_Plugins_PureWeb_Source_AgentPlugin_Public_AgentActor_h_41_SPARSE_DATA \
	Showroom_Plugins_PureWeb_Source_AgentPlugin_Public_AgentActor_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	Showroom_Plugins_PureWeb_Source_AgentPlugin_Public_AgentActor_h_41_INCLASS_NO_PURE_DECLS \
	Showroom_Plugins_PureWeb_Source_AgentPlugin_Public_AgentActor_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AGENTPLUGIN_API UClass* StaticClass<class AAgentActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Showroom_Plugins_PureWeb_Source_AgentPlugin_Public_AgentActor_h


#define FOREACH_ENUM_APSTATE(op) \
	op(APState::OK) \
	op(APState::ERROR_) \
	op(APState::CONNECTED) \
	op(APState::DISCONNECTED) 

enum class APState : uint8;
template<> AGENTPLUGIN_API UEnum* StaticEnum<APState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
