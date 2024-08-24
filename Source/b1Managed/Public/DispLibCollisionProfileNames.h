#pragma once
#include "CoreMinimal.h"
#include "DispLibCollisionProfileNames.generated.h"

UENUM(BlueprintType)
enum class DispLibCollisionProfileNames : uint8 {
    NoCollision,
    BlockAll,
    OverlapAll,
    BlockAllDynamic,
    GroundBrick,
    Rock_Big,
    Rock_Small,
};

