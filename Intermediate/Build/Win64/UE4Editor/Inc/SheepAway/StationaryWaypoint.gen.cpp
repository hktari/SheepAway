// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "StationaryWaypoint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStationaryWaypoint() {}
// Cross Module References
	SHEEPAWAY_API UClass* Z_Construct_UClass_AStationaryWaypoint_NoRegister();
	SHEEPAWAY_API UClass* Z_Construct_UClass_AStationaryWaypoint();
	ENGINE_API UClass* Z_Construct_UClass_ATargetPoint();
	UPackage* Z_Construct_UPackage__Script_SheepAway();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EComponentMobility();
// End Cross Module References
	void AStationaryWaypoint::StaticRegisterNativesAStationaryWaypoint()
	{
	}
	UClass* Z_Construct_UClass_AStationaryWaypoint_NoRegister()
	{
		return AStationaryWaypoint::StaticClass();
	}
	UClass* Z_Construct_UClass_AStationaryWaypoint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_ATargetPoint,
				(UObject* (*)())Z_Construct_UPackage__Script_SheepAway,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "StationaryWaypoint.h" },
				{ "ModuleRelativePath", "StationaryWaypoint.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_Type_MetaData[] = {
				{ "Category", "StationaryWaypoint" },
				{ "ModuleRelativePath", "StationaryWaypoint.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_m_Type = { UE4CodeGen_Private::EPropertyClass::Byte, "m_Type", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000004, 1, nullptr, STRUCT_OFFSET(AStationaryWaypoint, m_Type), Z_Construct_UEnum_Engine_EComponentMobility, METADATA_PARAMS(NewProp_m_Type_MetaData, ARRAY_COUNT(NewProp_m_Type_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_m_Type,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AStationaryWaypoint>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AStationaryWaypoint::StaticClass,
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
	IMPLEMENT_CLASS(AStationaryWaypoint, 3269077023);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AStationaryWaypoint(Z_Construct_UClass_AStationaryWaypoint, &AStationaryWaypoint::StaticClass, TEXT("/Script/SheepAway"), TEXT("AStationaryWaypoint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStationaryWaypoint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
