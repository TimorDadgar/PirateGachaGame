// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "PirateController.generated.h"

/**
 * 
 */
UCLASS()
class PIRATEGACHAGAME_API APirateController : public APlayerController
{
	GENERATED_BODY()
	
private:
	virtual void BeginPlay();
};