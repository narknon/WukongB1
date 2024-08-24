#pragma once
#include "CoreMinimal.h"
#include "CollectionStageRemove.generated.h"

UENUM(BlueprintType)
enum class CollectionStageRemove : uint8 {
    Min,
    FirstSight,
    End,
};

