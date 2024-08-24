#pragma once
#include "CoreMinimal.h"
#include "AutoMoveMode.generated.h"

UENUM(BlueprintType)
enum class AutoMoveMode : uint8 {
    AttackMove,
    ForcedMove,
    SimpleMove,
};

