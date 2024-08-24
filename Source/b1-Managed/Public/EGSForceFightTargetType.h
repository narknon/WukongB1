#pragma once
#include "CoreMinimal.h"
#include "EGSForceFightTargetType.generated.h"

UENUM(BlueprintType)
enum class EGSForceFightTargetType : uint8 {
    None,
    KeepCurrentAndStalemate,
    CollisionOverlappedUnit,
    SelectedTargetUnit,
};

