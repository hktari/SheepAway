// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class InteractableType : uint8;
#ifdef SHEEPAWAY_InteractableInteractionComponent_generated_h
#error "InteractableInteractionComponent.generated.h already included, missing '#pragma once' in InteractableInteractionComponent.h"
#endif
#define SHEEPAWAY_InteractableInteractionComponent_generated_h

#define SheepAway_Source_SheepAway_InteractableInteractionComponent_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execStopInteraction) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->StopInteraction(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartInteraction) \
	{ \
		P_GET_ENUM(InteractableType,Z_Param_interactionType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->StartInteraction(InteractableType(Z_Param_interactionType)); \
		P_NATIVE_END; \
	}


#define SheepAway_Source_SheepAway_InteractableInteractionComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execStopInteraction) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->StopInteraction(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartInteraction) \
	{ \
		P_GET_ENUM(InteractableType,Z_Param_interactionType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->StartInteraction(InteractableType(Z_Param_interactionType)); \
		P_NATIVE_END; \
	}


#define SheepAway_Source_SheepAway_InteractableInteractionComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInteractableInteractionComponent(); \
	friend SHEEPAWAY_API class UClass* Z_Construct_UClass_UInteractableInteractionComponent(); \
public: \
	DECLARE_CLASS(UInteractableInteractionComponent, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/SheepAway"), NO_API) \
	DECLARE_SERIALIZER(UInteractableInteractionComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define SheepAway_Source_SheepAway_InteractableInteractionComponent_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUInteractableInteractionComponent(); \
	friend SHEEPAWAY_API class UClass* Z_Construct_UClass_UInteractableInteractionComponent(); \
public: \
	DECLARE_CLASS(UInteractableInteractionComponent, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/SheepAway"), NO_API) \
	DECLARE_SERIALIZER(UInteractableInteractionComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define SheepAway_Source_SheepAway_InteractableInteractionComponent_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInteractableInteractionComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractableInteractionComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInteractableInteractionComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractableInteractionComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInteractableInteractionComponent(UInteractableInteractionComponent&&); \
	NO_API UInteractableInteractionComponent(const UInteractableInteractionComponent&); \
public:


#define SheepAway_Source_SheepAway_InteractableInteractionComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInteractableInteractionComponent(UInteractableInteractionComponent&&); \
	NO_API UInteractableInteractionComponent(const UInteractableInteractionComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInteractableInteractionComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractableInteractionComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInteractableInteractionComponent)


#define SheepAway_Source_SheepAway_InteractableInteractionComponent_h_15_PRIVATE_PROPERTY_OFFSET
#define SheepAway_Source_SheepAway_InteractableInteractionComponent_h_12_PROLOG
#define SheepAway_Source_SheepAway_InteractableInteractionComponent_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SheepAway_Source_SheepAway_InteractableInteractionComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	SheepAway_Source_SheepAway_InteractableInteractionComponent_h_15_RPC_WRAPPERS \
	SheepAway_Source_SheepAway_InteractableInteractionComponent_h_15_INCLASS \
	SheepAway_Source_SheepAway_InteractableInteractionComponent_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SheepAway_Source_SheepAway_InteractableInteractionComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SheepAway_Source_SheepAway_InteractableInteractionComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	SheepAway_Source_SheepAway_InteractableInteractionComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	SheepAway_Source_SheepAway_InteractableInteractionComponent_h_15_INCLASS_NO_PURE_DECLS \
	SheepAway_Source_SheepAway_InteractableInteractionComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SheepAway_Source_SheepAway_InteractableInteractionComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
