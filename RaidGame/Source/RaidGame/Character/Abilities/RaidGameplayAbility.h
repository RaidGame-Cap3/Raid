// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "RaidAbilityInput.h"
#include "RaidGameplayAbility.generated.h"

/**
 * 
 */
UCLASS()
class RAIDGAME_API URaidGameplayAbility : public UGameplayAbility
{
	GENERATED_BODY()
	
public:
	URaidGameplayAbility(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	//액터로부터 데이터를 가져온다. 
	UFUNCTION(BlueprintCallable, Category = "Raid|Ability")
	AController* GetControllerFromActorInfo() const;

	//UFUNCTION(BlueprintCallable, Category = "Raid|Ability")
	//ARaidPlayerController* GetRaidPlayerControllerFromActorInfo() const;

	UFUNCTION(BlueprintCallable, Category = "Raid|Ability")
	URaidAbilitySystemComponent* GetRaidAbilitySystemComponentFromActorInfo() const;

	//UFUNCTION(BlueprintCallable, Category = "Raid|Ability")
	//AraidCharacter* GetRaidCharacterFromActorInfo() const;

	void TryActivateAbilityOnSpawn(const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilitySpec& Spec) const;




	///UGameplayAbility
	// 입력 어빌리티 값 (액티브)
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Raid|Ability")
	RaidAbilityInputID AbilityInputID = RaidAbilityInputID::None;

	// 어빌리티 값 (패시브)
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Raid|Ability")
	RaidAbilityInputID AbilityID = RaidAbilityInputID::None;

	//어빌리티 부여 여부
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Raid|Ability")
	bool ActivateAbilityOnGranted = false;
	///UGameplayAbility



	//어빌리티 즉시 활성화시 사용
	virtual void OnAvatarSet(const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilitySpec& Spec) override;
};
