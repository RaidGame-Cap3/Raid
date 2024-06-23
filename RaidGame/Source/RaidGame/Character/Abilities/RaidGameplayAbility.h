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

	//���ͷκ��� �����͸� �����´�. 
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
	// �Է� �����Ƽ �� (��Ƽ��)
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Raid|Ability")
	RaidAbilityInputID AbilityInputID = RaidAbilityInputID::None;

	// �����Ƽ �� (�нú�)
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Raid|Ability")
	RaidAbilityInputID AbilityID = RaidAbilityInputID::None;

	//�����Ƽ �ο� ����
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Raid|Ability")
	bool ActivateAbilityOnGranted = false;
	///UGameplayAbility



	//�����Ƽ ��� Ȱ��ȭ�� ���
	virtual void OnAvatarSet(const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilitySpec& Spec) override;
};
