#pragma once
#include "CoreMinimal.h"
#include "DestructibleMassLevel.generated.h"

UENUM(BlueprintType)
enum class DestructibleMassLevel : uint8 {
    Basic,
    WalkDestroy,
    RunDestroy,
    SprintDestroy,
    GiantDestroy,
    Indestructible,
};

