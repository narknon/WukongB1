#pragma once
#include "CoreMinimal.h"
#include "UnitDynamicObstaclePerformAMType.generated.h"

UENUM(BlueprintType)
enum class UnitDynamicObstaclePerformAMType : uint8 {
    OnlyFront,
    FrontAndBehind,
    FourDir,
};

