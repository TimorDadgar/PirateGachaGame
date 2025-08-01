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
#include "Hector.generated.h"

USTRUCT(BlueprintType)
struct FStateInput
{
	GENERATED_BODY()

	UPROPERTY()
	AHector* Hector;

	UPROPERTY()
	int32 Input;

	UPROPERTY()
	UAnimInstanceHector* AnimInstance;

	FStateInput() {}

	FStateInput(AHector* InHector, int32 InInput, UAnimInstanceHector* InAnimInstance)
		: Hector(InHector), Input(InInput), AnimInstance(InAnimInstance){
	}
};

UCLASS()
class PIRATEGACHAGAME_API AHector : public AActor, public IInteractableInterface, public IReactionInterface
{
	GENERATED_BODY()

public:

	class UHectorState* CurrentState;

	UFUNCTION(BlueprintCallable, Category = "HectorState")
	void HandleStateInput(const FStateInput& Input);

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
