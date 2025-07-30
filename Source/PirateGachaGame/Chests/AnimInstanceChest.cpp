// Fill out your copyright notice in the Description page of Project Settings.


#include "AnimInstanceChest.h"
#include "Chest.h"


void UAnimInstanceChest::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();
	Chest = Cast<AChest>(GetOwningActor());
}

void UAnimInstanceChest::NativeUpdateAnimation(float DeltaSeconds)
{
	if (Chest == nullptr)
	{
		Chest = Cast<AChest>(GetOwningActor());
	}
	if (Chest == nullptr) return;
}