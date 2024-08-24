#pragma once
#include "CoreMinimal.h"
#include "CheckConditionType.generated.h"

UENUM(BlueprintType)
enum class CheckConditionType : uint8 {
    None,
    AITarget,
    HpLow,
    InRange,
    HasBuff,
    InAbnormalState,
    BreakPart = 101,
    Beatback,
    CastSkill,
};

