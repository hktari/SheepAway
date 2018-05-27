// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
enum class InteractionType : uint8;
#ifdef SHEEPAWAY_PlayerInteractionComponent_generated_h
#error "PlayerInteractionComponent.generated.h already included, missing '#pragma once' in PlayerInteractionComponent.h"
#endif
#define SHEEPAWAY_PlayerInteractionComponent_generated_h

#define SheepAway_Source_SheepAway_PlayerInteractionComponent_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnOverlapEnd(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOverlapBegin) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_overlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_otherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnOverlapBegin(Z_Param_overlappedComp,Z_Param_otherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInteract) \
	{ \
		P_GET_ENUM(InteractionType,Z_Param_type); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->Interact(InteractionType(Z_Param_type)); \
		P_NATIVE_END; \
	}


#define SheepAway_Source_SheepAway_PlayerInteractionComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnOverlapEnd(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOverlapBegin) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_overlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_otherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnOverlapBegin(Z_Param_overlappedComp,Z_Param_otherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInteract) \
	{ \
		P_GET_ENUM(InteractionType,Z_Param_type); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->Interact(InteractionType(Z_Param_type)); \
		P_NATIVE_END; \
	}


#define SheepAway_Source_SheepAway_PlayerInteractionComponent_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayerInteractionComponent(); \
	friend SHEEPAWAY_API class UClass* Z_Construct_UClass_UPlayerInteractionComponent(); \
public: \
	DECLARE_CLASS(UPlayerInteractionComponent, USceneComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/SheepAway"), NO_API) \
	DECLARE_SERIALIZER(UPlayerInteractionComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define SheepAway_Source_SheepAway_PlayerInteractionComponent_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUPlayerInteractionComponent(); \
	friend SHEEPAWAY_API class UClass* Z_Construct_UClass_UPlayerInteractionComponent(); \
public: \
	DECLARE_CLASS(UPlayerInteractionComponent, USceneComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/SheepAway"), NO_API) \
	DECLARE_SERIALIZER(UPlayerInteractionComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define SheepAway_Source_SheepAway_PlayerInteractionComponent_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayerInteractionComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayerInteractionComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerInteractionComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerInteractionComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayerInteractionComponent(UPlayerInteractionComponent&&); \
	NO_API UPlayerInteractionComponent(const UPlayerInteractionComponent&); \
public:


#define SheepAway_Source_SheepAway_PlayerInteractionComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayerInteractionComponent(UPlayerInteractionComponent&&); \
	NO_API UPlayerInteractionComponent(const UPlayerInteractionComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerInteractionComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerInteractionComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPlayerInteractionComponent)


#define SheepAway_Source_SheepAway_PlayerInteractionComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_pSheepBehaviour() { return STRUCT_OFFSET(UPlayerInteractionComponent, m_pSheepBehaviour); }


#define SheepAway_Source_SheepAway_PlayerInteractionComponent_h_13_PROLOG
#define SheepAway_Source_SheepAway_PlayerInteractionComponent_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SheepAway_Source_SheepAway_PlayerInteractionComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	SheepAway_Source_SheepAway_PlayerInteractionComponent_h_16_RPC_WRAPPERS \
	SheepAway_Source_SheepAway_PlayerInteractionComponent_h_16_INCLASS \
	SheepAway_Source_SheepAway_PlayerInteractionComponent_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SheepAway_Source_SheepAway_PlayerInteractionComponent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SheepAway_Source_SheepAway_PlayerInteractionComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	SheepAway_Source_SheepAway_PlayerInteractionComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	SheepAway_Source_SheepAway_PlayerInteractionComponent_h_16_INCLASS_NO_PURE_DECLS \
	SheepAway_Source_SheepAway_PlayerInteractionComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SheepAway_Source_SheepAway_PlayerInteractionComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
