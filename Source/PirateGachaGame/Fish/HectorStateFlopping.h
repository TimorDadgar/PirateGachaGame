// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "HectorState.h"
#include "HectorStateFlopping.generated.h"
/**
 * 
 */
UCLASS()
class PIRATEGACHAGAME_API UHectorStateFlopping : public UHectorState
{
	GENERATED_BODY()

public:
	UHectorState* HandleInput(const FStateInputFish& Input) override;
};
