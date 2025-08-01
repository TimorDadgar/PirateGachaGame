// Fill out your copyright notice in the Description page of Project Settings.


#include "FL_ChestContext.h"

float UFL_ChestContext::GetChance(FChestContext ChestContext)
{
	return ChestContext.LuckChance;
}

int32 UFL_ChestContext::GetCost(FChestContext ChestContext)
{
	return ChestContext.Cost;
}

TArray<ATreasure*> UFL_ChestContext::GetTreasure(FChestContext ChestContext)
{
	return ChestContext.Treasure;
}
