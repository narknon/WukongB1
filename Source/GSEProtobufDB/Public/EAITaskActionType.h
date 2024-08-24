#pragma once
#include "CoreMinimal.h"
#include "EAITaskActionType.generated.h"

UENUM(BlueprintType)
enum class EAITaskActionType : uint8 {
    CastSkill,
    TriggerSkillEffect,
    TriggerSequence,
};

