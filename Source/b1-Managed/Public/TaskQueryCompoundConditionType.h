#pragma once
#include "CoreMinimal.h"
#include "TaskQueryCompoundConditionType.generated.h"

UENUM(BlueprintType)
enum class TaskQueryCompoundConditionType : uint8 {
    None,
    QueryTaskStageState,
    QueryInteractionRecord,
    QueryActorState,
    QueryOwningItem,
};

