// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "F_LootContext.h"
#include "DA_Loot.generated.h"

/**
 * 
 */
UCLASS()
class PIRATEGACHAGAME_API UDA_Loot : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TArray<F_LootContext> LootArray;
};
