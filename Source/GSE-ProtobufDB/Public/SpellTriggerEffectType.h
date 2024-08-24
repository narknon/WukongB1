#pragma once
#include "CoreMinimal.h"
#include "SpellTriggerEffectType.generated.h"

UENUM(BlueprintType)
enum class SpellTriggerEffectType : uint8 {
    None,
    SkillEffect,
    AddBuff,
    RemoveBuff,
};

