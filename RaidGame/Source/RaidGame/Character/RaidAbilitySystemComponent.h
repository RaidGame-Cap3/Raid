// Fill out your copyright notice in the Description page of Project Settings.
//
// �����÷��� �����Ƽ �ý��� ������Ʈ (ASC) 
// �ý��۰��� ��� ��ȣ�ۿ��� ó���ϴ� ���� ������Ʈ (ActorComponent)
// UAbilitySystemComponent ���� �ִ� ���ͳ����� ���
// 
// OwnerActor : ASC�� ����� ���� (ex : PlayerState)
// AvatarActor : ASC ����� ������ ������ ǥ�� (ex ����
//  ex) ���� ���ʹ� �÷��̾�, �ƹ�Ÿ ���ʹ� �÷��̾ ��ϴ� ����
// ���� ���� ������ ��� ASC�� ��ġ�� �÷��̾� ����(Player State)
// ASC�� �÷��̾� ���¿� ���� ��� �� ������Ʈ �� �÷��� (�⺻�� ����)
// 
// ���� ���Ϳ� �ƹ�Ÿ ���Ͱ� �ٸ��� IAbilitySystemInterface �����ʿ�
// �������̽��� UAbilitySystemComponent* GetAbilitySystemComponent() const ����
// ASC�� �� �������̽� ����� ã�����ν� �ý��� ���ο��� ���� ��ȣ �ۿ�
// 
// �� ������ Ŭ���̾�Ʈ ��ο��� OwnerActor�� AvatarActor�� �ʱ�ȭ�ؾ� ��
// 
// 
//  The ASC holds its current active GameplayEffects in FActiveGameplayEffectsContainer ActiveGameplayEffects
//  
//  �ο���(granted) �ɷ� ���� ��ġ : FGameplayAbilitySpecContainer ActivatableAbilities
// ActivableAbilities.Items �ݺ��� ABLITYLIST_SCOPE_LOCK() ���� ���� �߰�
// ���� ������ ABLITYScopeLOCKCount ���� ��Ű�� ���� ������ ����� ����
// ���� ������ �����Ƽ ���� ����
// 
// 
// 
// 
//https://dev.epicgames.com/documentation/en-us/unreal-engine/API/Plugins/GameplayAbilities/UAbilitySystemComponent?application_version=5.4

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
//#include "NativeGameplayTags.h"
#include "RaidAbilitySystemComponent.generated.h"

//������ �±� ������ �ٸ� ����̳� �ڵ忡�� ����� �� �ֵ��� UE_DEFINE_GAMEPLAY_TAG�� �Բ� NativeGameplayTags�� ����
//RAID_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Gameplay_AbilityInputBlocked);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FReceivedDamageDelegate, URaidAbilitySystemComponent*, SourceASC, float, UnmitigatedDamage, float, MitigatedDamage);


/**
 * 
 * * ���Ӿ����Ƽ�ý��� ������Ʈ(ASC)
 * 
 * �ش� ������Ʈ�� ���� ���� �ý��۳����� ���
 */
UCLASS()
class RAIDGAME_API URaidAbilitySystemComponent : public UAbilitySystemComponent
{
	GENERATED_BODY()


public:

	bool bCharacterAbilitiesGiven = false;
	bool bStartupEffectsApplied = false;

	FReceivedDamageDelegate ReceivedDamage;

	// Called from GDDamageExecCalculation. Broadcasts on ReceivedDamage whenever this ASC receives damage.
	virtual void ReceiveDamage(URaidAbilitySystemComponent* SourceASC, float UnmitigatedDamage, float MitigatedDamage);
	
};



/**
 * Delegate used to broadcast attribute events, some of these parameters may be null on clients:
 * @param EffectInstigator	The original instigating actor for this event
 * @param EffectCauser		The physical actor that caused the change
 * @param EffectSpec		The full effect spec for this change
 * @param EffectMagnitude	The raw magnitude, this is before clamping
 * @param OldValue			The value of the attribute before it was changed
 * @param NewValue			The value after it was changed
*/
//DECLARE_MULTICAST_DELEGATE_SixParams(FAttributeEvent, AActor* /*EffectInstigator*/, AActor* /*EffectCauser*/, const FGameplayEffectSpec* /*EffectSpec*/, float /*EffectMagnitude*/, float /*OldValue*/, float /*NewValue*/);
