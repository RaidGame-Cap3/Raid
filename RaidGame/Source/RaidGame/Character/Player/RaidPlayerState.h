// Fill out your copyright notice in the Description page of Project Settings.
//  ��Ʈ��ŷ�� ���� PlayerState
//
// ���� ���� ������ �����÷��� �����Ƽ �ý��� ������Ʈ(ASC)�� ��ġ�� �÷��̾� ����(Player State)
// ASC�� �÷��̾� ���¿� ���� ��� �� ������Ʈ �� �÷��� (�⺻�� ����)
// 
// ���� ���Ϳ� �ƹ�Ÿ ���Ͱ� �ٸ��� IAbilitySystemInterface �����ʿ�
// �������̽��� UAbilitySystemComponent* GetAbilitySystemComponent() const ����
// ASC�� �� �������̽� ����� ã�����ν� �ý��� ���ο��� ���� ��ȣ �ۿ�
// 
// 
// 
// ������Ʈ : OwnerActor�� �����ڿ��� �����ǰ� ��������� �����Ǿ� ǥ��
//  
// Create ability system component, and set it to be explicitly replicated
//AbilitySystemComponent = CreateDefaultSubobject<UGDAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
//AbilitySystemComponent->SetIsReplicated(true);
//...
// 
// ���� ��Ʈ�ѷ� ����(����) �� �ʱ�ȭ
// 
// ASC�� ���� �����ϴ� �÷��̾� ���� ĳ������ ���,
// �Ϲ������� ���� OwnessBy() ��ɿ��� ������ �ʱ�ȭ�ϰ� 
// �÷��̾� ��Ʈ�ѷ��� Acknowledge Possess() ��ɿ��� Ŭ���̾�Ʈ�� �ʱ�ȭ
// 
// 
// 
// ASC�� �÷��̾� ���¿� �ִ� �÷��̾� ���� ĳ������ ���, 
// �Ϲ������� ���� OwnessBy() �Լ����� ������ �ʱ�ȭ�ϰ� 
// ���� OnRep_PlayerState() �Լ����� Ŭ���̾�Ʈ���� �ʱ�ȭ 
// �̴� �÷��̾� ���°� Ŭ���̾�Ʈ�� �����ϵ��� ����
// 
#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemInterface.h"
#include "GameFramework/PlayerState.h"
#include "GameplayEffectTypes.h"

#include "RaidPlayerState.generated.h"

/**
 * 
 */
UCLASS()
class RAIDGAME_API ARaidPlayerState : public APlayerState
	, public IAbilitySystemInterface
{
	GENERATED_BODY()
	
public:
	ARaidPlayerState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	//IAbilitySystemInterface
	class UAbilitySystemComponent* GetAbilitySystemComponent() const override;

	class UBaseAttributeSet* GetBaseAttributeSet() const;

	UFUNCTION(BlueprintCallable, Category = "Raid|PlayerState")
	bool IsAlive() const;


protected:

	UPROPERTY()
	class URaidAbilitySystemComponent* AbilitySystemComponent;

	UPROPERTY()
	class UBaseAttributeSet* AttributeSetBase;

public:

	// AttributeSet�� ���� getter
	// �⺻������ ���� �� ��ȯ 

	UFUNCTION(BlueprintCallable, Category = "Raid|PlayerState|Attributes")
	float GetHealth() const;

	UFUNCTION(BlueprintCallable, Category = "Raid|PlayerState|Attributes")
	float GetMaxHealth() const;

	UFUNCTION(BlueprintCallable, Category = "Raid|PlayerState|Attributes")
	float GetHealthRegenRate() const;

	UFUNCTION(BlueprintCallable, Category = "Raid|PlayerState|Attributes")
	float GetMana() const;

	UFUNCTION(BlueprintCallable, Category = "Raid|PlayerState|Attributes")
	float GetMaxMana() const;

	UFUNCTION(BlueprintCallable, Category = "Raid|PlayerState|Attributes")
	float GetManaRegenRate() const;

	UFUNCTION(BlueprintCallable, Category = "Raid|PlayerState|Attributes")
	float GetArmor() const;

	UFUNCTION(BlueprintCallable, Category = "Raid|PlayerState|Attributes")
	float GetMoveSpeed() const;

	UFUNCTION(BlueprintCallable, Category = "Raid|PlayerState|Attributes")
	float GetAttackSpeed() const;

	UFUNCTION(BlueprintCallable, Category = "Raid|PlayerState|Attributes")
	int32 GetCharacterLevel() const;

protected:


	FGameplayTag DeadTag;

	FDelegateHandle HealthChangedDelegateHandle;
	FDelegateHandle MaxHealthChangedDelegateHandle;
	FDelegateHandle HealthRegenRateChangedDelegateHandle;
	FDelegateHandle ManaChangedDelegateHandle;
	FDelegateHandle MaxManaChangedDelegateHandle;
	FDelegateHandle ManaRegenRateChangedDelegateHandle;
	FDelegateHandle CharacterLevelChangedDelegateHandle;

	FDelegateHandle MoveSpeedChangedDelegateHandle;
	FDelegateHandle AttackSpeedChangedDelegateHandle;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Attribute changed callbacks
	virtual void HealthChanged(const FOnAttributeChangeData& Data);
	virtual void MaxHealthChanged(const FOnAttributeChangeData& Data);
	virtual void HealthRegenRateChanged(const FOnAttributeChangeData& Data);
	virtual void ManaChanged(const FOnAttributeChangeData& Data);
	virtual void MaxManaChanged(const FOnAttributeChangeData& Data);
	virtual void ManaRegenRateChanged(const FOnAttributeChangeData& Data);
	virtual void MoveSpeedChanged(const FOnAttributeChangeData& Data);
	virtual void AttackSpeedChanged(const FOnAttributeChangeData& Data);
	virtual void CharacterLevelChanged(const FOnAttributeChangeData& Data);

	// Tag change callbacks
	virtual void StunTagChanged(const FGameplayTag CallbackTag, int32 NewCount);
};
