// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ASnakeElementBase;
class AActor;
#ifdef MYPROJECT2_snakebase_generated_h
#error "snakebase.generated.h already included, missing '#pragma once' in snakebase.h"
#endif
#define MYPROJECT2_snakebase_generated_h

#define MyProject2_Source_MyProject2_snakebase_h_24_SPARSE_DATA
#define MyProject2_Source_MyProject2_snakebase_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSnakeElementOverlap);


#define MyProject2_Source_MyProject2_snakebase_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSnakeElementOverlap);


#define MyProject2_Source_MyProject2_snakebase_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAsnakebase(); \
	friend struct Z_Construct_UClass_Asnakebase_Statics; \
public: \
	DECLARE_CLASS(Asnakebase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject2"), NO_API) \
	DECLARE_SERIALIZER(Asnakebase)


#define MyProject2_Source_MyProject2_snakebase_h_24_INCLASS \
private: \
	static void StaticRegisterNativesAsnakebase(); \
	friend struct Z_Construct_UClass_Asnakebase_Statics; \
public: \
	DECLARE_CLASS(Asnakebase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject2"), NO_API) \
	DECLARE_SERIALIZER(Asnakebase)


#define MyProject2_Source_MyProject2_snakebase_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API Asnakebase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(Asnakebase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, Asnakebase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(Asnakebase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API Asnakebase(Asnakebase&&); \
	NO_API Asnakebase(const Asnakebase&); \
public:


#define MyProject2_Source_MyProject2_snakebase_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API Asnakebase(Asnakebase&&); \
	NO_API Asnakebase(const Asnakebase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, Asnakebase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(Asnakebase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(Asnakebase)


#define MyProject2_Source_MyProject2_snakebase_h_24_PRIVATE_PROPERTY_OFFSET
#define MyProject2_Source_MyProject2_snakebase_h_21_PROLOG
#define MyProject2_Source_MyProject2_snakebase_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject2_Source_MyProject2_snakebase_h_24_PRIVATE_PROPERTY_OFFSET \
	MyProject2_Source_MyProject2_snakebase_h_24_SPARSE_DATA \
	MyProject2_Source_MyProject2_snakebase_h_24_RPC_WRAPPERS \
	MyProject2_Source_MyProject2_snakebase_h_24_INCLASS \
	MyProject2_Source_MyProject2_snakebase_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject2_Source_MyProject2_snakebase_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject2_Source_MyProject2_snakebase_h_24_PRIVATE_PROPERTY_OFFSET \
	MyProject2_Source_MyProject2_snakebase_h_24_SPARSE_DATA \
	MyProject2_Source_MyProject2_snakebase_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject2_Source_MyProject2_snakebase_h_24_INCLASS_NO_PURE_DECLS \
	MyProject2_Source_MyProject2_snakebase_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECT2_API UClass* StaticClass<class Asnakebase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject2_Source_MyProject2_snakebase_h


#define FOREACH_ENUM_EMOVEMENTDIRECTION(op) \
	op(EMovementDirection::UP) \
	op(EMovementDirection::DOWN) \
	op(EMovementDirection::LEFT) \
	op(EMovementDirection::RIGHT) 

enum class EMovementDirection;
template<> MYPROJECT2_API UEnum* StaticEnum<EMovementDirection>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
