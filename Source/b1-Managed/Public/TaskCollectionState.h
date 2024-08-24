#pragma once
#include "CoreMinimal.h"
#include "TaskCollectionState.generated.h"

UENUM(BlueprintType)
enum class TaskCollectionState : uint8 {
    Default,
    Activated,
    Finished,
};

