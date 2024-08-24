#pragma once
#include "CoreMinimal.h"
#include "DispLibDBCFollowTriggerMode.generated.h"

UENUM(BlueprintType)
enum class DispLibDBCFollowTriggerMode : uint8 {
    None,
    OnEndStageBegin,
    AfterEndStage,
    OnBreakBegin,
    AfterBreak,
};

