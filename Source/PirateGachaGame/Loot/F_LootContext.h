// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Loot.h"
#include "F_LootContext.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType) 
struct FLootContext: public FTableRowBase
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TSubclassOf<ALoot> Loot;
        FLootContext()
        : Loot()
    {
    }
};
