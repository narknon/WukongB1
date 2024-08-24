#pragma once
#include "CoreMinimal.h"
#include "TaskStageState2.generated.h"

UENUM(BlueprintType)
enum class TaskStageState : uint8 {
    Default,
    Activated,
    Finished,
};

