#pragma once
#include "CoreMinimal.h"
#include "PointBlockLocFlag.generated.h"

UENUM(BlueprintType)
enum class PointBlockLocFlag : uint8 {
    PBL_NONE,
    PBL_N,
    PBL_S,
    PBL_W = 4,
    PBL_NW,
    PBL_SW,
    PBL_E = 8,
    PBL_NE,
    PBL_SE,
    PBL_NSWE = 15,
};

