// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject2/snakebase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodesnakebase() {}
// Cross Module References
	MYPROJECT2_API UEnum* Z_Construct_UEnum_MyProject2_EMovementDirection();
	UPackage* Z_Construct_UPackage__Script_MyProject2();
	MYPROJECT2_API UClass* Z_Construct_UClass_Asnakebase_NoRegister();
	MYPROJECT2_API UClass* Z_Construct_UClass_Asnakebase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	MYPROJECT2_API UClass* Z_Construct_UClass_ASnakeElementBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	static UEnum* EMovementDirection_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MyProject2_EMovementDirection, Z_Construct_UPackage__Script_MyProject2(), TEXT("EMovementDirection"));
		}
		return Singleton;
	}
	template<> MYPROJECT2_API UEnum* StaticEnum<EMovementDirection>()
	{
		return EMovementDirection_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMovementDirection(EMovementDirection_StaticEnum, TEXT("/Script/MyProject2"), TEXT("EMovementDirection"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MyProject2_EMovementDirection_Hash() { return 1229106819U; }
	UEnum* Z_Construct_UEnum_MyProject2_EMovementDirection()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MyProject2();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMovementDirection"), 0, Get_Z_Construct_UEnum_MyProject2_EMovementDirection_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMovementDirection::UP", (int64)EMovementDirection::UP },
				{ "EMovementDirection::DOWN", (int64)EMovementDirection::DOWN },
				{ "EMovementDirection::LEFT", (int64)EMovementDirection::LEFT },
				{ "EMovementDirection::RIGHT", (int64)EMovementDirection::RIGHT },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "DOWN.Name", "EMovementDirection::DOWN" },
				{ "LEFT.Name", "EMovementDirection::LEFT" },
				{ "ModuleRelativePath", "snakebase.h" },
				{ "RIGHT.Name", "EMovementDirection::RIGHT" },
				{ "UP.Name", "EMovementDirection::UP" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MyProject2,
				nullptr,
				"EMovementDirection",
				"EMovementDirection",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	DEFINE_FUNCTION(Asnakebase::execSnakeElementOverlap)
	{
		P_GET_OBJECT(ASnakeElementBase,Z_Param_OverlappedElement);
		P_GET_OBJECT(AActor,Z_Param_Other);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SnakeElementOverlap(Z_Param_OverlappedElement,Z_Param_Other);
		P_NATIVE_END;
	}
	void Asnakebase::StaticRegisterNativesAsnakebase()
	{
		UClass* Class = Asnakebase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SnakeElementOverlap", &Asnakebase::execSnakeElementOverlap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_Asnakebase_SnakeElementOverlap_Statics
	{
		struct snakebase_eventSnakeElementOverlap_Parms
		{
			ASnakeElementBase* OverlappedElement;
			AActor* Other;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedElement;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Other;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_Asnakebase_SnakeElementOverlap_Statics::NewProp_OverlappedElement = { "OverlappedElement", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(snakebase_eventSnakeElementOverlap_Parms, OverlappedElement), Z_Construct_UClass_ASnakeElementBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_Asnakebase_SnakeElementOverlap_Statics::NewProp_Other = { "Other", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(snakebase_eventSnakeElementOverlap_Parms, Other), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Asnakebase_SnakeElementOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Asnakebase_SnakeElementOverlap_Statics::NewProp_OverlappedElement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Asnakebase_SnakeElementOverlap_Statics::NewProp_Other,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Asnakebase_SnakeElementOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "snakebase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Asnakebase_SnakeElementOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Asnakebase, nullptr, "SnakeElementOverlap", nullptr, nullptr, sizeof(snakebase_eventSnakeElementOverlap_Parms), Z_Construct_UFunction_Asnakebase_SnakeElementOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Asnakebase_SnakeElementOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Asnakebase_SnakeElementOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Asnakebase_SnakeElementOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Asnakebase_SnakeElementOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Asnakebase_SnakeElementOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_Asnakebase_NoRegister()
	{
		return Asnakebase::StaticClass();
	}
	struct Z_Construct_UClass_Asnakebase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SnakeElementClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SnakeElementClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ElementSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ElementSize;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SnakeElements_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SnakeElements_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SnakeElements;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_LastMoveDirection_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastMoveDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LastMoveDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MovementSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Asnakebase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject2,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_Asnakebase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_Asnakebase_SnakeElementOverlap, "SnakeElementOverlap" }, // 2628746771
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Asnakebase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "snakebase.h" },
		{ "ModuleRelativePath", "snakebase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Asnakebase_Statics::NewProp_SnakeElementClass_MetaData[] = {
		{ "Category", "snakebase" },
		{ "ModuleRelativePath", "snakebase.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_Asnakebase_Statics::NewProp_SnakeElementClass = { "SnakeElementClass", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Asnakebase, SnakeElementClass), Z_Construct_UClass_ASnakeElementBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_Asnakebase_Statics::NewProp_SnakeElementClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Asnakebase_Statics::NewProp_SnakeElementClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Asnakebase_Statics::NewProp_ElementSize_MetaData[] = {
		{ "Category", "snakebase" },
		{ "ModuleRelativePath", "snakebase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_Asnakebase_Statics::NewProp_ElementSize = { "ElementSize", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Asnakebase, ElementSize), METADATA_PARAMS(Z_Construct_UClass_Asnakebase_Statics::NewProp_ElementSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Asnakebase_Statics::NewProp_ElementSize_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Asnakebase_Statics::NewProp_SnakeElements_Inner = { "SnakeElements", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASnakeElementBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Asnakebase_Statics::NewProp_SnakeElements_MetaData[] = {
		{ "ModuleRelativePath", "snakebase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_Asnakebase_Statics::NewProp_SnakeElements = { "SnakeElements", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Asnakebase, SnakeElements), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_Asnakebase_Statics::NewProp_SnakeElements_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Asnakebase_Statics::NewProp_SnakeElements_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_Asnakebase_Statics::NewProp_LastMoveDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Asnakebase_Statics::NewProp_LastMoveDirection_MetaData[] = {
		{ "ModuleRelativePath", "snakebase.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_Asnakebase_Statics::NewProp_LastMoveDirection = { "LastMoveDirection", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Asnakebase, LastMoveDirection), Z_Construct_UEnum_MyProject2_EMovementDirection, METADATA_PARAMS(Z_Construct_UClass_Asnakebase_Statics::NewProp_LastMoveDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Asnakebase_Statics::NewProp_LastMoveDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Asnakebase_Statics::NewProp_MovementSpeed_MetaData[] = {
		{ "Category", "snakebase" },
		{ "ModuleRelativePath", "snakebase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_Asnakebase_Statics::NewProp_MovementSpeed = { "MovementSpeed", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Asnakebase, MovementSpeed), METADATA_PARAMS(Z_Construct_UClass_Asnakebase_Statics::NewProp_MovementSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Asnakebase_Statics::NewProp_MovementSpeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_Asnakebase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Asnakebase_Statics::NewProp_SnakeElementClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Asnakebase_Statics::NewProp_ElementSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Asnakebase_Statics::NewProp_SnakeElements_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Asnakebase_Statics::NewProp_SnakeElements,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Asnakebase_Statics::NewProp_LastMoveDirection_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Asnakebase_Statics::NewProp_LastMoveDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Asnakebase_Statics::NewProp_MovementSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_Asnakebase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Asnakebase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Asnakebase_Statics::ClassParams = {
		&Asnakebase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_Asnakebase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_Asnakebase_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_Asnakebase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Asnakebase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Asnakebase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Asnakebase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(Asnakebase, 2411174475);
	template<> MYPROJECT2_API UClass* StaticClass<Asnakebase>()
	{
		return Asnakebase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Asnakebase(Z_Construct_UClass_Asnakebase, &Asnakebase::StaticClass, TEXT("/Script/MyProject2"), TEXT("Asnakebase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Asnakebase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
