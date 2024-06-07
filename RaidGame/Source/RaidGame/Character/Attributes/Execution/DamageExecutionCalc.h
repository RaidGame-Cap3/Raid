// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayEffectExecutionCalculation.h"
#include "DamageExecutionCalc.generated.h"

/**
 * 
 */
UCLASS()
class RAIDGAME_API UDamageExecutionCalc : public UGameplayEffectExecutionCalculation
{
	GENERATED_BODY()
	
public:
	UDamageExecutionCalc();

	virtual void Execute_Implementation(const FGameplayEffectCustomExecutionParameters& ExecutionParams,
		OUT FGameplayEffectCustomExecutionOutput& OutExecutionOutput) const override;
};
