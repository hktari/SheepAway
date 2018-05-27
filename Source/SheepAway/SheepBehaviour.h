// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "InteractableObject.h"
#include "AIController.h"
#include "Components/BoxComponent.h"
#include "MyEnums.h"

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ActorFactories/ActorFactoryTriggerBox.h"
#include "Classes/Engine/TriggerBox.h"
#include "SheepBehaviour.generated.h"

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class SHEEPAWAY_API USheepBehaviour : public USceneComponent
{
	GENERATED_BODY()

private:
	UPROPERTY()
		AAIController* m_pController;
	UPROPERTY()
		AActor* m_pActorToFollow;
	UPROPERTY()
		class UInteractableInteractionComponent* m_pInteractionComp;
	float m_fFollowCooldownCtr;
public:
	UPROPERTY(EditAnywhere)
		FVector m_TriggerSize;
	UPROPERTY(EditAnywhere)
		float m_fFollowCooldown;
	bool m_bIsFollowing;
	
public:	
	// Sets default values for this component's properties
	USheepBehaviour();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	void MoveTo(AActor& target);

	void Follow(AActor& player);
	
	void MoveToNearestInteractable(InteractableType type);

	UFUNCTION(BlueprintCallable)
	void Interact(InteractableType type);
private:
	void stopFollowing();
	AInteractableObject* findNearestInteractable(InteractableType type);
};
