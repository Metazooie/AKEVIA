// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LifecyclePlugin/Private/LifecycleModule.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLifecycleModule() {}
// Cross Module References
	LIFECYCLEPLUGIN_API UClass* Z_Construct_UClass_UPureWebPlatformRequestHandler_NoRegister();
	LIFECYCLEPLUGIN_API UClass* Z_Construct_UClass_UPureWebPlatformRequestHandler();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_LifecyclePlugin();
// End Cross Module References
	DEFINE_FUNCTION(UPureWebPlatformRequestHandler::execHandleAppServerMessage)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Descriptor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleAppServerMessage(Z_Param_Descriptor);
		P_NATIVE_END;
	}
	void UPureWebPlatformRequestHandler::StaticRegisterNativesUPureWebPlatformRequestHandler()
	{
		UClass* Class = UPureWebPlatformRequestHandler::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleAppServerMessage", &UPureWebPlatformRequestHandler::execHandleAppServerMessage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPureWebPlatformRequestHandler_HandleAppServerMessage_Statics
	{
		struct PureWebPlatformRequestHandler_eventHandleAppServerMessage_Parms
		{
			FString Descriptor;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Descriptor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Descriptor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPureWebPlatformRequestHandler_HandleAppServerMessage_Statics::NewProp_Descriptor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPureWebPlatformRequestHandler_HandleAppServerMessage_Statics::NewProp_Descriptor = { "Descriptor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PureWebPlatformRequestHandler_eventHandleAppServerMessage_Parms, Descriptor), METADATA_PARAMS(Z_Construct_UFunction_UPureWebPlatformRequestHandler_HandleAppServerMessage_Statics::NewProp_Descriptor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPureWebPlatformRequestHandler_HandleAppServerMessage_Statics::NewProp_Descriptor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPureWebPlatformRequestHandler_HandleAppServerMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPureWebPlatformRequestHandler_HandleAppServerMessage_Statics::NewProp_Descriptor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPureWebPlatformRequestHandler_HandleAppServerMessage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/LifecycleModule.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPureWebPlatformRequestHandler_HandleAppServerMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPureWebPlatformRequestHandler, nullptr, "HandleAppServerMessage", nullptr, nullptr, sizeof(PureWebPlatformRequestHandler_eventHandleAppServerMessage_Parms), Z_Construct_UFunction_UPureWebPlatformRequestHandler_HandleAppServerMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPureWebPlatformRequestHandler_HandleAppServerMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPureWebPlatformRequestHandler_HandleAppServerMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPureWebPlatformRequestHandler_HandleAppServerMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPureWebPlatformRequestHandler_HandleAppServerMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPureWebPlatformRequestHandler_HandleAppServerMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPureWebPlatformRequestHandler_NoRegister()
	{
		return UPureWebPlatformRequestHandler::StaticClass();
	}
	struct Z_Construct_UClass_UPureWebPlatformRequestHandler_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPureWebPlatformRequestHandler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_LifecyclePlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPureWebPlatformRequestHandler_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPureWebPlatformRequestHandler_HandleAppServerMessage, "HandleAppServerMessage" }, // 973676775
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPureWebPlatformRequestHandler_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LifecycleModule.h" },
		{ "ModuleRelativePath", "Private/LifecycleModule.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPureWebPlatformRequestHandler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPureWebPlatformRequestHandler>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPureWebPlatformRequestHandler_Statics::ClassParams = {
		&UPureWebPlatformRequestHandler::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPureWebPlatformRequestHandler_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPureWebPlatformRequestHandler_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPureWebPlatformRequestHandler()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPureWebPlatformRequestHandler_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPureWebPlatformRequestHandler, 1003730465);
	template<> LIFECYCLEPLUGIN_API UClass* StaticClass<UPureWebPlatformRequestHandler>()
	{
		return UPureWebPlatformRequestHandler::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPureWebPlatformRequestHandler(Z_Construct_UClass_UPureWebPlatformRequestHandler, &UPureWebPlatformRequestHandler::StaticClass, TEXT("/Script/LifecyclePlugin"), TEXT("UPureWebPlatformRequestHandler"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPureWebPlatformRequestHandler);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
