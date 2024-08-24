#pragma once
#include "CoreMinimal.h"
#include "RotationBaseDirection.generated.h"

UENUM(BlueprintType)
enum class RotationBaseDirection : uint8 {
    WorldSpaceXAxis,
    LineToTarget,
};

