// Fill out your copyright notice in the Description page of Project Settings.


#include "AnimInstanceHector.h"
#include "PirateGachaGame/Fish/Hector.h"


void UAnimInstanceHector::OnEnterIdleStateFunc(bool IsIdle) 
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("OnEnterIdleStateFunc"));
	this->Montage_Play(IdleMontage);
}

void UAnimInstanceHector::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();
	OnEnterIdleState.AddDynamic(this, &ThisClass::OnEnterIdleStateFunc);
	OnMontageEnded.AddDynamic(this, &UAnimInstanceHector::HandleMontageEnded);
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("AnimInstance Initialized and delegate bound"));
}

void UAnimInstanceHector::NativeUpdateAnimation(float DeltaSeconds)
{
}
void UAnimInstanceHector::HandleMontageEnded(UAnimMontage* Montage, bool bInterrupted)
{
    if (Montage == IdleMontage)
    {
        if (!bInterrupted)
        {
            GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Montage done"));
            Montage_JumpToSection(FName("IdleLoop"), IdleMontage);
        }
        else
        {
            GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Not done yet"));
        }
    }
}