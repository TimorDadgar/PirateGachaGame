// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Misc/AssertionMacros.h"
#include "FL_Assert.generated.h"

DECLARE_LOG_CATEGORY_EXTERN(Assert, Error, Error);

/**
 * 
 */
UCLASS()
class PIRATEGACHAGAME_API UFL_Assert : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable)
	static void AssertTrue(bool Condition, FString Message);

	UFUNCTION(BlueprintCallable)
	static void AssertFunctionImplementation(bool Implemented, FString ClassName, FString FunctionName);
};
