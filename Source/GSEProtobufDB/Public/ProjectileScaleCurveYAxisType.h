#pragma once
#include "CoreMinimal.h"
#include "ProjectileScaleCurveYAxisType.generated.h"

UENUM(BlueprintType)
enum class ProjectileScaleCurveYAxisType : uint8 {
    None,
    Scale,
    Radius,
    EnumMax,
};

