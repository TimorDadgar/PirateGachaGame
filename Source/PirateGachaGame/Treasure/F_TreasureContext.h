// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "F_TreasureContext.generated.h"

USTRUCT(BlueprintType) // This allows the struct to be used in Blueprints
struct FTreasureContext
{
    GENERATED_BODY() // This macro is required for all USTRUCTs

        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Treasure Context") // Expose to editor and Blueprints
        UStaticMesh* Mesh;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Treasure Context") // Expose to editor and Blueprints
    UMaterialInstance* Material;

    // Constructor
    FTreasureContext()
        : Mesh(), Material()
    {
    }
};
