// Fill out your copyright notice in the Description page of Project Settings.

#include "InteractableObject.h"
#include "Components/CapsuleComponent.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
AInteractableObject::AInteractableObject()
	: m_pCollisionComponent(nullptr), m_pMeshComponent(nullptr), m_Type(InteractableType::TypeA)
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	m_pCollisionComponent = CreateDefaultSubobject<UCapsuleComponent>("CollisionComponent");
	RootComponent = m_pCollisionComponent;	
	m_pMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>("Mesh");
	m_pMeshComponent->AttachToComponent(RootComponent, FAttachmentTransformRules::SnapToTargetNotIncludingScale);
}

// Called when the game starts or when spawned
void AInteractableObject::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AInteractableObject::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

