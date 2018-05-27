// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "MyEnums.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyEnums() {}
// Cross Module References
	SHEEPAWAY_API UEnum* Z_Construct_UEnum_SheepAway_InteractableType();
	UPackage* Z_Construct_UPackage__Script_SheepAway();
	SHEEPAWAY_API UEnum* Z_Construct_UEnum_SheepAway_InteractionType();
// End Cross Module References
	static UEnum* InteractableType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SheepAway_InteractableType, Z_Construct_UPackage__Script_SheepAway(), TEXT("InteractableType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_InteractableType(InteractableType_StaticEnum, TEXT("/Script/SheepAway"), TEXT("InteractableType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SheepAway_InteractableType_CRC() { return 1292639364U; }
	UEnum* Z_Construct_UEnum_SheepAway_InteractableType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SheepAway();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("InteractableType"), 0, Get_Z_Construct_UEnum_SheepAway_InteractableType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "InteractableType::TypeA", (int64)InteractableType::TypeA },
				{ "InteractableType::TypeB", (int64)InteractableType::TypeB },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "MyEnums.h" },
				{ "ToolTip", "\"BlueprintType\" is essential to include" },
				{ "TypeA.DisplayName", "A" },
				{ "TypeB.DisplayName", "B" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SheepAway,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"InteractableType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"InteractableType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* InteractionType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SheepAway_InteractionType, Z_Construct_UPackage__Script_SheepAway(), TEXT("InteractionType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_InteractionType(InteractionType_StaticEnum, TEXT("/Script/SheepAway"), TEXT("InteractionType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SheepAway_InteractionType_CRC() { return 3118852511U; }
	UEnum* Z_Construct_UEnum_SheepAway_InteractionType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SheepAway();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("InteractionType"), 0, Get_Z_Construct_UEnum_SheepAway_InteractionType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "InteractionType::TypeA", (int64)InteractionType::TypeA },
				{ "InteractionType::TypeB", (int64)InteractionType::TypeB },
				{ "InteractionType::Follow", (int64)InteractionType::Follow },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Follow.DisplayName", "Follow" },
				{ "ModuleRelativePath", "MyEnums.h" },
				{ "ToolTip", "\"BlueprintType\" is essential to include" },
				{ "TypeA.DisplayName", "Interact with A" },
				{ "TypeB.DisplayName", "Interact with B" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SheepAway,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"InteractionType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"InteractionType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
