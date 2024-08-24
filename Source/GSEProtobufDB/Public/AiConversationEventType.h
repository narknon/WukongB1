#pragma once
#include "CoreMinimal.h"
#include "AiConversationEventType.generated.h"

UENUM(BlueprintType)
enum class AiConversationEventType : uint8 {
    None,
    OnWakeUp,
    OnDead,
    OnKillPlayer,
    OnPlayerApproached,
    OnPerceptionFindTarget,
    OnTriggerFightSkill,
};

