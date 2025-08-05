// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AnimInstanceHector.h" 
#include "F_StateInput.h"
#include "HectorState.generated.h"

class AHector;
struct FStateInputFish;

UENUM(BlueprintType)
enum class EHectorState : uint8
{
	Idle,
	Flopping,
	SlowFlopping,
	Heckling
};

UCLASS(Blueprintable)
class PIRATEGACHAGAME_API UHectorState: public UObject
{
	GENERATED_BODY()

public:
	UHectorState();
	~UHectorState();

	virtual UHectorState* HandleInput(const FStateInputFish& Input);
	virtual UHectorState* Update(float DeltaTime) { return nullptr; }
	UFUNCTION()
	void OnAnimationEndedFunc(UAnimMontage* Montage, bool bInterrupted);

private:
	FStateInputFish CurrentInput;
};