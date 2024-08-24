#pragma once
#include "CoreMinimal.h"
#include "DispLibDBCWindMotorMode.generated.h"

UENUM(BlueprintType)
enum class DispLibDBCWindMotorMode : uint8 {
    NoWind,
    LocalDirectionalWind,
    LocalOmniWind,
    LocalVortexWind,
    LocalAbsorbWind,
};

