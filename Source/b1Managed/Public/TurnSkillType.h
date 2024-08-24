#pragma once
#include "CoreMinimal.h"
#include "TurnSkillType.generated.h"

UENUM(BlueprintType)
enum class TurnSkillType : uint8 {
    LeftSmall,
    RightSmall,
    LeftBig,
    RightBig,
};

