#pragma once
#include "CoreMinimal.h"
#include "EGSHitDestructibleDirection.generated.h"

UENUM(BlueprintType)
enum class EGSHitDestructibleDirection : uint8 {
    DestructibleDirection,
    AttackerSpeedDirection,
    AttackerRelativeDirection,
};

