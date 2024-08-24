#pragma once
#include "CoreMinimal.h"
#include "HitDestructibleDirType.generated.h"

UENUM(BlueprintType)
enum class HitDestructibleDirType : uint8 {
    DestructibleDirection,
    AttackerSpeedDirection,
    AttackerRelativeDirection,
};

