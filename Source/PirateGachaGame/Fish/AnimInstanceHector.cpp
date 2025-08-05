// Fill out your copyright notice in the Description page of Project Settings.


#include "AnimInstanceHector.h"
#include "PirateGachaGame/Fish/Hector.h"


void UAnimInstanceHector::OnEnterIdleStateFunc(bool IsIdle) 
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("OnEnterIdleStateFunc"));
	this->Montage_Play(IdleMontage);
}

void UAnimInstanceHector::OnEnterFloppingStateFunc(bool IsFlopping)
{
    GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("OnEnterFloppingStateFunc"));
    this->Montage_Play(FloppingMontage);
}

void UAnimInstanceHector::OnEnterSlowFloppingStateFunc(bool IsSlowFlopping)
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("OnEnterFloppingStateFunc"));
	this->Montage_Play(SlowFloppingMontage);
}

void UAnimInstanceHector::OnEnterHecklingStateFunc(bool IsHeckling)
{
    GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("OnEnterHecklingStateFunc"));
    this->Montage_Play(HecklingMontage);
}

void UAnimInstanceHector::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();
	OnEnterIdleState.AddDynamic(this, &ThisClass::OnEnterIdleStateFunc);
	OnEnterFloppingState.AddDynamic(this, &ThisClass::OnEnterFloppingStateFunc);
	OnEnterHecklingState.AddDynamic(this, &ThisClass::OnEnterHecklingStateFunc);
	OnMontageEnded.AddDynamic(this, &ThisClass::HandleMontageEnded);
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("AnimInstance Initialized and delegate bound"));
}

void UAnimInstanceHector::NativeUpdateAnimation(float DeltaSeconds)
{
}
void UAnimInstanceHector::HandleMontageEnded(UAnimMontage* Montage, bool bInterrupted)
{
	//OnAnimationEnded.Broadcast(bInterrupted);
}