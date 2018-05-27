// Fill out your copyright notice in the Description page of Project Settings.

#include "SheepBehaviour.h"
#include "GameFramework/Pawn.h"
#include "EngineUtils.h"
#include "PlayerInteractionComponent.h"
#include "Components/CapsuleComponent.h"
#include "InteractableInteractionComponent.h"

// Sets default values for this component's properties
USheepBehaviour::USheepBehaviour()
	: m_pActorToFollow(nullptr), m_pController(nullptr), m_fFollowCooldownCtr(0.0f), 
		m_TriggerSize(1.0f, 1.0f, 1.0f), m_fFollowCooldown(0.5f), m_bIsFollowing(false)
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
}


// Called when the game starts
void USheepBehaviour::BeginPlay()
{
	Super::BeginPlay();

	// ...

	APawn* owner = dynamic_cast<APawn*>(GetOwner());
	owner->GetInstigatorController()->Possess(owner);
	m_pController = dynamic_cast<AAIController*>(GetOwner()->GetInstigatorController());

	m_pInteractionComp = GetOwner()->FindComponentByClass<UInteractableInteractionComponent>();
	//check(m_pInteractionComp);
}


// Called every frame
void USheepBehaviour::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (m_bIsFollowing) 
	{
		check(m_pActorToFollow);
		if (m_fFollowCooldownCtr >= m_fFollowCooldown)
		{
			MoveTo(*m_pActorToFollow);
			m_fFollowCooldownCtr = 0.0f;
		}
		else 
		{
			m_fFollowCooldownCtr += DeltaTime;
		}
	}
}

void USheepBehaviour::MoveTo(AActor& object) 
{
	m_pController->MoveToActor(&object);
}

void USheepBehaviour::Follow(AActor& player)
{
	if (!m_bIsFollowing)
	{
		// TODO: fix stop interaction
		//if (m_pInteractionComp->IsInteracting)
			//m_pInteractionComp->StopInteraction();

		m_pActorToFollow = &player;
		m_fFollowCooldownCtr = 0.0f;
		m_bIsFollowing = true;
	}
	else
	{ 
		stopFollowing();
	}
}

void USheepBehaviour::MoveToNearestInteractable(InteractableType type)
{
	if (m_bIsFollowing)
		stopFollowing();
	auto interactable = findNearestInteractable(type);
	if (interactable)
		MoveTo(*interactable);
	else
		UE_LOG(LogTemp, Log, TEXT("No interactable to move to."));
}

void USheepBehaviour::Interact(InteractableType type)
{
	// TODO: fix stop interaction
		//if (m_pInteractionComp->IsInteracting) 
		//m_pInteractionComp->StopInteraction();
	MoveToNearestInteractable(type);
}

void USheepBehaviour::stopFollowing()
{
	check(m_bIsFollowing);
	m_bIsFollowing = false;
	m_pActorToFollow = nullptr;
}

AInteractableObject * USheepBehaviour::findNearestInteractable(InteractableType type)
{
	AInteractableObject* closest = nullptr;
	for (TActorIterator<AInteractableObject> itr(GetWorld()); itr; ++itr)
	{
		if (itr->m_Type != type)
			continue;
		if(!closest) 
			closest = *itr;
		else
		{
			if (FVector::Distance(GetOwner()->GetActorLocation(), itr->GetActorLocation())
				< FVector::Distance(GetOwner()->GetActorLocation(), closest->GetActorLocation()))
				closest = *itr;
		}
	}
	return closest;
}

