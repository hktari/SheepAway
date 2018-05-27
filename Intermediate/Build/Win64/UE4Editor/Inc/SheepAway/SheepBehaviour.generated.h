// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class InteractableType : uint8;
#ifdef SHEEPAWAY_SheepBehaviour_generated_h
#error "SheepBehaviour.generated.h already included, missing '#pragma once' in SheepBehaviour.h"
#endif
#define SHEEPAWAY_SheepBehaviour_generated_h

#define SheepAway_Source_SheepAway_SheepBehaviour_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execInteract) \
	{ \
		P_GET_ENUM(InteractableType,Z_Param_type); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Interact(InteractableType(Z_Param_type)); \
		P_NATIVE_END; \
	}


#define SheepAway_Source_SheepAway_SheepBehaviour_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execInteract) \
	{ \
		P_GET_ENUM(InteractableType,Z_Param_type); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Interact(InteractableType(Z_Param_type)); \
		P_NATIVE_END; \
	}


#define SheepAway_Source_SheepAway_SheepBehaviour_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSheepBehaviour(); \
	friend SHEEPAWAY_API class UClass* Z_Construct_UClass_USheepBehaviour(); \
public: \
	DECLARE_CLASS(USheepBehaviour, USceneComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/SheepAway"), NO_API) \
	DECLARE_SERIALIZER(USheepBehaviour) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define SheepAway_Source_SheepAway_SheepBehaviour_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUSheepBehaviour(); \
	friend SHEEPAWAY_API class UClass* Z_Construct_UClass_USheepBehaviour(); \
public: \
	DECLARE_CLASS(USheepBehaviour, USceneComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/SheepAway"), NO_API) \
	DECLARE_SERIALIZER(USheepBehaviour) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define SheepAway_Source_SheepAway_SheepBehaviour_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USheepBehaviour(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USheepBehaviour) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USheepBehaviour); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USheepBehaviour); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USheepBehaviour(USheepBehaviour&&); \
	NO_API USheepBehaviour(const USheepBehaviour&); \
public:


#define SheepAway_Source_SheepAway_SheepBehaviour_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USheepBehaviour(USheepBehaviour&&); \
	NO_API USheepBehaviour(const USheepBehaviour&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USheepBehaviour); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USheepBehaviour); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USheepBehaviour)


#define SheepAway_Source_SheepAway_SheepBehaviour_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_pController() { return STRUCT_OFFSET(USheepBehaviour, m_pController); } \
	FORCEINLINE static uint32 __PPO__m_pActorToFollow() { return STRUCT_OFFSET(USheepBehaviour, m_pActorToFollow); } \
	FORCEINLINE static uint32 __PPO__m_pInteractionComp() { return STRUCT_OFFSET(USheepBehaviour, m_pInteractionComp); }


#define SheepAway_Source_SheepAway_SheepBehaviour_h_17_PROLOG
#define SheepAway_Source_SheepAway_SheepBehaviour_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SheepAway_Source_SheepAway_SheepBehaviour_h_20_PRIVATE_PROPERTY_OFFSET \
	SheepAway_Source_SheepAway_SheepBehaviour_h_20_RPC_WRAPPERS \
	SheepAway_Source_SheepAway_SheepBehaviour_h_20_INCLASS \
	SheepAway_Source_SheepAway_SheepBehaviour_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SheepAway_Source_SheepAway_SheepBehaviour_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SheepAway_Source_SheepAway_SheepBehaviour_h_20_PRIVATE_PROPERTY_OFFSET \
	SheepAway_Source_SheepAway_SheepBehaviour_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	SheepAway_Source_SheepAway_SheepBehaviour_h_20_INCLASS_NO_PURE_DECLS \
	SheepAway_Source_SheepAway_SheepBehaviour_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SheepAway_Source_SheepAway_SheepBehaviour_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
