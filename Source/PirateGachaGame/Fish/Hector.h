// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Hector.generated.h"

UCLASS()
class PIRATEGACHAGAME_API AHector : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AHector();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};