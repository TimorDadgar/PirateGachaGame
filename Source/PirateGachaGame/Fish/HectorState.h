// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HectorState.generated.h"

class AHector;
struct FStateInput;

/**
 * 
 */
UCLASS(Blueprintable)
class PIRATEGACHAGAME_API UHectorState: public UObject
{
	GENERATED_BODY()

public:
	UHectorState();
	~UHectorState();

	virtual UHectorState* HandleInput(const FStateInput& Input);

private:
};