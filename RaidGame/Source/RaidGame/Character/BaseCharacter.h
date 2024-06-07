// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"



//ĳ����
#include "GameFramework/Character.h"
#include "RaidGame/RaidGameCharacter.h"

//�����Ƽ �ý���
#include "AbilitySystemInterface.h"
#include "GameplayCueInterface.h"
#include "RaidAbilitySystemComponent.h"
#include "RaidGame/Character/Attributes/BaseAttributeSet.h"
//#include "GameplayTagAssetInterface.h"
#include "RaidGame/RaidGame.h"
//#include "RaidAbilityInput.h"

#include "BaseCharacter.generated.h"



//��� ó��
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



	/// �±�
/*
virtual void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const override;
virtual bool HasMatchingGameplayTag(FGameplayTag TagToCheck) const override;
virtual bool HasAllMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override;
virtual bool HasAnyMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override;
*/

	// �÷��̾� ������Ʈ
	// ���� ���� ����
	// ĳ��Ʈ ���� ����
	//UFUNCTION(BlueprintCallable, Category = "Raid|Character")
	//ARaidPlayerState* GetRaidPlayerState() const;

	/** �����Ƽ �ý��� ������Ʈ�� ��ȯ�մϴ�. */
	virtual class UAbilitySystemComponent* GetAbilitySystemComponent() const override;

	//UFUNCTION(BlueprintCallable, Category = "Raid|Character")
	//URaidAbilitySystemComponent* GetRaidAbilitySystemComponent() const;

	/** �����Ƽ �ý��� ������Ʈ �����÷��� ��Ʈ����Ʈ �� �����÷��� �����Ƽ�� ����Ϸ��� �ʿ� */
	//UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "Abilities")
	//UAbilitySystemComponent* AbilitySystemComponent;

		// �����Ƽ �ο� (������Ʈ

	// AbilityID�� ���� �����Ƽ ���� ����ġ 
	UFUNCTION(BlueprintCallable, Category = "Raid|Chracter")
	virtual int32 GetAbilityLevel(RaidAbilityInputID AbilityID) const;

	UFUNCTION(BlueprintCallable, Category = "Raid|Chracter")
	virtual bool IsAlive() const;

	virtual void RemoveAbilities();


	// ��� ó�� 
	// ��� ĳ���� ���� �� ����

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

	// �����÷��� �±�
// ���� �±� Ŭ���� ���� ����
	FGameplayTag DeadTag;
	FGameplayTag EffectRemoveOnDeathTag;

	/**/
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Raid|Character")
	FText CharacterName;

	// �ִϸ��̼�
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Raid|Animation")
	UAnimMontage* DeathMontage;


	// Default abilities for this Character. These will be removed on Character death and regiven if Character respawns.
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Raid|Abilities")
	TArray<TSubclassOf<class URaidGameplayAbility>> CharacterAbilities;


	// Effect �����÷��� ����Ʈ
	//��� �Ǵ� ���� �ð� ���� �����÷��� ��Ʈ����Ʈ�� ����

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Raid|Abilities")
	TSubclassOf<class UGameplayEffect> DefaultAttributes;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Raid|Abilities")
	TArray<TSubclassOf<class UGameplayEffect>> StartupEffects;

	//�����Ƽ �߰�
	// Grant abilities on the Server. The Ability Specs will be replicated to the owning client.
	virtual void AddCharacterAbilities();

	//�����Ƽ �ʱ�ȭ
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


	// ü�� �� ���� 
	// ���� ü�� ���� ���� �̿��ϴ� ����� ���� ����
	/// ��Ʈ����Ʈ �����κ��� get

	UFUNCTION(BlueprintCallable, Category = "Raid|Chracter|Attributes")
	int32 GetCharacterLevel() const;

	// ���� ü�� �� ��ȯ
	UFUNCTION(BlueprintCallable, Category = " Raid|Chracter|Attributes")
	float GetHealth() const;

	// �ִ� ü�� �� ��ȯ
	UFUNCTION(BlueprintCallable, Category = "Raid|Chracter|Attributes")
	float GetMaxHealth() const;

	// ���� ���� �� ��ȯ
	UFUNCTION(BlueprintCallable, Category = "Raid|Chracter|Attributes")
	float GetMana() const;

	// �ִ� ���� �� ��ȯ
	UFUNCTION(BlueprintCallable, Category = "Raid|Chracter|Attributes")
	float GetMaxMana() const;

	UFUNCTION(BlueprintCallable, Category = "Raid|Chracter|Attributes")
	float GetMoveSpeed() const;

	// Gets the Base value of MoveSpeed
	UFUNCTION(BlueprintCallable, Category = "Raid|Chracter|Attributes")
	float GetMoveSpeedBaseValue() const;



	/// <summary>
	/// ����
	/// </summary>
	virtual void PreInitializeComponents() override;
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	virtual void Reset() override;
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	virtual void PreReplication(IRepChangedPropertyTracker& ChangedPropertyTracker) override;

};
