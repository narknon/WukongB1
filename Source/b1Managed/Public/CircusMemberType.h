#pragma once
#include "CoreMinimal.h"
#include "CircusMemberType.generated.h"

UENUM(BlueprintType)
enum class CircusMemberType : uint8 {
    Unknown,
    Tamer,
    InteractiveObj,
    SpawnWaves,
    Overlap,
    JJSObstacle,
};

