// Fill out your copyright notice in the Description page of Project Settings.


#include "RaidGame/Character/Abilities/AbilityTasks/AT_WaitReceiveDamage.h"
#include "RaidGame/Character/RaidAbilitySystemComponent.h"


UAT_WaitReceiveDamage::UAT_WaitReceiveDamage(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	TriggerOnce = false;
}

UAT_WaitReceiveDamage* UAT_WaitReceiveDamage::WaitReceiveDamage(UGameplayAbility* OwningAbility, bool InTriggerOnce)
{
	UAT_WaitReceiveDamage* MyObj = NewAbilityTask<UAT_WaitReceiveDamage>(OwningAbility);
	MyObj->TriggerOnce = InTriggerOnce;
	return MyObj;
}

void UAT_WaitReceiveDamage::Activate()
{
	URaidAbilitySystemComponent* ASC = Cast<URaidAbilitySystemComponent>(AbilitySystemComponent);

	if (ASC)
	{
		ASC->ReceivedDamage.AddDynamic(this, &UAT_WaitReceiveDamage::OnDamageReceived);
	}
}

void UAT_WaitReceiveDamage::OnDestroy(bool AbilityIsEnding)
{
	URaidAbilitySystemComponent* ASC = Cast<URaidAbilitySystemComponent>(AbilitySystemComponent);

	if (ASC)
	{
		ASC->ReceivedDamage.RemoveDynamic(this, &UAT_WaitReceiveDamage::OnDamageReceived);
	}

	Super::OnDestroy(AbilityIsEnding);
}

void UAT_WaitReceiveDamage::OnDamageReceived(URaidAbilitySystemComponent* SourceASC, float UnmitigatedDamage, float MitigatedDamage)
{
	if (ShouldBroadcastAbilityTaskDelegates())
	{
		OnDamage.Broadcast(SourceASC, UnmitigatedDamage, MitigatedDamage);
	}

	if (TriggerOnce)
	{
		EndTask();
	}
}