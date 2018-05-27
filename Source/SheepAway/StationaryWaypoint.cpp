// Fill out your copyright notice in the Description page of Project Settings.

#include "StationaryWaypoint.h"

AStationaryWaypoint::AStationaryWaypoint()
	: ATargetPoint()
{
	RootComponent->SetMobility(m_Type.GetValue());
}

AStationaryWaypoint::AStationaryWaypoint(const FObjectInitializer & ObjectInitializer)
	: ATargetPoint(ObjectInitializer)
{
	RootComponent->SetMobility(m_Type.GetValue());
}
