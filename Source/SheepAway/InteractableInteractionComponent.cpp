// Fill out your copyright notice in the Description page of Project Settings.

#include "InteractableInteractionComponent.h"
#include "GameFramework/Pawn.h"
#include "EngineUtils.h"
#include "GameFramework/CharacterMovementComponent.h"

// Sets default values for this component's properties
UInteractableInteractionComponent::UInteractableInteractionComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UInteractableInteractionComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UInteractableInteractionComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UInteractableInteractionComponent::StartInteraction(InteractableType interactionType)
{
	IsInteracting = true;
	GetOwner()->FindComponentByClass<UCharacterMovementComponent>()->Deactivate();
}

void UInteractableInteractionComponent::StopInteraction()
{
	IsInteracting = false;
	GetOwner()->FindComponentByClass<UCharacterMovementComponent>()->Activate();
}

