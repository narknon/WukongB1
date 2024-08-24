#pragma once
#include "CoreMinimal.h"
#include "DynamicObstacleState.generated.h"

UENUM(BlueprintType)
enum class DynamicObstacleState : uint8 {
    Opened,
    Closed,
};

