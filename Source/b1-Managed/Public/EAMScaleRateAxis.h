#pragma once
#include "CoreMinimal.h"
#include "EAMScaleRateAxis.generated.h"

UENUM(BlueprintType)
enum class EAMScaleRateAxis : uint8 {
    AllByScaleRateAxisX,
    All,
    AxisX,
    AxisY,
    AxisZ,
    AxisZLanding,
};

