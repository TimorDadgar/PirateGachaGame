// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Chest.generated.h"

UCLASS()
class PIRATEGACHAGAME_API AChest : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AChest();

	UPROPERTY(BlueprintReadWrite, Category = "Eating")
	bool IsOpening{ false };

	UPROPERTY(BlueprintReadWrite, Category = "Eating")
	bool IsClosing{ false };

	UPROPERTY(BlueprintReadWrite, Category = "Eating")
	bool IsHovering{ false };

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
