// Fill out your copyright notice in the Description page of Project Settings.


// ��Ʈ����Ʈ�� ��Ʈ����Ʈ ��Ʈ(Attribute Sets) �ȿ�
//  FGameplayAttribute Ÿ�� UProperties�� ����

// ��Ʈ����Ʈ�� ��Ʈ����Ʈ ��Ʈ�� ����Ƽ�� �ڵ�� �����ؾ� �ϸ�, �������Ʈ�δ� ���� �Ұ�.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AbilitySystemComponent.h"
//#include "RaidGame/Character/RaidAbilitySystemComponent.h"
#include "BaseAttributeSet.generated.h"


  /**
   *
   * This macro defines a set of helper functions for accessing and initializing attributes.
   *
   * The following example of the macro:
   *		ATTRIBUTE_ACCESSORS(UHealthSet, Health)
   * will create the following functions:
   *		static FGameplayAttribute GetHealthAttribute();
   *		float GetHealth() const;
   *		void SetHealth(float NewVal);
   *		void InitHealth(float NewVal);
   */
   // �ش� ��ũ�δ� �����÷��̾����Ƽ�ý���(GAS)���� �����ϰ� ����� ���ֵ��� �����ϴ� Getter, Setter ������
#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)





/**
 * Base attribute set class for the project.
 */
UCLASS()
class RAIDGAME_API UBaseAttributeSet : public UAttributeSet
{
	GENERATED_BODY()
	// GENERATED_BODY() ��ũ�� : �𸮾������� ������Ʈ��ó ����
	// UCLASS()��� ��ũ�θ� ���� �𸮾� �������� Ŭ������ ����

	// ��Ʈ����Ʈ ��Ʈ�� �����ߴٸ�, �����Ƽ �ý��� ������Ʈ�� ����ؾ� �մϴ�. 
	// �̸� ���ؼ��� ��Ʈ����Ʈ ��Ʈ�� �����Ƽ �ý��� ������Ʈ�� ���� ������ ���������Ʈ�� �߰��ϰų�, 
	// �����Ƽ �ý��� ������Ʈ�� GetOrCreateAttributeSubobject �Լ��� �����ؾ� �մϴ�.
	
public:
	UBaseAttributeSet();

	//AttributeSet overrides	
	virtual void PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue) override;
	virtual void PostAttributeChange(const FGameplayAttribute& Attribute, float OldValue, float NewValue) override;

	// GameplayEffect override
	virtual bool PreGameplayEffectExecute(FGameplayEffectModCallbackData& Data);
	virtual void PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data);

	//�ִ� ������ ��������
	void AdjustAttributeForMaxChange(FGameplayAttributeData& AffectedAttribute, const FGameplayAttributeData& MaxAttribute, float NewMaxValue, const FGameplayAttribute& AffectedAttributeProperty);

	// ���߿� ü��, ����, �������� �� Ŭ������ ��ӹް�
	// �ڽ� Ŭ������ ���� ����

	/** ü�� : ��� ������ ����� �� �ִ� ����� ���� ����*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attributes|Health", ReplicatedUsing = OnRep_Health)
	FGameplayAttributeData Health;
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, Health)

		/**�ִ� ü�� : ü���� �þ �� �ִ� �ִ� ���� */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attributes|Health", ReplicatedUsing = OnRep_MaxHealth)
	FGameplayAttributeData MaxHealth;
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, MaxHealth)

		// �ڵ� ȸ��
	UPROPERTY(BlueprintReadOnly, Category = "Attributes|Health", ReplicatedUsing = OnRep_HealthRegenRate)
	FGameplayAttributeData HealthRegenRate;
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, HealthRegenRate)



		/** ���� : ��ų�� ����� �� ���� ������ �Ҹ��� �� ���� */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attributes|Mana", ReplicatedUsing = OnRep_Mana)
	FGameplayAttributeData Mana;
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, Mana)

		/** �ִ� ���� */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attributes|Mana", ReplicatedUsing = OnRep_MaxMana)
	FGameplayAttributeData MaxMana;
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, MaxMana)


		// �ڵ� ȸ��
	UPROPERTY(BlueprintReadOnly, Category = "Attributes|Mana", ReplicatedUsing = OnRep_ManaRegenRate)
	FGameplayAttributeData ManaRegenRate;
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, ManaRegenRate)

		/** ������ : �־����� �������� ���� ü���� ����, ���������� �־����� ������.*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attributes|Damage") //, ReplicatedUsing = OnRep_Damage
	FGameplayAttributeData Damage;
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, Damage)

		// MoveSpeed affects how fast characters can move.
	UPROPERTY(BlueprintReadOnly, Category = "Attributes|MoveSpeed", ReplicatedUsing = OnRep_MoveSpeed)
	FGameplayAttributeData MoveSpeed;
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, MoveSpeed)


		// AttackSpeed affects how fast characters can move.
	UPROPERTY(BlueprintReadOnly, Category = "Attributes|AttackSpeed", ReplicatedUsing = OnRep_AttackSpeed)
	FGameplayAttributeData AttackSpeed;
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, AttackSpeed)

		//���� (���巹���� ó���ϸ�ɵ�)
	UPROPERTY(BlueprintReadOnly, Category = "Attributes|Character Level", ReplicatedUsing = OnRep_CharacterLevel)
	FGameplayAttributeData CharacterLevel;
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, CharacterLevel)


		// ������ �氨
	UPROPERTY(BlueprintReadOnly, Category = "Attributes|Armor", ReplicatedUsing = OnRep_Armor)
	FGameplayAttributeData Armor;
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, Armor)





protected:
	/** ü�� ������ ���� ��Ʈ��ũ ����*/
	UFUNCTION()
	virtual void OnRep_Health(const FGameplayAttributeData& OldHealth);

	/** �ִ� ü�� ������ ���� ��Ʈ��ũ ���� */
	UFUNCTION()
	virtual void OnRep_MaxHealth(const FGameplayAttributeData& OldMaxHealth);

	UFUNCTION()
	virtual void OnRep_HealthRegenRate(const FGameplayAttributeData& OldHealthRegenRate);

	/** ���� ������ ���� ��Ʈ��ũ ���� */
	UFUNCTION()
	virtual void OnRep_Mana(const FGameplayAttributeData& OldMana);

	/** �ִ� ���� ������ ���� ��Ʈ��ũ ����*/
	UFUNCTION()
	virtual void OnRep_MaxMana(const FGameplayAttributeData& OldMaxMana);

	UFUNCTION()
	virtual void OnRep_ManaRegenRate(const FGameplayAttributeData& OldManaRegenRate);

	/**�������� ���� ��Ʈ��ũ ����*/
	//UFUNCTION()
	//virtual void OnRep_Damage(const FGameplayAttributeData& OldValue);

	UFUNCTION()
	virtual void OnRep_Armor(const FGameplayAttributeData& OldArmor);

	UFUNCTION()
	virtual void OnRep_MoveSpeed(const FGameplayAttributeData& OldMoveSpeed);

	UFUNCTION()
	virtual void OnRep_CharacterLevel(const FGameplayAttributeData& OldCharacterLevel);


	UFUNCTION()
	virtual void OnRep_AttackSpeed(const FGameplayAttributeData& OldAttackSpeed);
	/**
	*Returns the properties used for network replication, this needs to be overridden by all actor classes with native replicated properties
	*��Ʈ��ũ ������ ���Ǵ� �Ӽ��� ��ȯ, ���� �Ӽ��� �ִ� ��� ���� Ŭ������ ���� �����ǵǾ����
	*/
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;



	//URaidAbilitySystemComponent* GetRaidAbilitySystemComponent() const;

};
