// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject2/foodspeed.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodefoodspeed() {}
// Cross Module References
	MYPROJECT2_API UClass* Z_Construct_UClass_Afoodspeed_NoRegister();
	MYPROJECT2_API UClass* Z_Construct_UClass_Afoodspeed();
	MYPROJECT2_API UClass* Z_Construct_UClass_Afood();
	UPackage* Z_Construct_UPackage__Script_MyProject2();
// End Cross Module References
	void Afoodspeed::StaticRegisterNativesAfoodspeed()
	{
	}
	UClass* Z_Construct_UClass_Afoodspeed_NoRegister()
	{
		return Afoodspeed::StaticClass();
	}
	struct Z_Construct_UClass_Afoodspeed_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Afoodspeed_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_Afood,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject2,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Afoodspeed_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "foodspeed.h" },
		{ "ModuleRelativePath", "foodspeed.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_Afoodspeed_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Afoodspeed>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Afoodspeed_Statics::ClassParams = {
		&Afoodspeed::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_Afoodspeed_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Afoodspeed_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Afoodspeed()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Afoodspeed_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(Afoodspeed, 825727901);
	template<> MYPROJECT2_API UClass* StaticClass<Afoodspeed>()
	{
		return Afoodspeed::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Afoodspeed(Z_Construct_UClass_Afoodspeed, &Afoodspeed::StaticClass, TEXT("/Script/MyProject2"), TEXT("Afoodspeed"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Afoodspeed);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
