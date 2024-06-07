// Fill out your copyright notice in the Description page of Project Settings.


#include "RaidTags.h"

#include "Engine/EngineTypes.h"
#include "GameplayTagsManager.h"

namespace RaidGameTags
{
	//어빌리티 실패
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Ability_ActivateFail_IsDead, "Ability.ActivateFail.IsDead", "Ability 동작 실패 : 해당 행동의 소유자가 죽었습니다.");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Ability_ActivateFail_Cooldown, "Ability.ActivateFail.Cooldown", "Ability 동작 실패 : 해당 동작이 쿨타임 상태입니다.");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Ability_ActivateFail_Cost, "Ability.ActivateFail.Cost", "Ability 동작 실패 : because it did not pass the cost checks.");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Ability_ActivateFail_TagsBlocked, "Ability.ActivateFail.TagsBlocked", "Ability 동작 실패 : tags are blocking it.");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Ability_ActivateFail_TagsMissing, "Ability.ActivateFail.TagsMissing", "Ability 동작 실패 : 태그가 존재하지 않습니다.");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Ability_ActivateFail_Networking, "Ability.ActivateFail.Networking", "Ability 동작 실패 : it did not pass the network checks.");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Ability_ActivateFail_ActivationGroup, "Ability.ActivateFail.ActivationGroup", "Ability 동작 실패 : its activation group.");

	//죽었기 때문에 해당 동작을 취소할 수 없습니다.
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Ability_Behavior_SurvivesDeath, "Ability.Behavior.SurvivesDeath", "ability 취소 불가 : 죽었습니다.");

	// 움직임(move) 
	//UE_DEFINE_GAMEPLAY_TAG_COMMENT(InputTag_Move, "InputTag.Move", "입력 : 움직임");

	//초기 상태
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(InitState_Spawned, "InitState.Spawned", "1: Actor/component has initially spawned and can be extended");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(InitState_DataAvailable, "InitState.DataAvailable", "2: All required data has been loaded/replicated and is ready for initialization");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(InitState_DataInitialized, "InitState.DataInitialized", "3: The available data has been initialized for this actor/component, but it is not ready for full gameplay");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(InitState_GameplayReady, "InitState.GameplayReady", "4: The actor/component is fully ready for active gameplay");

	//네트워크 이벤트
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(GameplayEvent_Death, "GameplayEvent.Death", "Event : 사망하였습니다. 이 이벤트는 서버에서만 호출됩니다.");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(GameplayEvent_Reset, "GameplayEvent.Reset", "Event : 초기화가 실행되었습니다.");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(GameplayEvent_RequestReset, "GameplayEvent.RequestReset", "Event to request a player's pawn to be instantly replaced with a new one at a valid spawn location.");

	//호출자에 의해 set
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_Damage, "SetByCaller.Damage", "SetByCaller tag used by damage gameplay effects."); 	//공걱
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_Heal, "SetByCaller.Heal", "SetByCaller tag used by healing gameplay effects."); 	//회복

	//GodMode
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Cheat_GodMode, "Cheat.GodMode", "GodMode cheat is active on the owner.");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Cheat_UnlimitedHealth, "Cheat.UnlimitedHealth", "UnlimitedHealth cheat is active on the owner.");

	//현재 상태
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Status_Crouching, "Status.Crouching", "Target is crouching.");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Status_Death, "Status.Death", "Target has the death status.");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Status_Death_Dying, "Status.Death.Dying", "Target has begun the death process.");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Status_Death_Dead, "Status.Death.Dead", "Target has finished the death process.");

	// These are mapped to the movement modes inside GetMovementModeTagMap()
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Movement_Mode_Walking, "Movement.Mode.Walking", "Default Character movement tag");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Movement_Mode_NavWalking, "Movement.Mode.NavWalking", "Default Character movement tag");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Movement_Mode_Falling, "Movement.Mode.Falling", "Default Character movement tag");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Movement_Mode_Swimming, "Movement.Mode.Swimming", "Default Character movement tag");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Movement_Mode_Flying, "Movement.Mode.Flying", "Default Character movement tag");

	// When extending Lyra, you can create your own movement modes but you need to update GetCustomMovementModeTagMap()
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Movement_Mode_Custom, "Movement.Mode.Custom", "This is invalid and should be replaced with custom tags.  See LyraGameplayTags::CustomMovementModeTagMap.");



	//바인딩에 따른 어빌리티 
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Ability_Activate_BasicAttack, "Ability.Activate.BasicAttack", "Press A : Activate Basic Attack");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Ability_Activate_Sprint, "Ability.Activate.Sprint", "Press Space : Activate Moving by Sprint Dash");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Ability_Activate_Ability1, "Ability.Activate.Ability1", "Press Q : Activate Ability1 Skill");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Ability_Activate_Ability2, "Ability.Activate.Ability2", "Press W : Activate Ability2 Skill");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Ability_Activate_Ability3, "Ability.Activate.Ability3", "Press E : Activate Ability3 Skill");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Ability_Activate_Ability4, "Ability.Activate.Ability4", "Press R : Activate Ultimate Ability Skill");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Ability_Activate_Ability5, "Ability.Activate.Ability5", "Add Ability : Activate Ability5");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Ability_Activate_Ability6, "Ability.Activate.Ability6", "Add Ability : Activate Ability6");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Ability_Activate_Ability7, "Ability.Activate.Ability7", "Add Ability : Activate Ability7");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Ability_Activate_Ability8, "Ability.Activate.Ability8", "Add Ability : Activate Ability8");

	//바인딩된 어빌리티 쿨타임

	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Ability_Cooldown_Sprint, "Ability.Cooldown.Sprint", "Press Space : Cooldown Sprint Dash");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Ability_Cooldown_Ability1, "Ability.Cooldown.Ability1", "Cooldown Ability1(Q) Skill");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Ability_Cooldown_Ability2, "Ability.Cooldown.Ability2", "Cooldown Ability2(W) Skill");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Ability_Cooldown_Ability3, "Ability.Cooldown.Ability3", "Cooldown Ability3(E) Skill");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Ability_Cooldown_Ability4, "Ability.Cooldown.Ability4", "Cooldown Ultimate Ability(R) Skill");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Ability_Cooldown_Ability5, "Ability.Cooldown.Ability5", "Cooldown Ability5");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Ability_Cooldown_Ability6, "Ability.Cooldown.Ability6", "Cooldown Ability6");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Ability_Cooldown_Ability7, "Ability.Cooldown.Ability7", "Cooldown Ability7");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Ability_Cooldown_Ability8, "Ability.Cooldown.Ability8", "Cooldown Ability8");


	//버프에 따른 어빌리티

	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Ability_Buff_Buff1_Activate, "Ability.Buff.Buff1.Activate", " Buff1 Activate");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Ability_Buff_Buff1_Finish, "Ability.Buff.Buff1.Finish", "Buff1 Finish");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Ability_Buff_Buff2_Activate, "Ability.Buff.Buff2.Activate", " Buff2 Activate");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Ability_Buff_Buff2_Finish, "Ability.Buff.Buff2.Finish", "Buff2 Finish");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Ability_Buff_Buff3_Activate, "Ability.Buff.Buff3.Activate", " Buff3 Activate");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Ability_Buff_Buff3_Finish, "Ability.Buff.Buff3.Finish", "Buff3 Finish");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Ability_Buff_Buff4_Activate, "Ability.Buff.Buff4.Activate", " Buff4 Activate");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Ability_Buff_Buff4_Finish, "Ability.Buff.Buff4.Finish", "Buff4 Finish");

	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Buff_IncreaseMoveSpeed_Activate, "Buff.IncreaseMoveSpeed.Activate", " MoveSpeed buff start");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Buff_IncreaseMoveSpeed_Finish, "Buff.IncreaseMoveSpeed.Finish", "MoveSpeed buff ended");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Buff_IncreaseAttackSpeed_Activate, "Buff.IncreaseAttackSpeed.Activate", " Attack Speed buff start");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Buff_IncreaseAttackSpeed_Finish, "Buff.IncreaseAttackSpeed.Finish", "Attack Speed buff ended");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Buff_IncreaseDamage_Activate, "Buff.IncreaseDamage.Activate", " Enhanced damage buff start");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Buff_IncreaseDamage_Finish, "Buff.IncreaseDamage.Finish", "Enhanced damage buff ended");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Buff_IncreaseArmor_Activate, "Buff.IncreaseArmor.Activate", " Enhanced armor buff start");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Buff_IncreaseArmor_Finish, "Buff.IncreaseArmor.Finish", "Enhanced armor buff ended");

	//디버프에 따른 어빌리티

	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Debuff_DecreaseMoveSpeed_Activate, "Debuff.DecreaseMoveSpeed.Activate", " MoveSpeed debuff start");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Debuff_DecreaseMoveSpeed_Finish, "Debuff.DecreaseMoveSpeed.Finish", "MoveSpeed debuff ended");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Debuff_IncreaseAttackSpeed_Activate, "Debuff.DecreaseAttackSpeed.Activate", " Attack Speed debuff start");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Debuff_IncreaseAttackSpeed_Finish, "Debuff.DecreaseAttackSpeed.Finish", "Attack Speed debuff ended");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Debuff_IncreaseDamage_Activate, "Debuff.DecreaseDamage.Activate", "damage debuff start");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Debuff_IncreaseDamage_Finish, "Debuff.DecreaseDamage.Finish", "damage debuff ended");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Debuff_IncreaseArmor_Activate, "Debuff.DecreaseArmor.Activate", "armor debuff start");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Debuff_IncreaseArmor_Finish, "Debuff.DecreaseArmor.Finish", "armor debuff ended");

	// Unreal Movement Modes
	const TMap<uint8, FGameplayTag> MovementModeTagMap =
	{
		{ MOVE_Walking, Movement_Mode_Walking },
		{ MOVE_NavWalking, Movement_Mode_NavWalking },
		{ MOVE_Falling, Movement_Mode_Falling },
		{ MOVE_Swimming, Movement_Mode_Swimming },
		{ MOVE_Flying, Movement_Mode_Flying },
		{ MOVE_Custom, Movement_Mode_Custom }
	};

	// Custom Movement Modes
	const TMap<uint8, FGameplayTag> CustomMovementModeTagMap =
	{
		// Fill these in with your custom modes
	};

	FGameplayTag FindTagByString(const FString& TagString, bool bMatchPartialString)
	{
		const UGameplayTagsManager& Manager = UGameplayTagsManager::Get();
		FGameplayTag Tag = Manager.RequestGameplayTag(FName(*TagString), false);

		if (!Tag.IsValid() && bMatchPartialString)
		{
			FGameplayTagContainer AllTags;
			Manager.RequestAllGameplayTags(AllTags, true);

			for (const FGameplayTag& TestTag : AllTags)
			{
				if (TestTag.ToString().Contains(TagString))
				{
					//UE_LOG(LogLyra, Display, TEXT("Could not find exact match for tag [%s] but found partial match on tag [%s]."), *TagString, *TestTag.ToString());
					Tag = TestTag;
					break;
				}
			}
		}

		return Tag;
	}
}