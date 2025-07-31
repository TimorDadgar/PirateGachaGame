// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "E_ReactionType.h"
#include "ReactionInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UReactionInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 *
 */
class PIRATEGACHAGAME_API IReactionInterface
{
	GENERATED_BODY()
protected:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, meta = (DisplayName = "React"))
	void React(EReactionType Reaction);
};
