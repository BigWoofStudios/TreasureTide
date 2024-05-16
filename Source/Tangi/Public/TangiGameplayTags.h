// Copyright Big Woof Studios, LLC. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "NativeGameplayTags.h"

namespace FTangiGameplayTags
{
	// -----------------------------------------------------------------------------------------------------------------
	// Input Tags
	// -----------------------------------------------------------------------------------------------------------------
	TANGI_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(InputTag_Attack);
	TANGI_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(InputTag_Aim);
	TANGI_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(InputTag_Sprint);
	TANGI_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(InputTag_Jump);
	TANGI_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(InputTag_Crouch);
	TANGI_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(InputTag_Move);

	// -----------------------------------------------------------------------------------------------------------------
	// Gameplay Cues
	// -----------------------------------------------------------------------------------------------------------------
	TANGI_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(GameplayCue_Ability_HitReact);
	TANGI_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(GameplayCue_Ability_Death);

	// -----------------------------------------------------------------------------------------------------------------
	// Gameplay Events
	// -----------------------------------------------------------------------------------------------------------------
	TANGI_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Gameplay_Event);
	TANGI_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Gameplay_Event_Montage);
	TANGI_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Gameplay_Event_Montage_ActivateAbility);
	
	// -----------------------------------------------------------------------------------------------------------------
	// Gameplay Abilities
	// -----------------------------------------------------------------------------------------------------------------
	TANGI_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(GameplayAbility);
	TANGI_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(GameplayAbility_InputBlocked);
	
	//~ Common
	TANGI_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(GameplayAbility_Death);
	TANGI_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(GameplayAbility_HitReact);
	TANGI_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(GameplayAbility_Attack);
	TANGI_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(GameplayAbility_Aim);
	TANGI_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(GameplayAbility_Sprint);
	TANGI_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(GameplayAbility_HealthRegeneration);
	TANGI_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(GameplayAbility_EnduranceRegeneration);

	//~ Failed to activate tags
	TANGI_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(GamplayAbility_ActivateFail_IsDead);

	//~ Costs
	TANGI_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(GameplayAbility_Cost);
	TANGI_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(GameplayAbility_Cost_Sprint);

	//~ Cooldowns
	TANGI_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(GameplayAbility_Cooldown);

	// -----------------------------------------------------------------------------------------------------------------
	// Statuses
	// -----------------------------------------------------------------------------------------------------------------
	TANGI_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Status);
	TANGI_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Status_IsDead);

	// -----------------------------------------------------------------------------------------------------------------
	// Vital Attributes
	// -----------------------------------------------------------------------------------------------------------------
	TANGI_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Attribute_Vital_Health);
	TANGI_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Attribute_Vital_Endurance);
	TANGI_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Attribute_Vital_Oxygen);

	// -----------------------------------------------------------------------------------------------------------------
	// Primary Attributes
	// -----------------------------------------------------------------------------------------------------------------
	TANGI_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Attribute_Primary_Strength);
	TANGI_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Attribute_Primary_Vitality);
	TANGI_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Attribute_Primary_Sneak);
	TANGI_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Attribute_Primary_Charisma);

	// -----------------------------------------------------------------------------------------------------------------
	// Secondary Attributes
	// -----------------------------------------------------------------------------------------------------------------
	TANGI_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Attribute_Secondary_MaxHealth);
	TANGI_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Attribute_Secondary_MaxEndurance);
	TANGI_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Attribute_Secondary_MaxOxygen);

	// -----------------------------------------------------------------------------------------------------------------
	// Movement Moves
	// -----------------------------------------------------------------------------------------------------------------
	TANGI_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Movement_Mode_Walking);
	TANGI_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Movement_Mode_NavWalking);
	TANGI_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Movement_Mode_Falling);
	TANGI_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Movement_Mode_Swimming);
	TANGI_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Movement_Mode_Flying);

	TANGI_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Movement_Gait_Walking);
	TANGI_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Movement_Gait_Running);
	TANGI_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Movement_Gait_Sprinting);

	TANGI_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Movement_LocomotionMode_Grounded);
	TANGI_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Movement_LocomotionMode_Swimming);
	TANGI_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Movement_LocomotionMode_InAir);

	// These are mappings from MovementMode enums to GameplayTags associated with those enums (below)
	TANGI_API extern const TMap<uint8, FGameplayTag> MovementModeTagMap;
};
