// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "InteractableInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UInteractableInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class PIRATEGACHAGAME_API IInteractableInterface
{
	GENERATED_BODY()
protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, meta = (DisplayName = "Interact"))
	void RecieveInteract(UObject* Source);
public:
	virtual void Interact(UObject* Source);
};
