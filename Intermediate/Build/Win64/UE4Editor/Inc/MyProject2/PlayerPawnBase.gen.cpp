// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject2/PlayerPawnBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerPawnBase() {}
// Cross Module References
	MYPROJECT2_API UClass* Z_Construct_UClass_APlayerPawnBase_NoRegister();
	MYPROJECT2_API UClass* Z_Construct_UClass_APlayerPawnBase();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_MyProject2();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	MYPROJECT2_API UClass* Z_Construct_UClass_Asnakebase_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	DEFINE_FUNCTION(APlayerPawnBase::execHandlePlayerHorizontalInput)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandlePlayerHorizontalInput(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerPawnBase::execHandlePlayerVerticalInput)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandlePlayerVerticalInput(Z_Param_value);
		P_NATIVE_END;
	}
	void APlayerPawnBase::StaticRegisterNativesAPlayerPawnBase()
	{
		UClass* Class = APlayerPawnBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandlePlayerHorizontalInput", &APlayerPawnBase::execHandlePlayerHorizontalInput },
			{ "HandlePlayerVerticalInput", &APlayerPawnBase::execHandlePlayerVerticalInput },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APlayerPawnBase_HandlePlayerHorizontalInput_Statics
	{
		struct PlayerPawnBase_eventHandlePlayerHorizontalInput_Parms
		{
			float value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerPawnBase_HandlePlayerHorizontalInput_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerPawnBase_eventHandlePlayerHorizontalInput_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerPawnBase_HandlePlayerHorizontalInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerPawnBase_HandlePlayerHorizontalInput_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerPawnBase_HandlePlayerHorizontalInput_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerPawnBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerPawnBase_HandlePlayerHorizontalInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerPawnBase, nullptr, "HandlePlayerHorizontalInput", nullptr, nullptr, sizeof(PlayerPawnBase_eventHandlePlayerHorizontalInput_Parms), Z_Construct_UFunction_APlayerPawnBase_HandlePlayerHorizontalInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerPawnBase_HandlePlayerHorizontalInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerPawnBase_HandlePlayerHorizontalInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerPawnBase_HandlePlayerHorizontalInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerPawnBase_HandlePlayerHorizontalInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerPawnBase_HandlePlayerHorizontalInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerPawnBase_HandlePlayerVerticalInput_Statics
	{
		struct PlayerPawnBase_eventHandlePlayerVerticalInput_Parms
		{
			float value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerPawnBase_HandlePlayerVerticalInput_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerPawnBase_eventHandlePlayerVerticalInput_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerPawnBase_HandlePlayerVerticalInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerPawnBase_HandlePlayerVerticalInput_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerPawnBase_HandlePlayerVerticalInput_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerPawnBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerPawnBase_HandlePlayerVerticalInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerPawnBase, nullptr, "HandlePlayerVerticalInput", nullptr, nullptr, sizeof(PlayerPawnBase_eventHandlePlayerVerticalInput_Parms), Z_Construct_UFunction_APlayerPawnBase_HandlePlayerVerticalInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerPawnBase_HandlePlayerVerticalInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerPawnBase_HandlePlayerVerticalInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerPawnBase_HandlePlayerVerticalInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerPawnBase_HandlePlayerVerticalInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerPawnBase_HandlePlayerVerticalInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APlayerPawnBase_NoRegister()
	{
		return APlayerPawnBase::StaticClass();
	}
	struct Z_Construct_UClass_APlayerPawnBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PawnCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PawnCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SnakeActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SnakeActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SnakeActorClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SnakeActorClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayerPawnBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject2,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APlayerPawnBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APlayerPawnBase_HandlePlayerHorizontalInput, "HandlePlayerHorizontalInput" }, // 1100678685
		{ &Z_Construct_UFunction_APlayerPawnBase_HandlePlayerVerticalInput, "HandlePlayerVerticalInput" }, // 3388327317
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerPawnBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PlayerPawnBase.h" },
		{ "ModuleRelativePath", "PlayerPawnBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerPawnBase_Statics::NewProp_PawnCamera_MetaData[] = {
		{ "Category", "PlayerPawnBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlayerPawnBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerPawnBase_Statics::NewProp_PawnCamera = { "PawnCamera", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerPawnBase, PawnCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerPawnBase_Statics::NewProp_PawnCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerPawnBase_Statics::NewProp_PawnCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerPawnBase_Statics::NewProp_SnakeActor_MetaData[] = {
		{ "Category", "PlayerPawnBase" },
		{ "ModuleRelativePath", "PlayerPawnBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerPawnBase_Statics::NewProp_SnakeActor = { "SnakeActor", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerPawnBase, SnakeActor), Z_Construct_UClass_Asnakebase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerPawnBase_Statics::NewProp_SnakeActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerPawnBase_Statics::NewProp_SnakeActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerPawnBase_Statics::NewProp_SnakeActorClass_MetaData[] = {
		{ "Category", "PlayerPawnBase" },
		{ "ModuleRelativePath", "PlayerPawnBase.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_APlayerPawnBase_Statics::NewProp_SnakeActorClass = { "SnakeActorClass", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerPawnBase, SnakeActorClass), Z_Construct_UClass_Asnakebase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_APlayerPawnBase_Statics::NewProp_SnakeActorClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerPawnBase_Statics::NewProp_SnakeActorClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayerPawnBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerPawnBase_Statics::NewProp_PawnCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerPawnBase_Statics::NewProp_SnakeActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerPawnBase_Statics::NewProp_SnakeActorClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayerPawnBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerPawnBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlayerPawnBase_Statics::ClassParams = {
		&APlayerPawnBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APlayerPawnBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APlayerPawnBase_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APlayerPawnBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerPawnBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlayerPawnBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlayerPawnBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlayerPawnBase, 1860901791);
	template<> MYPROJECT2_API UClass* StaticClass<APlayerPawnBase>()
	{
		return APlayerPawnBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlayerPawnBase(Z_Construct_UClass_APlayerPawnBase, &APlayerPawnBase::StaticClass, TEXT("/Script/MyProject2"), TEXT("APlayerPawnBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerPawnBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
