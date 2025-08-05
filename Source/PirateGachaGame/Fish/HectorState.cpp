// Fill out your copyright notice in the Description page of Project Settings.


#include "HectorState.h"
#include "Hector.h"
#include <random>

struct FStateInput;

UHectorState::UHectorState()
{
	
}

UHectorState::~UHectorState()
{
}

UHectorState* UHectorState::HandleInput(const FStateInputFish& Input)
{
	CurrentInput = Input;
	if (CurrentInput.AnimInstance)
	{
		CurrentInput.AnimInstance->OnMontageEnded.AddDynamic(this, &UHectorState::OnAnimationEndedFunc);
	}
	return nullptr;
}

void UHectorState::OnAnimationEndedFunc(UAnimMontage* Montage, bool bInterrupted)
{
	// Get a random integer between 0 and the max enum value
	int32 RandomIndex = FMath::RandRange(0, static_cast<uint8>(EHectorState::Flopping));
	EHectorState RandomState = static_cast<EHectorState>(RandomIndex);

	switch(RandomState)
	{
		case EHectorState::Idle:
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Transitioning to Idle State"));
			CurrentInput.AnimInstance->OnEnterIdleState.Broadcast(true);
			CurrentInput.Hector->OnStateChangeFish.Broadcast(NewObject<UHectorStateIdle>(this));
			break;
		case EHectorState::Flopping:
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Transitioning to Flopping State"));
			CurrentInput.AnimInstance->OnEnterFloppingState.Broadcast(true);
			CurrentInput.Hector->OnStateChangeFish.Broadcast(NewObject<UHectorStateFlopping>(this));
			break;
		case EHectorState::SlowFlopping:
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Transitioning to Slow Flopping State"));
			CurrentInput.AnimInstance->OnEnterSlowFloppingState.Broadcast(true);
			CurrentInput.Hector->OnStateChangeFish.Broadcast(NewObject<UHectorStateSlowFlopping>(this));
			break;
		case EHectorState::Heckling:
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Transitioning to Heckling State"));
			CurrentInput.AnimInstance->OnEnterHecklingState.Broadcast(true);
			CurrentInput.Hector->OnStateChangeFish.Broadcast(NewObject<UHectorStateHeckling>(this));
			break;

		default:
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Unknown state!"));
			break;
	}

	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Animation ended in HectorState!"));
	return;
}