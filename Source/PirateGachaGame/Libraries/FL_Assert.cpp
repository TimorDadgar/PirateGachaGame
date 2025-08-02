// Fill out your copyright notice in the Description page of Project Settings.


#include "FL_Assert.h"

DEFINE_LOG_CATEGORY(Assert);

void UFL_Assert::AssertTrue(bool Condition, FString Message)
{
	if (!Condition) {
		UE_LOG(Assert, Error, TEXT("%s"), *Message);
	}
}

void UFL_Assert::AssertFunctionImplementation(bool Implemented, FString ClassName, FString FunctionName)
{
	if (!Implemented) {
		UE_LOG(Assert, Error, TEXT("Class %s has not implemented function %s"), *ClassName, *FunctionName);
	}
}
