#pragma once
#include "CoreMinimal.h"
#include "EGSPriorityMode.generated.h"

UENUM(BlueprintType)
enum class EGSPriorityMode : uint8 {
    QUALITY_PRIOR,
    PERF_PRIOR,
};

