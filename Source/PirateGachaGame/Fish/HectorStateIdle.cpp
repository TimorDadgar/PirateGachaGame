// Fill out your copyright notice in the Description page of Project Settings.

#include "HectorStateIdle.h"
#include "Hector.h"
#include "HectorStateSlowFlopping.h"

UHectorState* UHectorStateIdle::HandleInput(const FStateInput& Input)
{
    if (Input.Input == 0) // EHectorStates::SlowFlopping
    {
        GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Transitioning to Slow Flopping State"));
        return NewObject<UHectorStateSlowFlopping>(this);
    }
    GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Idle HandleInput!"));
    return NewObject<UHectorStateIdle>(this);
}
