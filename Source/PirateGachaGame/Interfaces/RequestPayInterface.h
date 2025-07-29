// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "RequestPayInterface.generated.h"

/**
 * 
 */
UINTERFACE(MinimalAPI)
class URequestPayInterface : public UInterface
{
	GENERATED_BODY()
	
};

/**
 *
 */
class PIRATEGACHAGAME_API IRequestPayInterface
{
	GENERATED_BODY()
protected:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, meta = (DisplayName = "RequestPay"))
	bool RequestPay(UObject* Source, int Amount);
};
