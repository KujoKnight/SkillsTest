// Fill out your copyright notice in the Description page of Project Settings.


#include "ProcGen.h"

void UProcGen::ProcGen(int x, int y, int chance, TEnumAsByte<EMyEnum>& Outputs, int& xOut, int& yOut, FString& Coords)
{
	for (int ii = 0; ii < y; ii++)
	{
		for (int i = 0; i < x; i++)
		{
			Coords = FString::Printf(TEXT("X: %02d Y: %02d"), xOut, yOut);
			xOut = i;
			yOut = ii;
			Outputs = EMyEnum::Floor;
		}
	}
}

void UProcGen::ProcGen(int x, int y, FString& Output)
{
	for (int ii = 0; ii < y; ii++)
	{
		for (int i = 0; i < x; i++)
		{
			Output = FString::Printf(TEXT("%02d, %02d"), i, ii);
		}
	}
}
