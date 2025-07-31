// Fill out your copyright notice in the Description page of Project Settings.

// MyEnum.h
#pragma once

#include "CoreMinimal.h"
#include "E_ReactionType.generated.h"

UENUM(BlueprintType)
enum class EReactionType : uint8
{
    FoundTreasure UMETA(DisplayName = "Found Treasure"),
    EmptyChest UMETA(DisplayName = "Empty Chest"),
    OutOfGold UMETA(DisplayName = "Out Of Gold"),
};

