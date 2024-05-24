// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "PirateState.generated.h"

/**
 * 
 */
UCLASS()
class PIRATEGACHAGAME_API APirateState : public APlayerState
{
	GENERATED_BODY()
private:
	uint32 PlayerGold;

};
