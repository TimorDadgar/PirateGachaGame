// Fill out your copyright notice in the Description page of Project Settings.


#include "AnimInstanceHector.h"
#include "PirateGachaGame/Fish/Hector.h"



void UAnimInstanceHector::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();
	Hector = Cast<AHector>(GetOwningActor());
}

void UAnimInstanceHector::NativeUpdateAnimation(float DeltaSeconds)
{
	if (Hector == nullptr)
	{
		Hector = Cast<AHector>(GetOwningActor());
	}
	if (Hector == nullptr) return;

	bIsIdle = Hector->IsIdle;
	bIsSlowFlopping = Hector->IsSlowFlopping;
	bIsFlopping = Hector->IsFlopping;
	bIsHeckling = Hector->IsHeckling;

}
