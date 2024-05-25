// Fill out your copyright notice in the Description page of Project Settings.


#include "PirateController.h"

void APirateController::BeginPlay()
{
	bShowMouseCursor = true;
	FInputModeGameAndUI inputMode;
	SetInputMode(FInputModeUIOnly());
	inputMode.SetHideCursorDuringCapture(false);
	SetInputMode(inputMode);
}
