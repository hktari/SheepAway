// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "SheepBehaviour.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSheepBehaviour() {}
// Cross Module References
	SHEEPAWAY_API UClass* Z_Construct_UClass_USheepBehaviour_NoRegister();
	SHEEPAWAY_API UClass* Z_Construct_UClass_USheepBehaviour();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_SheepAway();
	SHEEPAWAY_API UFunction* Z_Construct_UFunction_USheepBehaviour_Interact();
	SHEEPAWAY_API UEnum* Z_Construct_UEnum_SheepAway_InteractableType();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	SHEEPAWAY_API UClass* Z_Construct_UClass_UInteractableInteractionComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController_NoRegister();
// End Cross Module References
	void USheepBehaviour::StaticRegisterNativesUSheepBehaviour()
	{
		UClass* Class = USheepBehaviour::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Interact", (Native)&USheepBehaviour::execInteract },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_USheepBehaviour_Interact()
	{
		struct SheepBehaviour_eventInteract_Parms
		{
			InteractableType type;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_type = { UE4CodeGen_Private::EPropertyClass::Enum, "type", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SheepBehaviour_eventInteract_Parms, type), Z_Construct_UEnum_SheepAway_InteractableType, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_type_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_type,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_type_Underlying,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "SheepBehaviour.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USheepBehaviour, "Interact", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(SheepBehaviour_eventInteract_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USheepBehaviour_NoRegister()
	{
		return USheepBehaviour::StaticClass();
	}
	UClass* Z_Construct_UClass_USheepBehaviour()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_USceneComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_SheepAway,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_USheepBehaviour_Interact, "Interact" }, // 2586596193
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "ClassGroupNames", "Custom" },
				{ "HideCategories", "Trigger PhysicsVolume" },
				{ "IncludePath", "SheepBehaviour.h" },
				{ "ModuleRelativePath", "SheepBehaviour.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_fFollowCooldown_MetaData[] = {
				{ "Category", "SheepBehaviour" },
				{ "ModuleRelativePath", "SheepBehaviour.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m_fFollowCooldown = { UE4CodeGen_Private::EPropertyClass::Float, "m_fFollowCooldown", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(USheepBehaviour, m_fFollowCooldown), METADATA_PARAMS(NewProp_m_fFollowCooldown_MetaData, ARRAY_COUNT(NewProp_m_fFollowCooldown_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_TriggerSize_MetaData[] = {
				{ "Category", "SheepBehaviour" },
				{ "ModuleRelativePath", "SheepBehaviour.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_TriggerSize = { UE4CodeGen_Private::EPropertyClass::Struct, "m_TriggerSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(USheepBehaviour, m_TriggerSize), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_m_TriggerSize_MetaData, ARRAY_COUNT(NewProp_m_TriggerSize_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pInteractionComp_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "SheepBehaviour.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pInteractionComp = { UE4CodeGen_Private::EPropertyClass::Object, "m_pInteractionComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000080008, 1, nullptr, STRUCT_OFFSET(USheepBehaviour, m_pInteractionComp), Z_Construct_UClass_UInteractableInteractionComponent_NoRegister, METADATA_PARAMS(NewProp_m_pInteractionComp_MetaData, ARRAY_COUNT(NewProp_m_pInteractionComp_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pActorToFollow_MetaData[] = {
				{ "ModuleRelativePath", "SheepBehaviour.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pActorToFollow = { UE4CodeGen_Private::EPropertyClass::Object, "m_pActorToFollow", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(USheepBehaviour, m_pActorToFollow), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(NewProp_m_pActorToFollow_MetaData, ARRAY_COUNT(NewProp_m_pActorToFollow_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pController_MetaData[] = {
				{ "ModuleRelativePath", "SheepBehaviour.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pController = { UE4CodeGen_Private::EPropertyClass::Object, "m_pController", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(USheepBehaviour, m_pController), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(NewProp_m_pController_MetaData, ARRAY_COUNT(NewProp_m_pController_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_m_fFollowCooldown,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_m_TriggerSize,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_m_pInteractionComp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_m_pActorToFollow,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_m_pController,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<USheepBehaviour>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&USheepBehaviour::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USheepBehaviour, 3678713236);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USheepBehaviour(Z_Construct_UClass_USheepBehaviour, &USheepBehaviour::StaticClass, TEXT("/Script/SheepAway"), TEXT("USheepBehaviour"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USheepBehaviour);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
