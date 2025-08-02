// Fill out your copyright notice in the Description page of Project Settings.


#include "FL_GuardHasInitialized.h"

void UFL_GuardHasInitialized::GuardHasInitialized(bool HasInitialized, EGuardHasInitializedPaths& Branches)
{
	if (HasInitialized) {
		Branches = EGuardHasInitializedPaths::Initialized;
	}
	else {
		ensureMsgf(HasInitialized, TEXT("A guarded function was called before initialize."));
		Branches = EGuardHasInitializedPaths::NotInitialized;
	}
}
