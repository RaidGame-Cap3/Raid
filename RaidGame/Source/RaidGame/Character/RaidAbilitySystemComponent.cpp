// Fill out your copyright notice in the Description page of Project Settings.


#include "RaidGame/Character/RaidAbilitySystemComponent.h"


// Used to inline generated cpp files from UObject headers
//#include UE_INLINE_GENERATED_CPP_BY_NAME(RaidAbilitySystemComponent)

//UE_DEFINE_GAMEPLAY_TAG(TAG_Gameplay_AbilityInputBlocked, "Gameplay.AbilityInputBlocked");


	//https://dev.epicgames.com/documentation/ko-kr/unreal-engine/asserts-in-unreal-engine?application_version=5.3
	//check : ���� �������� ���� �� : ���� �Ŀ��� ���� �ȵ�
//check(ActorInfo);
//check(InOwnerActor);


void URaidAbilitySystemComponent::ReceiveDamage(URaidAbilitySystemComponent* SourceASC, float UnmitigatedDamage, float MitigatedDamage)
{
	ReceivedDamage.Broadcast(SourceASC, UnmitigatedDamage, MitigatedDamage);
}