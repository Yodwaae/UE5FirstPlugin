// Fill out your copyright notice in the Description page of Project Settings.


#include "SystemTest.h"

void USystemTest::ProutText(const UObject* WorldContextObject, bool bPrintToScreen, bool bPrintToLog, FLinearColor TextColor, float Duration, const FName Key)
{
#if !(UE_BUILD_SHIPPING || UE_BUILD_TEST) || USE_LOGGING_IN_SHIPPING // Do not Print in Shipping or Test unless explictly enabled.
	PrintString(WorldContextObject, "Prout", bPrintToScreen, bPrintToLog, TextColor, Duration, Key);
#endif
}