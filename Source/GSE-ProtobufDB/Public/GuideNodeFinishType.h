#pragma once
#include "CoreMinimal.h"
#include "GuideNodeFinishType.generated.h"

UENUM(BlueprintType)
enum class GuideNodeFinishType : uint8 {
    None,
    LockTarget,
    SwitchLockTarget,
    CastSkill,
    DrinkBloodBottle,
};

