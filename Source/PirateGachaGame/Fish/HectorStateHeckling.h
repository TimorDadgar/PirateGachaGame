// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "HectorState.h"
#include "HectorStateHeckling.generated.h"

class AHector;
struct FStateInputFish;

/**
 * 
 */
UCLASS()
class PIRATEGACHAGAME_API UHectorStateHeckling : public UHectorState
{
	GENERATED_BODY()

public:
	UHectorState* HandleInput(const FStateInputFish& Input) override;
};
