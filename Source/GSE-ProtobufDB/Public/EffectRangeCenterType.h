#pragma once
#include "CoreMinimal.h"
#include "EffectRangeCenterType.generated.h"

UENUM(BlueprintType)
enum class EffectRangeCenterType : uint8 {
    ActorPosition,
    HitPosition,
};

