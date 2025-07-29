// Fill out your copyright notice in the Description page of Project Settings.


#include "RequestPayInterface.h"

bool IRequestPayInterface::RequestPay(UObject* Source, int Amount)
{
	return RecieveRequestPay(Source, Amount);
}
