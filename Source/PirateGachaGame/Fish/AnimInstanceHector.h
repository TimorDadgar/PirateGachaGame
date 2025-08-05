// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "Animation/AnimNodeReference.h"
#include "AnimInstanceHector.generated.h"

/**
 * 
 */

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEnterIdleState, bool, bIsIdle);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEnterSlowFloppingState, bool, bIsSlowFlopping);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEnterFloppingState, bool, bIsFlopping);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEnterHecklingState, bool, bIsHeckling);

UCLASS()
class PIRATEGACHAGAME_API UAnimInstanceHector : public UAnimInstance
{
	GENERATED_BODY()

public:
	FOnEnterIdleState OnEnterIdleState;
	FOnEnterFloppingState OnEnterFloppingState;
	FOnEnterFloppingState OnEnterSlowFloppingState;
	FOnEnterHecklingState OnEnterHecklingState;

	UFUNCTION()
	void OnEnterIdleStateFunc(bool bIsIdle);
	UFUNCTION()
	void OnEnterFloppingStateFunc(bool bIsFlopping);
	UFUNCTION()
	void OnEnterSlowFloppingStateFunc(bool bIsSlowFlopping);
	UFUNCTION()
	void OnEnterHecklingStateFunc(bool bIsHeckling);

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Fish")
	UAnimMontage* IdleMontage;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Fish")
	UAnimMontage* FloppingMontage;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Fish")
	UAnimMontage* SlowFloppingMontage;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Fish")
	UAnimMontage* HecklingMontage;

	virtual void NativeInitializeAnimation() override;
	virtual void NativeUpdateAnimation(float DeltaSeconds);

	UFUNCTION()
	void HandleMontageEnded(UAnimMontage* Montage, bool bInterrupted);

};
