#pragma once
#include "CoreMinimal.h"
#include "MultiTargetConditionType.generated.h"

UENUM(BlueprintType)
enum class MultiTargetConditionType : uint8 {
    None,
    HasBuff,
    HasState,
    HasSimpleState,
    HPPercentInRange,
};

