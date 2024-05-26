// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "AnimInstanceHector.generated.h"

/**
 * 
 */
UCLASS()
class PIRATEGACHAGAME_API UAnimInstanceHector : public UAnimInstance
{
	GENERATED_BODY()

public:
	virtual void NativeInitializeAnimation() override;
	virtual void NativeUpdateAnimation(float DeltaSeconds);

private:
	UPROPERTY(BlueprintReadOnly, Category = Fish, meta = (AllowPrivateAccess = "true"))
	class AHector* Hector;

	UPROPERTY(BlueprintReadOnly, Category = Fish, meta = (AllowPrivateAccess = "true"))
	bool bIsIdle;

	UPROPERTY(BlueprintReadOnly, Category = Fish, meta = (AllowPrivateAccess = "true"))
	bool bIsSlowFlopping;

	UPROPERTY(BlueprintReadOnly, Category = Fish, meta = (AllowPrivateAccess = "true"))
	bool bIsFlopping;

	UPROPERTY(BlueprintReadOnly, Category = Fish, meta = (AllowPrivateAccess = "true"))
	bool bIsHeckling;
	
};
