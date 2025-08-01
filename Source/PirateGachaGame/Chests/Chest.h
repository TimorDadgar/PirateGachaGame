// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "../Interfaces/InteractableInterface.h"
#include "../Interfaces/HoverableInterface.h"
#include "Chest.generated.h"

UCLASS()
class PIRATEGACHAGAME_API AChest : public AActor, public IInteractableInterface, public IHoverableInterface
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AChest();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void Interact_Implementation(UObject* Source) override;

};
