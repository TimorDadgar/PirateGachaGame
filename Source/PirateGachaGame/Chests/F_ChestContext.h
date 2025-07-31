// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "F_ChestContext.generated.h"

USTRUCT(BlueprintType) // This allows the struct to be used in Blueprints
struct FChestContext
{
    GENERATED_BODY() // This macro is required for all USTRUCTs

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Chest Context") // Expose to editor and Blueprints
    int32 MyInt;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Chest Context")
    float MyFloat;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Chest Context")
    FString MyString;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "My Struct")
    TArray<int32> MyIntArray; // Array of integers

    // Constructor
    FChestContext()
        : MyInt(0), MyFloat(0.0f), MyString(TEXT("")), MyIntArray()
    {
    }
};
