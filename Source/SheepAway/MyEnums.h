// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

UENUM(BlueprintType)		//"BlueprintType" is essential to include
enum class InteractionType : uint8
{
	TypeA 			UMETA(DisplayName = "Interact with A"),
	TypeB 			UMETA(DisplayName = "Interact with B"),
	Follow			UMETA(DisplayName = "Follow")
};

UENUM(BlueprintType)		//"BlueprintType" is essential to include
enum class InteractableType : uint8
{
	TypeA 			UMETA(DisplayName = "A"),
	TypeB 			UMETA(DisplayName = "B")
};


