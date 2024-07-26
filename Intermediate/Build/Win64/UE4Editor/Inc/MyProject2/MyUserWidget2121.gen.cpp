// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject2/MyUserWidget2121.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyUserWidget2121() {}
// Cross Module References
	MYPROJECT2_API UClass* Z_Construct_UClass_UMyUserWidget2121_NoRegister();
	MYPROJECT2_API UClass* Z_Construct_UClass_UMyUserWidget2121();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_MyProject2();
// End Cross Module References
	void UMyUserWidget2121::StaticRegisterNativesUMyUserWidget2121()
	{
	}
	UClass* Z_Construct_UClass_UMyUserWidget2121_NoRegister()
	{
		return UMyUserWidget2121::StaticClass();
	}
	struct Z_Construct_UClass_UMyUserWidget2121_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyUserWidget2121_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject2,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyUserWidget2121_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MyUserWidget2121.h" },
		{ "ModuleRelativePath", "MyUserWidget2121.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyUserWidget2121_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyUserWidget2121>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMyUserWidget2121_Statics::ClassParams = {
		&UMyUserWidget2121::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMyUserWidget2121_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMyUserWidget2121_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMyUserWidget2121()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMyUserWidget2121_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMyUserWidget2121, 2282257715);
	template<> MYPROJECT2_API UClass* StaticClass<UMyUserWidget2121>()
	{
		return UMyUserWidget2121::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMyUserWidget2121(Z_Construct_UClass_UMyUserWidget2121, &UMyUserWidget2121::StaticClass, TEXT("/Script/MyProject2"), TEXT("UMyUserWidget2121"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyUserWidget2121);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
