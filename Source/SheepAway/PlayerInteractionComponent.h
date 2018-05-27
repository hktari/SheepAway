// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"

#include "Classes/Components/BoxComponent.h"
#include "SheepBehaviour.h"

#include "PlayerInteractionComponent.generated.h"

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class SHEEPAWAY_API UPlayerInteractionComponent : public USceneComponent
{
	GENERATED_BODY()

private:
	UPROPERTY()
		USheepBehaviour* m_pSheepBehaviour;

public:	
	// Sets default values for this component's properties
	UPlayerInteractionComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	UFUNCTION(BlueprintCallable, Category = "Player Interaction")
	bool Interact(InteractionType type);
private:
	UFUNCTION(BlueprintCallable, Category = "Player Interaction")
	void OnOverlapBegin(UPrimitiveComponent* overlappedComp, AActor* otherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	UFUNCTION(BlueprintCallable, Category = "Player Interaction")
	void OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
};
