// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "InteractableInteractionComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractableInteractionComponent() {}
// Cross Module References
	SHEEPAWAY_API UClass* Z_Construct_UClass_UInteractableInteractionComponent_NoRegister();
	SHEEPAWAY_API UClass* Z_Construct_UClass_UInteractableInteractionComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_SheepAway();
	SHEEPAWAY_API UFunction* Z_Construct_UFunction_UInteractableInteractionComponent_StartInteraction();
	SHEEPAWAY_API UEnum* Z_Construct_UEnum_SheepAway_InteractableType();
	SHEEPAWAY_API UFunction* Z_Construct_UFunction_UInteractableInteractionComponent_StopInteraction();
// End Cross Module References
	void UInteractableInteractionComponent::StaticRegisterNativesUInteractableInteractionComponent()
	{
		UClass* Class = UInteractableInteractionComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "StartInteraction", (Native)&UInteractableInteractionComponent::execStartInteraction },
			{ "StopInteraction", (Native)&UInteractableInteractionComponent::execStopInteraction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UInteractableInteractionComponent_StartInteraction()
	{
		struct InteractableInteractionComponent_eventStartInteraction_Parms
		{
			InteractableType interactionType;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_interactionType = { UE4CodeGen_Private::EPropertyClass::Enum, "interactionType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(InteractableInteractionComponent_eventStartInteraction_Parms, interactionType), Z_Construct_UEnum_SheepAway_InteractableType, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_interactionType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_interactionType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_interactionType_Underlying,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "InteractableInteractionComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractableInteractionComponent, "StartInteraction", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(InteractableInteractionComponent_eventStartInteraction_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UInteractableInteractionComponent_StopInteraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "InteractableInteractionComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractableInteractionComponent, "StopInteraction", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UInteractableInteractionComponent_NoRegister()
	{
		return UInteractableInteractionComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UInteractableInteractionComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UActorComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_SheepAway,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UInteractableInteractionComponent_StartInteraction, "StartInteraction" }, // 892323316
				{ &Z_Construct_UFunction_UInteractableInteractionComponent_StopInteraction, "StopInteraction" }, // 2811620625
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "ClassGroupNames", "Custom" },
				{ "IncludePath", "InteractableInteractionComponent.h" },
				{ "ModuleRelativePath", "InteractableInteractionComponent.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UInteractableInteractionComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UInteractableInteractionComponent::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInteractableInteractionComponent, 319113477);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInteractableInteractionComponent(Z_Construct_UClass_UInteractableInteractionComponent, &UInteractableInteractionComponent::StaticClass, TEXT("/Script/SheepAway"), TEXT("UInteractableInteractionComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractableInteractionComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
