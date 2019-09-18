// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ProcGen.generated.h"

/**
 * 
 */
UENUM(BlueprintType)
enum EMyEnum
{
	Wall,
	Floor,
	Pillar
};

UCLASS()
class SKILLSTEST_API UProcGen : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

		UFUNCTION(BlueprintCallable, Category = "John", Meta = (ExpandEnumAsExecs = "Outputs"))
		static void ProcGen(int x, int y, int chance, TEnumAsByte<EMyEnum>& Outputs, int& xOut, int& yOut, FString& Coords);
		UFUNCTION(BlueprintCallable, Category = "John")
		static void ProcGen(int x, int y, FString& Output);
};
