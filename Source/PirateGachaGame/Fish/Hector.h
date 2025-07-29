// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/ArrowComponent.h"
#include "../Interfaces/InteractableInterface.h"
#include "Hector.generated.h"

UCLASS()
class PIRATEGACHAGAME_API AHector : public AActor, public IInteractableInterface
{
	GENERATED_BODY()

public:
	enum HectorStates
	{
		Idle,
		SlowFlopping,
		Flopping,
		Heckling
	};

public:	
	// Sets default values for this actor's properties
	AHector();

	UPROPERTY(BlueprintReadWrite, Category = "Fish")
	bool IsIdle{ false };

	UPROPERTY(BlueprintReadWrite, Category = "Fish")
	bool IsSlowFlopping{ false };

	UPROPERTY(BlueprintReadWrite, Category = "Fish")
	bool IsFlopping{ false };

	UPROPERTY(BlueprintReadWrite, Category = "Fish")
	bool IsHeckling{ false };

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Hector Components")
	UArrowComponent* ArrowHatComponent;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Hector Components")
	UStaticMeshComponent* HatMeshComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Hector Components")
	USkeletalMeshComponent* SkeletalMeshComponent;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void Interact(UObject* Source) override;

};
