#pragma once
#include "CoreMinimal.h"
#include "BeAttackedBlendType.generated.h"

UENUM(BlueprintType)
enum class BeAttackedBlendType : uint8 {
    None,
    Physics,
    AdditiveAnim,
    MatJitter = 4,
    Scar = 8,
};

