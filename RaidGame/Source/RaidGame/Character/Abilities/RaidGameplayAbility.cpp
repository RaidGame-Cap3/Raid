// Fill out your copyright notice in the Description page of Project Settings.


#include "RaidGame/Character/Abilities/RaidGameplayAbility.h"
#include "RaidGame/Character/RaidAbilitySystemComponent.h"
#include "GameplayTagContainer.h"


URaidGameplayAbility::URaidGameplayAbility(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	//게임플레이 어빌리티를 실행하면,(그 어빌리티 유형의 새 오브젝트를 스폰하여 어빌리티 진행 상황을 추적
	// Instanced per Actor: 액터별 인스턴스 - 이 어빌리티를 처음 실행하면 각 액터마다 어빌리티 인스턴스를 하나 스폰한 뒤 앞으로 실행할 때 재사용
	//https://dev.epicgames.com/documentation/ko-kr/unreal-engine/using-gameplay-abilities-in-unreal-engine?application_version=5.3
	InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;

	ReplicationPolicy = EGameplayAbilityReplicationPolicy::ReplicateNo;
	NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::LocalPredicted;
	NetSecurityPolicy = EGameplayAbilityNetSecurityPolicy::ClientOrServer;


	//해당 태그 활성화를 막는다. 
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
		// 플레이어 컨트롤러인지 폰(pawn)인지 확인
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


// 어빌리티 활성화 시도
void URaidGameplayAbility::OnAvatarSet(const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilitySpec& Spec)

{
	Super::OnAvatarSet(ActorInfo, Spec);

	if (ActivateAbilityOnGranted)
	{
		ActorInfo->AbilitySystemComponent->TryActivateAbility(Spec.Handle, false);
	}

}
