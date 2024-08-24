#pragma once
#include "CoreMinimal.h"
#include "EGsDynamicObstacleState.generated.h"

UENUM(BlueprintType)
enum class EGsDynamicObstacleState : uint8 {
    Opened,
    Closed,
};

