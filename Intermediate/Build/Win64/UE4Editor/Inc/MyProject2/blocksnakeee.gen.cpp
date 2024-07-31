// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject2/blocksnakeee.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeblocksnakeee() {}
// Cross Module References
	MYPROJECT2_API UClass* Z_Construct_UClass_Ablocksnakeee_NoRegister();
	MYPROJECT2_API UClass* Z_Construct_UClass_Ablocksnakeee();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MyProject2();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
// End Cross Module References
	void Ablocksnakeee::StaticRegisterNativesAblocksnakeee()
	{
	}
	UClass* Z_Construct_UClass_Ablocksnakeee_NoRegister()
	{
		return Ablocksnakeee::StaticClass();
	}
	struct Z_Construct_UClass_Ablocksnakeee_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Collider1_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Collider1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Collider2_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Collider2;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Ablocksnakeee_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject2,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Ablocksnakeee_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "blocksnakeee.h" },
		{ "ModuleRelativePath", "blocksnakeee.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Ablocksnakeee_Statics::NewProp_Collider1_MetaData[] = {
		{ "Category", "blocksnakeee" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "blocksnakeee.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Ablocksnakeee_Statics::NewProp_Collider1 = { "Collider1", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Ablocksnakeee, Collider1), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Ablocksnakeee_Statics::NewProp_Collider1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Ablocksnakeee_Statics::NewProp_Collider1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Ablocksnakeee_Statics::NewProp_Collider2_MetaData[] = {
		{ "Category", "blocksnakeee" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "blocksnakeee.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Ablocksnakeee_Statics::NewProp_Collider2 = { "Collider2", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Ablocksnakeee, Collider2), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Ablocksnakeee_Statics::NewProp_Collider2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Ablocksnakeee_Statics::NewProp_Collider2_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_Ablocksnakeee_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Ablocksnakeee_Statics::NewProp_Collider1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Ablocksnakeee_Statics::NewProp_Collider2,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_Ablocksnakeee_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Ablocksnakeee>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Ablocksnakeee_Statics::ClassParams = {
		&Ablocksnakeee::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_Ablocksnakeee_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_Ablocksnakeee_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_Ablocksnakeee_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Ablocksnakeee_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Ablocksnakeee()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Ablocksnakeee_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(Ablocksnakeee, 2170306471);
	template<> MYPROJECT2_API UClass* StaticClass<Ablocksnakeee>()
	{
		return Ablocksnakeee::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Ablocksnakeee(Z_Construct_UClass_Ablocksnakeee, &Ablocksnakeee::StaticClass, TEXT("/Script/MyProject2"), TEXT("Ablocksnakeee"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Ablocksnakeee);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
