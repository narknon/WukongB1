#pragma once
#include "CoreMinimal.h"
#include "CollectionPortraitStage.generated.h"

UENUM(BlueprintType)
enum class CollectionPortraitStage : uint8 {
    FirstSight,
    Completed,
    EnumMax,
};

