// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject2/blocksnake.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeblocksnake() {}
// Cross Module References
	MYPROJECT2_API UClass* Z_Construct_UClass_Ablocksnake_NoRegister();
	MYPROJECT2_API UClass* Z_Construct_UClass_Ablocksnake();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MyProject2();
	MYPROJECT2_API UClass* Z_Construct_UClass_UMyInterface_NoRegister();
// End Cross Module References
	void Ablocksnake::StaticRegisterNativesAblocksnake()
	{
	}
	UClass* Z_Construct_UClass_Ablocksnake_NoRegister()
	{
		return Ablocksnake::StaticClass();
	}
	struct Z_Construct_UClass_Ablocksnake_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Ablocksnake_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject2,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Ablocksnake_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "blocksnake.h" },
		{ "ModuleRelativePath", "blocksnake.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_Ablocksnake_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMyInterface_NoRegister, (int32)VTABLE_OFFSET(Ablocksnake, IMyInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_Ablocksnake_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Ablocksnake>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Ablocksnake_Statics::ClassParams = {
		&Ablocksnake::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_Ablocksnake_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Ablocksnake_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Ablocksnake()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Ablocksnake_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(Ablocksnake, 568998423);
	template<> MYPROJECT2_API UClass* StaticClass<Ablocksnake>()
	{
		return Ablocksnake::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Ablocksnake(Z_Construct_UClass_Ablocksnake, &Ablocksnake::StaticClass, TEXT("/Script/MyProject2"), TEXT("Ablocksnake"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Ablocksnake);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
