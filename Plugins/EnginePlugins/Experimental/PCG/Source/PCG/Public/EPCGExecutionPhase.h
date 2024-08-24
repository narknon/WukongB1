#pragma once
#include "CoreMinimal.h"
#include "EPCGExecutionPhase.generated.h"

UENUM(BlueprintType)
enum class EPCGExecutionPhase : uint8 {
    NotExecuted,
    PrepareData,
    Execute,
    PostExecute,
    Done,
};

