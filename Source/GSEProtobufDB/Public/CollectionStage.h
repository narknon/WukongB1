#pragma once
#include "CoreMinimal.h"
#include "CollectionStage.generated.h"

UENUM(BlueprintType)
enum class CollectionStage : uint8 {
    FirstSight,
    Story1,
    Story2,
    Story3,
    Story4,
    Story5,
    EnumMax,
};

