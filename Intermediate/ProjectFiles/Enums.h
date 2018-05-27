#pragma once

#include "CoreMinimal.h"

UENUM(BlueprintType)		//"BlueprintType" is essential to include
enum class InteractionType : uint8
{
	TypeA 	UMETA(DisplayName = "A"),
	TypeB 	UMETA(DisplayName = "B")
};
