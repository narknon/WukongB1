#pragma once
#include "CoreMinimal.h"
#include "CamRefType.generated.h"

UENUM(BlueprintType)
enum class CamRefType : uint8 {
    None,
    BothSide,
    MiddlePoint,
    BigSize,
    EnumMax = 10,
};

