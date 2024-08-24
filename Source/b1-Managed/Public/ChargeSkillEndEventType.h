#pragma once
#include "CoreMinimal.h"
#include "ChargeSkillEndEventType.generated.h"

UENUM(BlueprintType)
enum class ChargeSkillEndEventType : uint8 {
    ChargeEnd,
    TimeOut,
    StaminaOver,
    PELevelGrowUp,
};

