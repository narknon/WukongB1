#pragma once
#include "CoreMinimal.h"
#include "SummonTargetMethod.generated.h"

UENUM(BlueprintType)
enum class SummonTargetMethod : uint8 {
    SyncFromMaster,
    AcquireFromPerception,
};

