// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "Animation/AnimNodeReference.h"
#include "HectorState.h"
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

	UFUNCTION()
	void OnEnterIdleStateFunc(bool bIsIdle);

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Fish")
	UAnimMontage* IdleMontage;

	virtual void NativeInitializeAnimation() override;
	virtual void NativeUpdateAnimation(float DeltaSeconds);

	UFUNCTION()
	void HandleMontageEnded(UAnimMontage* Montage, bool bInterrupted);

private:
	//UPROPERTY(BlueprintReadOnly, Category = Fish, meta = (AllowPrivateAccess = "true"))
	//class AHector* Hector;

	UPROPERTY(BlueprintReadOnly, Category = Fish, meta = (AllowPrivateAccess = "true"))
	bool bIsIdle;

	UPROPERTY(BlueprintReadOnly, Category = Fish, meta = (AllowPrivateAccess = "true"))
	bool bIsSlowFlopping;

	UPROPERTY(BlueprintReadOnly, Category = Fish, meta = (AllowPrivateAccess = "true"))
	bool bIsFlopping;

	UPROPERTY(BlueprintReadOnly, Category = Fish, meta = (AllowPrivateAccess = "true"))
	bool bIsHeckling;
	
};
