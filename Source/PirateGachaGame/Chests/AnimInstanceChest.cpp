// Fill out your copyright notice in the Description page of Project Settings.


#include "AnimInstanceChest.h"
#include "PirateGachaGame/Chests/Chest.h"


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

	bIsOpening = Chest->IsOpening;
	bIsClosing = Chest->IsClosing;
	bIsHovering = Chest->IsHovering;
}