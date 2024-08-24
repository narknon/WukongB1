#pragma once
#include "CoreMinimal.h"
#include "DestructibleStrengthLevel.generated.h"

UENUM(BlueprintType)
enum class DestructibleStrengthLevel : uint8 {
    LightHitDestroy,
    MediumHitDestroy,
    HeavyHitDestroy,
    SpecialHitDestroy,
    Indestructible = 99,
};

