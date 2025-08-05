// Fill out your copyright notice in the Description page of Project Settings.


#include "Hector.h"

// Sets default values
AHector::AHector()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	SkeletalMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMeshComponent"));
	SkeletalMeshComponent->SetupAttachment(RootComponent);

	ArrowHatComponent = CreateDefaultSubobject<UArrowComponent>(TEXT("ArrowComponent"));
	ArrowHatComponent->SetupAttachment(SkeletalMeshComponent);

	HatMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
	HatMeshComponent->bHiddenInGame = true;
	HatMeshComponent->SetupAttachment(SkeletalMeshComponent);

	OnStateChangeFish.AddDynamic(this, &AHector::HandleStateChange);
}

void AHector::BeginPlay()
{
	Super::BeginPlay();
	CurrentState = NewObject<UHectorStateIdle>(this);
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Hector Begin Play"));
	
	// Setting up state machine
	UAnimInstanceHector* HectorAnimInstance = Cast<UAnimInstanceHector>(SkeletalMeshComponent->GetAnimInstance());
	int32 testInput = 0;
	const FStateInputFish& Input = FStateInputFish(this, testInput, HectorAnimInstance);
	HandleStateInput(Input);
}

void AHector::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AHector::Interact_Implementation(UObject* Source)
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Hector Interacted!"));
}

void AHector::HandleStateInput(const FStateInputFish& Input)
{
	if (CurrentState)
	{
		UHectorState* NewState = CurrentState->HandleInput(Input);
		if (NewState)
		{
			CurrentState = NewState;
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("CurrentState Changed!"));
		}
	}
}

void AHector::HandleStateChange(UHectorState* StateChange) 
{
	CurrentState = StateChange;
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("State Change Handled!"));
}