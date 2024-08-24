#pragma once
#include "CoreMinimal.h"
#include "CameraType.generated.h"

UENUM(BlueprintType)
enum class CameraType : uint8 {
    None,
    BothSide,
    MiddlePoint,
    BigSize,
    EnumMax = 10,
};

