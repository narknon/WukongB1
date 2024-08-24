#pragma once
#include "CoreMinimal.h"
#include "AwardProbabilityRaiseType.generated.h"

UENUM(BlueprintType)
enum class AwardProbabilityRaiseType : uint8 {
    None,
    RaiseToFirst,
    RaiseToSecond,
    RaiseToTarget,
    EnumMax,
};

