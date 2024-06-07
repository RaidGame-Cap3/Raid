// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"



//캐릭터
#include "GameFramework/Character.h"
#include "RaidGame/RaidGameCharacter.h"

//어빌리티 시스템
#include "AbilitySystemInterface.h"
#include "GameplayCueInterface.h"
#include "RaidAbilitySystemComponent.h"
#include "RaidGame/Character/Attributes/BaseAttributeSet.h"
//#include "GameplayTagAssetInterface.h"
#include "RaidGame/RaidGame.h"
//#include "RaidAbilityInput.h"

#include "BaseCharacter.generated.h"



//사망 처리
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDeathEvent, AActor*, OwningActor);
//DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FHealth_AttributeChanged, UHealthComponent*, HealthComponent, float, OldValue, float, NewValue, AActor*, Instigator);
//DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCharacterDiedDelegate, AraidCharacter*, Character);

UCLASS()
class RAIDGAME_API ABaseCharacter : public ARaidGameCharacter
	, public IAbilitySystemInterface
	, public IGameplayCueInterface
	//, public IGameplayTagAssetInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ABaseCharacter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());



	/// 태그
/*
virtual void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const override;
virtual bool HasMatchingGameplayTag(FGameplayTag TagToCheck) const override;
virtual bool HasAllMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override;
virtual bool HasAnyMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override;
*/

	// 플레이어 스테이트
	// 현재 오류 상태
	// 캐스트 관련 문제
	//UFUNCTION(BlueprintCallable, Category = "Raid|Character")
	//ARaidPlayerState* GetRaidPlayerState() const;

	/** 어빌리티 시스템 컴포넌트를 반환합니다. */
	virtual class UAbilitySystemComponent* GetAbilitySystemComponent() const override;

	//UFUNCTION(BlueprintCallable, Category = "Raid|Character")
	//URaidAbilitySystemComponent* GetRaidAbilitySystemComponent() const;

	/** 어빌리티 시스템 컴포넌트 게임플레이 어트리뷰트 및 게임플레이 어빌리티를 사용하려면 필요 */
	//UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "Abilities")
	//UAbilitySystemComponent* AbilitySystemComponent;

		// 어빌리티 부여 (컴포넌트

	// AbilityID로 개별 어빌리티 레벨 스위치 
	UFUNCTION(BlueprintCallable, Category = "Raid|Chracter")
	virtual int32 GetAbilityLevel(RaidAbilityInputID AbilityID) const;

	UFUNCTION(BlueprintCallable, Category = "Raid|Chracter")
	virtual bool IsAlive() const;

	virtual void RemoveAbilities();


	// 사망 처리 
	// 모든 캐릭은 죽을 수 있음

	UPROPERTY(BlueprintAssignable, Category = "Raid|Chracter")
	FDeathEvent OnCharacterDied;

	//UPROPERTY(BlueprintCallable, Category = "Raid|Chracter")
	//virtual bool IsAlive() const;

	virtual void Die();


	UFUNCTION(BlueprintCallable, Category = "Raid|Chracter")
	virtual void FinishDying();


protected:
	//UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "Abilities")
	TWeakObjectPtr<class URaidAbilitySystemComponent> AbilitySystemComponent;
	TWeakObjectPtr<class UBaseAttributeSet> AttributeSet;

	// 게임플레이 태그
// 후일 태그 클래스 만들 예정
	FGameplayTag DeadTag;
	FGameplayTag EffectRemoveOnDeathTag;

	/**/
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Raid|Character")
	FText CharacterName;

	// 애니메이션
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Raid|Animation")
	UAnimMontage* DeathMontage;


	// Default abilities for this Character. These will be removed on Character death and regiven if Character respawns.
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Raid|Abilities")
	TArray<TSubclassOf<class URaidGameplayAbility>> CharacterAbilities;


	// Effect 게임플레이 이펙트
	//즉시 또는 일정 시간 동안 게임플레이 어트리뷰트를 변경

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Raid|Abilities")
	TSubclassOf<class UGameplayEffect> DefaultAttributes;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Raid|Abilities")
	TArray<TSubclassOf<class UGameplayEffect>> StartupEffects;

	//어빌리티 추가
	// Grant abilities on the Server. The Ability Specs will be replicated to the owning client.
	virtual void AddCharacterAbilities();

	//어빌리티 초기화
	//virtual void InitializeAbilities();
	virtual void AddStartupEffects();

	// Initialize the Character's attributes. Must run on Server but we run it on Client too
// so that we don't have to wait. The Server's replication to the Client won't matter since
// the values should be the same.
	virtual void InitializeAttributes();

	virtual void SetHealth(float Health);

	virtual void SetMana(float Mana);



public:	



	// Called every frame
	//virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	//virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;


	// 체력 및 마나 
	// 추후 체력 마나 등을 이용하는 기능은 분할 예정
	/// 어트리뷰트 셋으로부터 get

	UFUNCTION(BlueprintCallable, Category = "Raid|Chracter|Attributes")
	int32 GetCharacterLevel() const;

	// 현재 체력 값 반환
	UFUNCTION(BlueprintCallable, Category = " Raid|Chracter|Attributes")
	float GetHealth() const;

	// 최대 체력 값 반환
	UFUNCTION(BlueprintCallable, Category = "Raid|Chracter|Attributes")
	float GetMaxHealth() const;

	// 현재 마나 값 반환
	UFUNCTION(BlueprintCallable, Category = "Raid|Chracter|Attributes")
	float GetMana() const;

	// 최대 마나 값 반환
	UFUNCTION(BlueprintCallable, Category = "Raid|Chracter|Attributes")
	float GetMaxMana() const;

	UFUNCTION(BlueprintCallable, Category = "Raid|Chracter|Attributes")
	float GetMoveSpeed() const;

	// Gets the Base value of MoveSpeed
	UFUNCTION(BlueprintCallable, Category = "Raid|Chracter|Attributes")
	float GetMoveSpeedBaseValue() const;



	/// <summary>
	/// 액터
	/// </summary>
	virtual void PreInitializeComponents() override;
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	virtual void Reset() override;
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	virtual void PreReplication(IRepChangedPropertyTracker& ChangedPropertyTracker) override;

};
