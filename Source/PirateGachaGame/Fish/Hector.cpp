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
}

// Called when the game starts or when spawned
void AHector::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AHector::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

