// Fill out your copyright notice in the Description page of Project Settings.
//
// 게임플레이 어빌리티 시스템 컴포넌트 (ASC) 
// 시스템과의 모든 상호작용을 처리하는 액터 컴포넌트 (ActorComponent)
// UAbilitySystemComponent 갖고 있는 액터끼리만 통신
// 
// OwnerActor : ASC가 연결된 액터 (ex : PlayerState)
// AvatarActor : ASC 연결된 액터의 물리적 표현 (ex 영웅
//  ex) 오너 액터는 플레이어, 아바타 액터는 플레이어가 운영하는 영웅
// 액터 스폰 자주할 경우 ASC의 위치는 플레이어 상태(Player State)
// ASC가 플레이어 상태에 있을 경우 넷 업데이트 빈도 늘려야 (기본값 낮음)
// 
// 오너 액터와 아바타 액터가 다르면 IAbilitySystemInterface 구현필요
// 인터페이스에 UAbilitySystemComponent* GetAbilitySystemComponent() const 존재
// ASC는 이 인터페이스 기능을 찾음으로써 시스템 내부에서 서로 상호 작용
// 
// 즉 서버와 클라이언트 모두에서 OwnerActor와 AvatarActor로 초기화해야 함
// 
// 
//  The ASC holds its current active GameplayEffects in FActiveGameplayEffectsContainer ActiveGameplayEffects
//  
//  부여된(granted) 능력 보유 위치 : FGameplayAbilitySpecContainer ActivatableAbilities
// ActivableAbilities.Items 반복시 ABLITYLIST_SCOPE_LOCK() 루프 위에 추가
// 루프 내에서 ABLITYScopeLOCKCount 증가 시키고 다음 범위를 벗어나면 감소
// 루프 내에서 어빌리티 제거 금지
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

//생성된 태그 변수를 다른 모듈이나 코드에서 사용할 수 있도록 UE_DEFINE_GAMEPLAY_TAG와 함께 NativeGameplayTags를 선언
//RAID_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Gameplay_AbilityInputBlocked);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FReceivedDamageDelegate, URaidAbilitySystemComponent*, SourceASC, float, UnmitigatedDamage, float, MitigatedDamage);


/**
 * 
 * * 게임어빌리티시스템 컴포넌트(ASC)
 * 
 * 해당 컴포넌트를 가진 내부 시스템끼리의 통신
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
