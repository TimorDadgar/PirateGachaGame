// Fill out your copyright notice in the Description page of Project Settings.


#include "HectorStateIdle.h"
#include "HectorStateSlowFlopping.h"

UHectorState* UHectorStateIdle::HandleInput(AHector* Hector, EHectorStates EInput)
{
    if (EInput == EHectorStates::SlowFlopping)
    {
        return NewObject<UHectorStateSlowFlopping>(this);
    }

    return nullptr;
}
