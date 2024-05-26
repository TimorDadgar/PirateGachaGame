// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "AnimInstanceChest.generated.h"

/**
 * 
 */
UCLASS()
class PIRATEGACHAGAME_API UAnimInstanceChest : public UAnimInstance
{
	GENERATED_BODY()

public:
	virtual void NativeInitializeAnimation() override;
	virtual void NativeUpdateAnimation(float DeltaSeconds);
private:
	UPROPERTY(BlueprintReadOnly, Category = Chest, meta = (AllowPrivateAccess = "true"))
	class AChest* Chest;

	UPROPERTY(BlueprintReadOnly, Category = Chest, meta = (AllowPrivateAccess = "true"))
	bool bIsOpening;

	UPROPERTY(BlueprintReadOnly, Category = Chest, meta = (AllowPrivateAccess = "true"))
	bool bIsClosing;

	UPROPERTY(BlueprintReadOnly, Category = Chest, meta = (AllowPrivateAccess = "true"))
	bool bIsHovering;
};
