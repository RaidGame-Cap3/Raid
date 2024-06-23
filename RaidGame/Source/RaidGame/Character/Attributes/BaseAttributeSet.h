// Fill out your copyright notice in the Description page of Project Settings.


// 어트리뷰트는 어트리뷰트 세트(Attribute Sets) 안에
//  FGameplayAttribute 타입 UProperties로 선언

// 어트리뷰트와 어트리뷰트 세트는 네이티브 코드로 생성해야 하며, 블루프린트로는 생성 불가.

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
   // 해당 매크로는 게임플레이어빌리티시스템(GAS)에서 용이하게 사용할 수있도록 제공하는 Getter, Setter 생성기
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
	// GENERATED_BODY() 매크로 : 언리얼엔진에서 인프라스트럭처 역할
	// UCLASS()라는 매크로를 통해 언리얼 엔진에서 클래스를 인지

	// 어트리뷰트 세트를 생성했다면, 어빌리티 시스템 컴포넌트로 등록해야 합니다. 
	// 이를 위해서는 어트리뷰트 세트를 어빌리티 시스템 컴포넌트의 소유 액터의 서브오브젝트로 추가하거나, 
	// 어빌리티 시스템 컴포넌트의 GetOrCreateAttributeSubobject 함수에 전달해야 합니다.
	
public:
	UBaseAttributeSet();

	//AttributeSet overrides	
	virtual void PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue) override;
	virtual void PostAttributeChange(const FGameplayAttribute& Attribute, float OldValue, float NewValue) override;

	// GameplayEffect override
	virtual bool PreGameplayEffectExecute(FGameplayEffectModCallbackData& Data);
	virtual void PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data);

	//최대 값으로 변경해줌
	void AdjustAttributeForMaxChange(FGameplayAttributeData& AffectedAttribute, const FGameplayAttributeData& MaxAttribute, float NewMaxValue, const FGameplayAttribute& AffectedAttributeProperty);

	// 나중에 체력, 마나, 데미지로 이 클래스를 상속받고
	// 자식 클래스로 분할 예정

	/** 체력 : 사망 전까지 흡수할 수 있는 대미지 양을 측정*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attributes|Health", ReplicatedUsing = OnRep_Health)
	FGameplayAttributeData Health;
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, Health)

		/**최대 체력 : 체력이 늘어날 수 있는 최대 범위 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attributes|Health", ReplicatedUsing = OnRep_MaxHealth)
	FGameplayAttributeData MaxHealth;
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, MaxHealth)

		// 자동 회복
	UPROPERTY(BlueprintReadOnly, Category = "Attributes|Health", ReplicatedUsing = OnRep_HealthRegenRate)
	FGameplayAttributeData HealthRegenRate;
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, HealthRegenRate)



		/** 마나 : 스킬을 사용할 수 없을 때까지 소모할 수 있음 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attributes|Mana", ReplicatedUsing = OnRep_Mana)
	FGameplayAttributeData Mana;
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, Mana)

		/** 최대 마나 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attributes|Mana", ReplicatedUsing = OnRep_MaxMana)
	FGameplayAttributeData MaxMana;
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, MaxMana)


		// 자동 회복
	UPROPERTY(BlueprintReadOnly, Category = "Attributes|Mana", ReplicatedUsing = OnRep_ManaRegenRate)
	FGameplayAttributeData ManaRegenRate;
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, ManaRegenRate)

		/** 데미지 : 주어지는 데미지에 따라서 체력이 감소, 최종적으로 주어지는 데미지.*/
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

		//레벨 (입장레벨로 처리하면될듯)
	UPROPERTY(BlueprintReadOnly, Category = "Attributes|Character Level", ReplicatedUsing = OnRep_CharacterLevel)
	FGameplayAttributeData CharacterLevel;
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, CharacterLevel)


		// 데미지 경감
	UPROPERTY(BlueprintReadOnly, Category = "Attributes|Armor", ReplicatedUsing = OnRep_Armor)
	FGameplayAttributeData Armor;
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, Armor)





protected:
	/** 체력 설정에 관한 네트워크 로직*/
	UFUNCTION()
	virtual void OnRep_Health(const FGameplayAttributeData& OldHealth);

	/** 최대 체력 설정에 관한 네트워크 로직 */
	UFUNCTION()
	virtual void OnRep_MaxHealth(const FGameplayAttributeData& OldMaxHealth);

	UFUNCTION()
	virtual void OnRep_HealthRegenRate(const FGameplayAttributeData& OldHealthRegenRate);

	/** 마나 설정에 관한 네트워크 로직 */
	UFUNCTION()
	virtual void OnRep_Mana(const FGameplayAttributeData& OldMana);

	/** 최대 마나 설정에 관한 네트워크 로직*/
	UFUNCTION()
	virtual void OnRep_MaxMana(const FGameplayAttributeData& OldMaxMana);

	UFUNCTION()
	virtual void OnRep_ManaRegenRate(const FGameplayAttributeData& OldManaRegenRate);

	/**데미지에 관한 네트워크 로직*/
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
	*네트워크 복제에 사용되는 속성을 반환, 복제 속성이 있는 모든 액터 클래스에 의해 재정의되어야함
	*/
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;



	//URaidAbilitySystemComponent* GetRaidAbilitySystemComponent() const;

};
