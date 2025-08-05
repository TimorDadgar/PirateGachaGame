// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "F_StateInput.generated.h"

class AHector;
class UAnimInstanceHector;

USTRUCT(BlueprintType)
struct FStateInputFish
{
	GENERATED_BODY()

	UPROPERTY()
	AHector* Hector;

	UPROPERTY()
	int32 Input;

	UPROPERTY()
	UAnimInstanceHector* AnimInstance;

	FStateInputFish() {}

	FStateInputFish(AHector* InHector, int32 InInput, UAnimInstanceHector* InAnimInstance)
		: Hector(InHector), Input(InInput), AnimInstance(InAnimInstance) {
	}
};
