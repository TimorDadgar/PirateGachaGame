// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Delegates/Delegate.h"
#include "GameFramework/Actor.h"
#include "Treasure.generated.h"

UCLASS()
class PIRATEGACHAGAME_API ATreasure : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATreasure();
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, meta = (DisplayName = "InitializeTreasure"))
	void InitializeTreasure();


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
