// Copyright Big Woof Studios, LLC. All Rights Reserved.


#include "TangiGameplayTags.h"

namespace FTangiGameplayTags
{
	// -----------------------------------------------------------------------------------------------------------------
	// Input Tags
	// -----------------------------------------------------------------------------------------------------------------
	UE_DEFINE_GAMEPLAY_TAG(InputTag_Attack, FName{TEXTVIEW("InputTag.Attack")});
	UE_DEFINE_GAMEPLAY_TAG(InputTag_Aim, FName{TEXTVIEW("InputTag.Aim")});
	UE_DEFINE_GAMEPLAY_TAG(InputTag_Sprint, FName{TEXTVIEW("InputTag.Sprint")});
	UE_DEFINE_GAMEPLAY_TAG(InputTag_Jump, FName{TEXTVIEW("InputTag.Jump")});
	UE_DEFINE_GAMEPLAY_TAG(InputTag_Crouch, FName{TEXTVIEW("InputTag.Crouch")});
	UE_DEFINE_GAMEPLAY_TAG(InputTag_Move, FName{TEXTVIEW("InputTag.Move")});

	// -----------------------------------------------------------------------------------------------------------------
	// Gameplay Cues
	// -----------------------------------------------------------------------------------------------------------------
	UE_DEFINE_GAMEPLAY_TAG(GameplayCue_Ability_HitReact, FName{TEXTVIEW("GameplayCue.Ability.HitReact")});
	UE_DEFINE_GAMEPLAY_TAG(GameplayCue_Ability_Death, FName{TEXTVIEW("GameplayCue.Ability.Death")});

	// -----------------------------------------------------------------------------------------------------------------
	// Gameplay Events
	// -----------------------------------------------------------------------------------------------------------------
	UE_DEFINE_GAMEPLAY_TAG(Gameplay_Event, FName{TEXTVIEW("Gameplay.Event")});
	UE_DEFINE_GAMEPLAY_TAG(Gameplay_Event_Montage, FName{TEXTVIEW("Gameplay.Event.Montage")});
	
	UE_DEFINE_GAMEPLAY_TAG(Gameplay_Event_Montage_ActivateAbility, FName{TEXTVIEW("Gameplay.Event.Montage.ActivateAbility")});
	// -----------------------------------------------------------------------------------------------------------------
	// Gameplay Abilities
	// -----------------------------------------------------------------------------------------------------------------
	UE_DEFINE_GAMEPLAY_TAG(Gameplay_Ability, FName{TEXTVIEW("Gameplay.Ability")});
	UE_DEFINE_GAMEPLAY_TAG(Gameplay_Ability_InputBlocked, FName{TEXTVIEW("Gameplay.Ability.InputBlocked")});
	
	//~ Common
	UE_DEFINE_GAMEPLAY_TAG(Gameplay_Ability_Death, FName{TEXTVIEW("Gameplay.Ability.Death")});
	UE_DEFINE_GAMEPLAY_TAG(Gameplay_Ability_HitReact, FName{TEXTVIEW("Gameplay.Ability.HitReact")});
	UE_DEFINE_GAMEPLAY_TAG(Gameplay_Ability_Attack, FName{TEXTVIEW("Gameplay.Ability.Attack")});
	UE_DEFINE_GAMEPLAY_TAG(Gameplay_Ability_Sprint, FName{TEXTVIEW("Gameplay.Ability.Sprint")});
	UE_DEFINE_GAMEPLAY_TAG(Gameplay_Ability_HealthRegeneration, FName{TEXTVIEW("Gameplay.Ability.Passive.HealthRegeneration")});
	UE_DEFINE_GAMEPLAY_TAG(Gameplay_Ability_EnduranceRegeneration, FName{TEXTVIEW("Gameplay.Ability.Passive.EnduranceRegeneration")});


	//~ Costs
	UE_DEFINE_GAMEPLAY_TAG(Gameplay_Ability_Cost, FName{TEXTVIEW("Gameplay.Ability.Cost")});
	UE_DEFINE_GAMEPLAY_TAG(Gameplay_Ability_Cost_Sprint, FName{TEXTVIEW("Gameplay.Ability.Cost.Sprint")});

	//~ Cooldowns
	UE_DEFINE_GAMEPLAY_TAG(Gameplay_Ability_Cooldown, FName{TEXTVIEW("Gameplay.Ability.Cooldown")});

	// -----------------------------------------------------------------------------------------------------------------
	// Statuses
	// -----------------------------------------------------------------------------------------------------------------
	UE_DEFINE_GAMEPLAY_TAG(Status, FName{TEXTVIEW("Status")});

	// -----------------------------------------------------------------------------------------------------------------
	// Vital Attributes
	// -----------------------------------------------------------------------------------------------------------------
	UE_DEFINE_GAMEPLAY_TAG(Attribute_Vital_Health, FName{TEXTVIEW("Attribute.Vital.Health")});
	UE_DEFINE_GAMEPLAY_TAG(Attribute_Vital_Endurance, FName{TEXTVIEW("Attribute.Vital.Endurance")});
	UE_DEFINE_GAMEPLAY_TAG(Attribute_Vital_Oxygen, FName{TEXTVIEW("Attribute.Vital.Oxygen")});

	// -----------------------------------------------------------------------------------------------------------------
	// Primary Attributes
	// -----------------------------------------------------------------------------------------------------------------
	UE_DEFINE_GAMEPLAY_TAG(Attribute_Primary_Strength, FName{TEXTVIEW("Attribute.Primary.Strength")});
	UE_DEFINE_GAMEPLAY_TAG(Attribute_Primary_Vitality, FName{TEXTVIEW("Attribute.Primary.Vitality")});
	UE_DEFINE_GAMEPLAY_TAG(Attribute_Primary_Sneak, FName{TEXTVIEW("Attribute.Primary.Sneak")});
	UE_DEFINE_GAMEPLAY_TAG(Attribute_Primary_Charisma, FName{TEXTVIEW("Attribute.Primary.Charisma")});

	// -----------------------------------------------------------------------------------------------------------------
	// Secondary Attributes
	// -----------------------------------------------------------------------------------------------------------------
	UE_DEFINE_GAMEPLAY_TAG(Attribute_Secondary_MaxHealth, FName{TEXTVIEW("Attribute.Secondary.MaxHealth")});
	UE_DEFINE_GAMEPLAY_TAG(Attribute_Secondary_MaxEndurance, FName{TEXTVIEW("Attribute.Secondary.MaxEndurance")});

	// -----------------------------------------------------------------------------------------------------------------
	// Movement Moves
	// -----------------------------------------------------------------------------------------------------------------
	UE_DEFINE_GAMEPLAY_TAG(Movement_Mode_Walking, FName{TEXTVIEW("Movement.Mode.Walking")});
	UE_DEFINE_GAMEPLAY_TAG(Movement_Mode_NavWalking, FName{TEXTVIEW("Movement.Mode.NavWalking")});
	UE_DEFINE_GAMEPLAY_TAG(Movement_Mode_Falling, FName{TEXTVIEW("Movement.Mode.Falling")});
	UE_DEFINE_GAMEPLAY_TAG(Movement_Mode_Swimming, FName{TEXTVIEW("Movement.Mode.Swimming")});
	UE_DEFINE_GAMEPLAY_TAG(Movement_Mode_Flying, FName{TEXTVIEW("Movement.Mode.Flying")});
	
	UE_DEFINE_GAMEPLAY_TAG(Movement_Gait_Walking, FName{TEXTVIEW("Movement.Gait.Walking")});
	UE_DEFINE_GAMEPLAY_TAG(Movement_Gait_Running, FName{TEXTVIEW("Movement.Gait.Running")});
	UE_DEFINE_GAMEPLAY_TAG(Movement_Gait_Sprinting, FName{TEXTVIEW("Movement.Gait.Sprinting")});
	
	UE_DEFINE_GAMEPLAY_TAG(Movement_LocomotionMode_Grounded, FName{TEXTVIEW("Movement.LocomotionMode.Grounded")});
	UE_DEFINE_GAMEPLAY_TAG(Movement_LocomotionMode_Swimming, FName{TEXTVIEW("Movement.LocomotionMode.Swimming")});
	UE_DEFINE_GAMEPLAY_TAG(Movement_LocomotionMode_InAir, FName{TEXTVIEW("Movement.LocomotionMode.InAir")});
	
	const TMap<uint8, FGameplayTag> MovementModeTagMap = {
			{MOVE_Walking, Movement_Mode_Walking},
			{MOVE_NavWalking, Movement_Mode_NavWalking},
			{MOVE_Falling, Movement_Mode_Falling},
			{MOVE_Swimming, Movement_Mode_Swimming},
			{MOVE_Flying, Movement_Mode_Flying},
	};

	FGameplayTag FindTagByString(const FString &TagString, const bool bMatchPartialString)
	{
		const UGameplayTagsManager &Manager = UGameplayTagsManager::Get();
		FGameplayTag Tag = Manager.RequestGameplayTag(FName(*TagString), false);

		if (!Tag.IsValid() && bMatchPartialString)
		{
			FGameplayTagContainer AllTags;
			Manager.RequestAllGameplayTags(AllTags, true);

			for (const FGameplayTag &TestTag : AllTags)
			{
				if (TestTag.ToString().Contains(TagString))
				{
					UE_LOG(LogTemp, Display, TEXT("Could not find exact match for tag [%s] but found partial match on tag [%s]."), *TagString, *TestTag.ToString());
					Tag = TestTag;
					break;
				}
			}
		}

		return Tag;
	}
}