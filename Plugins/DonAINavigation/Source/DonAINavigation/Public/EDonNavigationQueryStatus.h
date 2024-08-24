#pragma once
#include "CoreMinimal.h"
#include "EDonNavigationQueryStatus.generated.h"

UENUM(BlueprintType)
enum class EDonNavigationQueryStatus : uint8 {
    Unscheduled,
    InProgress,
    Success,
    Failure,
    QueryHasNoSolution,
    TimedOut,
};

