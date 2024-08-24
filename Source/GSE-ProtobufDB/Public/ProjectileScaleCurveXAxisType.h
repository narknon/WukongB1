#pragma once
#include "CoreMinimal.h"
#include "ProjectileScaleCurveXAxisType.generated.h"

UENUM(BlueprintType)
enum class ProjectileScaleCurveXAxisType : uint8 {
    None,
    Time,
    DistWithMaster,
    EnumMax,
};

