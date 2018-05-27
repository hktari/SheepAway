// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyEnums.h"

#include "InteractableObject.generated.h"

class UShapeComponent;

UCLASS()
class SHEEPAWAY_API AInteractableObject : public AActor
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditDefaultsOnly)
	UStaticMeshComponent* m_pMeshComponent;
	
	UPROPERTY(EditDefaultsOnly)
	UShapeComponent* m_pCollisionComponent;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=InteractableType)
	InteractableType m_Type;
public:	
	// Sets default values for this actor's properties
	AInteractableObject();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
};
