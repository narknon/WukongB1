#pragma once
#include "CoreMinimal.h"
#include "ETargetLevelStreamingState.generated.h"

UENUM(BlueprintType)
enum class ETargetLevelStreamingState : uint8 {
    RemainCurrent,
    HideOnly,
    Unloaded,
};

