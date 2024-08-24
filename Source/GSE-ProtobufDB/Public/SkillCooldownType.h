#pragma once
#include "CoreMinimal.h"
#include "SkillCooldownType.generated.h"

UENUM(BlueprintType)
enum class SkillCooldownType : uint8 {
    TryToCast,
    ComboWindow,
    ChargeEnd,
};

