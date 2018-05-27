// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "InteractableObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractableObject() {}
// Cross Module References
	SHEEPAWAY_API UClass* Z_Construct_UClass_AInteractableObject_NoRegister();
	SHEEPAWAY_API UClass* Z_Construct_UClass_AInteractableObject();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SheepAway();
	SHEEPAWAY_API UEnum* Z_Construct_UEnum_SheepAway_InteractableType();
	ENGINE_API UClass* Z_Construct_UClass_UShapeComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AInteractableObject::StaticRegisterNativesAInteractableObject()
	{
	}
	UClass* Z_Construct_UClass_AInteractableObject_NoRegister()
	{
		return AInteractableObject::StaticClass();
	}
	UClass* Z_Construct_UClass_AInteractableObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_SheepAway,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "InteractableObject.h" },
				{ "ModuleRelativePath", "InteractableObject.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_Type_MetaData[] = {
				{ "Category", "InteractableType" },
				{ "ModuleRelativePath", "InteractableObject.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_m_Type = { UE4CodeGen_Private::EPropertyClass::Enum, "m_Type", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AInteractableObject, m_Type), Z_Construct_UEnum_SheepAway_InteractableType, METADATA_PARAMS(NewProp_m_Type_MetaData, ARRAY_COUNT(NewProp_m_Type_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_m_Type_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pCollisionComponent_MetaData[] = {
				{ "Category", "InteractableObject" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "InteractableObject.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pCollisionComponent = { UE4CodeGen_Private::EPropertyClass::Object, "m_pCollisionComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000090009, 1, nullptr, STRUCT_OFFSET(AInteractableObject, m_pCollisionComponent), Z_Construct_UClass_UShapeComponent_NoRegister, METADATA_PARAMS(NewProp_m_pCollisionComponent_MetaData, ARRAY_COUNT(NewProp_m_pCollisionComponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pMeshComponent_MetaData[] = {
				{ "Category", "InteractableObject" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "InteractableObject.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pMeshComponent = { UE4CodeGen_Private::EPropertyClass::Object, "m_pMeshComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000090009, 1, nullptr, STRUCT_OFFSET(AInteractableObject, m_pMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_m_pMeshComponent_MetaData, ARRAY_COUNT(NewProp_m_pMeshComponent_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_m_Type,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_m_Type_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_m_pCollisionComponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_m_pMeshComponent,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AInteractableObject>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AInteractableObject::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				nullptr, 0,
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
	IMPLEMENT_CLASS(AInteractableObject, 2504813499);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AInteractableObject(Z_Construct_UClass_AInteractableObject, &AInteractableObject::StaticClass, TEXT("/Script/SheepAway"), TEXT("AInteractableObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AInteractableObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
