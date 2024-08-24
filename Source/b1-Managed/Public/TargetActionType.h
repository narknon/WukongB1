#pragma once
#include "CoreMinimal.h"
#include "TargetActionType.generated.h"

UENUM(BlueprintType)
enum class TargetActionType : uint8 {
    WakeUp,
    TriggerEffectByID,
    AddBuffByID,
};

