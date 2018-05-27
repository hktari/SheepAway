// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MyEnums.h"

#include "InteractableInteractionComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class SHEEPAWAY_API UInteractableInteractionComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	bool IsInteracting = false;

public:	
	// Sets default values for this component's properties
	UInteractableInteractionComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable)
		void StartInteraction(InteractableType interactionType);
	UFUNCTION(BlueprintCallable)
		void StopInteraction();
};
