// Fill out your copyright notice in the Description page of Project Settings.


#include "RaidGame/Character/Abilities/RaidGameplayAbility.h"
#include "RaidGame/Character/RaidAbilitySystemComponent.h"
#include "GameplayTagContainer.h"


URaidGameplayAbility::URaidGameplayAbility(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	//�����÷��� �����Ƽ�� �����ϸ�,(�� �����Ƽ ������ �� ������Ʈ�� �����Ͽ� �����Ƽ ���� ��Ȳ�� ����
	// Instanced per Actor: ���ͺ� �ν��Ͻ� - �� �����Ƽ�� ó�� �����ϸ� �� ���͸��� �����Ƽ �ν��Ͻ��� �ϳ� ������ �� ������ ������ �� ����
	//https://dev.epicgames.com/documentation/ko-kr/unreal-engine/using-gameplay-abilities-in-unreal-engine?application_version=5.3
	InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;

	ReplicationPolicy = EGameplayAbilityReplicationPolicy::ReplicateNo;
	NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::LocalPredicted;
	NetSecurityPolicy = EGameplayAbilityNetSecurityPolicy::ClientOrServer;


	//�ش� �±� Ȱ��ȭ�� ���´�. 
	ActivationBlockedTags.AddTag(FGameplayTag::RequestGameplayTag(FName("State.Dead")));
	ActivationBlockedTags.AddTag(FGameplayTag::RequestGameplayTag(FName("State.Debuff.Stun")));

}


AController* URaidGameplayAbility::GetControllerFromActorInfo() const {
	if (CurrentActorInfo)
	{
		if (AController* PC = CurrentActorInfo->PlayerController.Get())
		{
			return PC;
		}

		// Look for a player controller or pawn in the owner chain.
		// �÷��̾� ��Ʈ�ѷ����� ��(pawn)���� Ȯ��
		AActor* TestActor = CurrentActorInfo->OwnerActor.Get();
		while (TestActor)
		{
			if (AController* C = Cast<AController>(TestActor))
			{
				return C;
			}

			if (APawn* Pawn = Cast<APawn>(TestActor))
			{
				return Pawn->GetController();
			}

			TestActor = TestActor->GetOwner();
		}
	}

	return nullptr;
}

URaidAbilitySystemComponent* URaidGameplayAbility::GetRaidAbilitySystemComponentFromActorInfo() const
{
	return (CurrentActorInfo ? Cast<URaidAbilitySystemComponent>(CurrentActorInfo->AbilitySystemComponent.Get()) : nullptr);
}

//AraidCharacter* URaidGameplayAbility::GetRaidCharacterFromActorInfo() const
//{
//	return (CurrentActorInfo ? Cast<AraidCharacter>(CurrentActorInfo->AvatarActor.Get()) : nullptr);
//}



void URaidGameplayAbility::TryActivateAbilityOnSpawn(const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilitySpec& Spec) const
{
	const bool bIsPredicting = (Spec.ActivationInfo.ActivationMode == EGameplayAbilityActivationMode::Predicting);

	// Try to activate if activation policy is on spawn.
	//if (ActorInfo && !Spec.IsActive() && !bIsPredicting && (ActivationPolicy == ELyraAbilityActivationPolicy::OnSpawn))
	//{
	UAbilitySystemComponent* ASC = ActorInfo->AbilitySystemComponent.Get();
	const AActor* AvatarActor = ActorInfo->AvatarActor.Get();

	// If avatar actor is torn off or about to die, don't try to activate until we get the new one.
	if (ASC && AvatarActor && !AvatarActor->GetTearOff() && (AvatarActor->GetLifeSpan() <= 0.0f))
	{
		const bool bIsLocalExecution = (NetExecutionPolicy == EGameplayAbilityNetExecutionPolicy::LocalPredicted) || (NetExecutionPolicy == EGameplayAbilityNetExecutionPolicy::LocalOnly);
		const bool bIsServerExecution = (NetExecutionPolicy == EGameplayAbilityNetExecutionPolicy::ServerOnly) || (NetExecutionPolicy == EGameplayAbilityNetExecutionPolicy::ServerInitiated);

		const bool bClientShouldActivate = ActorInfo->IsLocallyControlled() && bIsLocalExecution;
		const bool bServerShouldActivate = ActorInfo->IsNetAuthority() && bIsServerExecution;

		if (bClientShouldActivate || bServerShouldActivate)
		{
			ASC->TryActivateAbility(Spec.Handle);
		}
	}
	//}
}


// �����Ƽ Ȱ��ȭ �õ�
void URaidGameplayAbility::OnAvatarSet(const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilitySpec& Spec)

{
	Super::OnAvatarSet(ActorInfo, Spec);

	if (ActivateAbilityOnGranted)
	{
		ActorInfo->AbilitySystemComponent->TryActivateAbility(Spec.Handle, false);
	}

}
