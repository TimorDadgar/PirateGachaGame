// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "HectorState.h"
#include "HectorStateSlowFlopping.generated.h"

/**
 * 
 */
UCLASS()
class PIRATEGACHAGAME_API UHectorStateSlowFlopping : public UHectorState
{
	GENERATED_BODY()

public:
	float floppingTime{ 0.0f };
	UHectorState* HandleInput(const FStateInputFish& Input) override;
};
