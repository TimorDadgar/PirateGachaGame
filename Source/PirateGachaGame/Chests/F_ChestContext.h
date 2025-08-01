// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include <PirateGachaGame/Treasure.h>
#include "F_ChestContext.generated.h"

USTRUCT(BlueprintType) // This allows the struct to be used in Blueprints
struct FChestContext
{
    GENERATED_BODY() // This macro is required for all USTRUCTs

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Chest Context") // Expose to editor and Blueprints
    float LuckChance;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Chest Context")
    int32 Cost;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Chest Context")
    TArray<ATreasure*> Treasure; // Array of integers

    // Constructor
    FChestContext()
        : LuckChance(0.0f), Cost(0), Treasure()
    {
    }
};
