// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include <PirateGachaGame/Treasure.h>
#include "F_ChestContext.generated.h"

USTRUCT(BlueprintType) // This allows the struct to be used in Blueprints
struct FChestContext
{
    GENERATED_BODY() // This macro is required for all USTRUCTs

    UPROPERTY(EditAnywhere, BlueprintReadWrite) // Expose to editor and Blueprints
    float Chance;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 Cost;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<ATreasure*> Prizes; // Array of integers

    // Constructor
    FChestContext()
        : Chance(0.0f), Cost(0), Prizes()
    {
    }
};
