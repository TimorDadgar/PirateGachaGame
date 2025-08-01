// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include <PirateGachaGame/Loot/F_LootContext.h>
#include <PirateGachaGame/Loot/DA_Loot.h>
#include "F_LootBoxContext.generated.h"


/**
 * 
 */
USTRUCT(BlueprintType)

struct F_LootBoxContext: public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Chance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UDA_Loot* LootDataAsset;
};
