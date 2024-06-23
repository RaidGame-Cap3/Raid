// Fill out your copyright notice in the Description page of Project Settings.
//  네트워킹을 위한 PlayerState
//
// 액터 스폰 자주할 게임플레이 어빌리티 시스템 컴포넌트(ASC)의 위치는 플레이어 상태(Player State)
// ASC가 플레이어 상태에 있을 경우 넷 업데이트 빈도 늘려야 (기본값 낮음)
// 
// 오너 액터와 아바타 액터가 다르면 IAbilitySystemInterface 구현필요
// 인터페이스에 UAbilitySystemComponent* GetAbilitySystemComponent() const 존재
// ASC는 이 인터페이스 기능을 찾음으로써 시스템 내부에서 서로 상호 작용
// 
// 
// 
// 컴포넌트 : OwnerActor의 생성자에서 구성되고 명시적으로 복제되어 표시
//  
// Create ability system component, and set it to be explicitly replicated
//AbilitySystemComponent = CreateDefaultSubobject<UGDAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
//AbilitySystemComponent->SetIsReplicated(true);
//...
// 
// 폰의 컨트롤러 설정(소유) 후 초기화
// 
// ASC가 폰에 존재하는 플레이어 제어 캐릭터의 경우,
// 일반적으로 폰의 OwnessBy() 기능에서 서버를 초기화하고 
// 플레이어 컨트롤러의 Acknowledge Possess() 기능에서 클라이언트를 초기화
// 
// 
// 
// ASC가 플레이어 상태에 있는 플레이어 제어 캐릭터의 경우, 
// 일반적으로 폰의 OwnessBy() 함수에서 서버를 초기화하고 
// 폰의 OnRep_PlayerState() 함수에서 클라이언트에서 초기화 
// 이는 플레이어 상태가 클라이언트에 존재하도록 보장
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

	// AttributeSet의 정보 getter
	// 기본적으로 현재 값 반환 

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
