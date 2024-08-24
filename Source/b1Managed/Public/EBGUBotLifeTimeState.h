#pragma once
#include "CoreMinimal.h"
#include "EBGUBotLifeTimeState.generated.h"

UENUM(BlueprintType)
enum class EBGUBotLifeTimeState : uint8 {
    Idle,
    Battle,
    Dead,
    Patrol,
    ReturnHome,
    EnumMax,
};

