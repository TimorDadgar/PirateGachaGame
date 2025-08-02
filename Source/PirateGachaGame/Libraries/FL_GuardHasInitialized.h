// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "FL_GuardHasInitialized.generated.h"

UENUM(BlueprintType)
enum class EGuardHasInitializedPaths : uint8
{
	Initialized,
	NotInitialized
};

/**
 * 
 */
UCLASS()
class PIRATEGACHAGAME_API UFL_GuardHasInitialized : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, Category = "Stuff", Meta = (ExpandEnumAsExecs = "Branches"))
	static void GuardHasInitialized(bool HasInitialized, EGuardHasInitializedPaths& Branches);
};
