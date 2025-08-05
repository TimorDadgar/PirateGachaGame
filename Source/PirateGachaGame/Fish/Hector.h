// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/ArrowComponent.h"
#include "InteractableInterface.h"
#include "ReactionInterface.h"
#include "HectorState.h"
#include "HectorStateIdle.h"
#include "HectorStateSlowFlopping.h"
#include "HectorStateFlopping.h"
#include "HectorStateHeckling.h"
#include "AnimInstanceHector.h"
#include "F_StateInput.h"
#include "Hector.generated.h"

struct FStateInputFish;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStateChangeFish, UHectorState*, uFishState);

UCLASS()
class PIRATEGACHAGAME_API AHector : public AActor, public IInteractableInterface, public IReactionInterface
{
	GENERATED_BODY()

public:

	class UHectorState* CurrentState;
	FOnStateChangeFish OnStateChangeFish;

	UFUNCTION(BlueprintCallable, Category = "HectorState")
	void HandleStateInput(const FStateInputFish& Input);
	UFUNCTION()
	void HandleStateChange(UHectorState* StateChange);

public:	
	AHector();

	//UPROPERTY(BlueprintReadWrite, Category = "Fish")
	//bool IsIdle{ false };

	//UPROPERTY(BlueprintReadWrite, Category = "Fish")
	//bool IsSlowFlopping{ false };

	//UPROPERTY(BlueprintReadWrite, Category = "Fish")
	//bool IsFlopping{ false };

	//UPROPERTY(BlueprintReadWrite, Category = "Fish")
	//bool IsHeckling{ false };

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	void Interact_Implementation(UObject* Source);

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Hector Components")
	UArrowComponent* ArrowHatComponent;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Hector Components")
	UStaticMeshComponent* HatMeshComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Hector Components")
	USkeletalMeshComponent* SkeletalMeshComponent;

public:	
	virtual void Tick(float DeltaTime) override;

};
