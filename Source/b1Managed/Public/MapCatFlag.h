#pragma once
#include "CoreMinimal.h"
#include "MapCatFlag.generated.h"

UENUM(BlueprintType)
enum class MapCatFlag : uint8 {
    CAT_NONE,
    CAT_N,
    CAT_S,
    CAT_NS,
    CAT_W,
    CAT_NW,
    CAT_SW,
    CAT_NSW,
    CAT_E,
    CAT_NE,
    CAT_SE,
    CAT_NSE,
    CAT_WE,
    CAT_NWE,
    CAT_SWE,
    CAT_NSWE,
};

