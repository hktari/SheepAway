// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/TargetPoint.h"
#include "StationaryWaypoint.generated.h"

/**
 * 
 */
UCLASS()
class SHEEPAWAY_API AStationaryWaypoint : public ATargetPoint
{
	GENERATED_BODY()
	
public:
	UPROPERTY(BlueprintReadWrite)
		TEnumAsByte<EComponentMobility::Type> m_Type = EComponentMobility::Type::Static;
public:
	AStationaryWaypoint();
	AStationaryWaypoint(const FObjectInitializer& ObjectInitializer);	
};
