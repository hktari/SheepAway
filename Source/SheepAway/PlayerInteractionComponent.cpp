// Fill out your copyright notice in the Description page of Project Settings.

#include "PlayerInteractionComponent.h"

// Sets default values for this component's properties
UPlayerInteractionComponent::UPlayerInteractionComponent() 
	: m_pSheepBehaviour(nullptr)
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
}


// Called when the game starts
void UPlayerInteractionComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UPlayerInteractionComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

bool UPlayerInteractionComponent::Interact(InteractionType type)
{
	if (!m_pSheepBehaviour) return false;
	switch (type)
	{
	case InteractionType::TypeA:
		m_pSheepBehaviour->Interact(InteractableType::TypeA);
		break;
	case InteractionType::TypeB:
		m_pSheepBehaviour->Interact(InteractableType::TypeB);
		break;
	case InteractionType::Follow:
		m_pSheepBehaviour->Follow(*GetOwner());
		break;
	default:
		checkNoEntry();
	}
	return true;
}

void UPlayerInteractionComponent::OnOverlapBegin(UPrimitiveComponent * overlappedComp, AActor * otherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
	// Other Actor is the actor that triggered the event. Check that is not ourself.  
	if ((otherActor != nullptr) && (otherActor != GetOwner()) && (OtherComp != nullptr))
	{
		auto sheepBehavComp = otherActor->FindComponentByClass<USheepBehaviour>();
		if (sheepBehavComp)
			m_pSheepBehaviour = sheepBehavComp;
	}
}

void UPlayerInteractionComponent::OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	// Other Actor is the actor that triggered the event. Check that is not ourself.  
	if ((OtherActor != nullptr) && (OtherActor != GetOwner()) && (OtherComp != nullptr))
	{
		auto sheepBehavComp = OtherActor->FindComponentByClass<USheepBehaviour>();
		if (sheepBehavComp)
			m_pSheepBehaviour = nullptr;
	}
}

