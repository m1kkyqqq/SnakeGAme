// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject2/food.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodefood() {}
// Cross Module References
	MYPROJECT2_API UClass* Z_Construct_UClass_Afood_NoRegister();
	MYPROJECT2_API UClass* Z_Construct_UClass_Afood();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MyProject2();
	MYPROJECT2_API UClass* Z_Construct_UClass_UMyInterface_NoRegister();
// End Cross Module References
	void Afood::StaticRegisterNativesAfood()
	{
	}
	UClass* Z_Construct_UClass_Afood_NoRegister()
	{
		return Afood::StaticClass();
	}
	struct Z_Construct_UClass_Afood_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpeedC_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpeedC;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Afood_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject2,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Afood_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "food.h" },
		{ "ModuleRelativePath", "food.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Afood_Statics::NewProp_SpeedC_MetaData[] = {
		{ "Category", "food" },
		{ "ModuleRelativePath", "food.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_Afood_Statics::NewProp_SpeedC = { "SpeedC", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Afood, SpeedC), METADATA_PARAMS(Z_Construct_UClass_Afood_Statics::NewProp_SpeedC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Afood_Statics::NewProp_SpeedC_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_Afood_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Afood_Statics::NewProp_SpeedC,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_Afood_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMyInterface_NoRegister, (int32)VTABLE_OFFSET(Afood, IMyInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_Afood_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Afood>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Afood_Statics::ClassParams = {
		&Afood::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_Afood_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_Afood_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_Afood_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Afood_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Afood()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Afood_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(Afood, 2862581727);
	template<> MYPROJECT2_API UClass* StaticClass<Afood>()
	{
		return Afood::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Afood(Z_Construct_UClass_Afood, &Afood::StaticClass, TEXT("/Script/MyProject2"), TEXT("Afood"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Afood);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
