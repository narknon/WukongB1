#pragma once
#include "CoreMinimal.h"
#include "FlowActorType.generated.h"

UENUM(BlueprintType)
enum class FlowActorType : uint8 {
    None,
    Overlap = 2,
    DynamicObstacle,
    Spawn,
    Checker,
};

