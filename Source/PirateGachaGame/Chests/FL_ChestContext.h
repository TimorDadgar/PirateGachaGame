// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "F_ChestContext.h"
#include "FL_ChestContext.generated.h"

/**
 * 
 */
UCLASS()
class PIRATEGACHAGAME_API UFL_ChestContext : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintPure)
	static float GetChance(FChestContext ChestContext);
	UFUNCTION(BlueprintCallable, BlueprintPure)
	static int32 GetCost(FChestContext ChestContext);
	UFUNCTION(BlueprintCallable, BlueprintPure)
	static TArray<ATreasure*> GetTreasure(FChestContext ChestContext);
	
};
