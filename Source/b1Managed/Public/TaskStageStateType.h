#pragma once
#include "CoreMinimal.h"
#include "TaskStageStateType.generated.h"

UENUM(BlueprintType)
enum class TaskStageStateType : uint8 {
    NoActive,
    Actived,
    Finsh,
};

