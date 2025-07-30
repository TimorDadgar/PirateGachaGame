// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "HoverableInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UHoverableInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 *
 */
class PIRATEGACHAGAME_API IHoverableInterface
{
	GENERATED_BODY()
protected:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, meta = (DisplayName = "Hover"))
	void Hover(bool isHovering);
};
