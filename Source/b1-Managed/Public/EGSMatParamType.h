#pragma once
#include "CoreMinimal.h"
#include "EGSMatParamType.generated.h"

UENUM(BlueprintType)
enum class EGSMatParamType : uint8 {
    None,
    Float,
    Vector,
    LinearColor,
    FloatCurve,
    VectorCurve,
    LinearColorValue,
    OwnerInfoStart = 64,
    OwnerWorldLocation,
    OwnerForwardVector,
    OwnerVelocity,
    OwnerSocketLocation,
    OwnerSocketForwardVector,
    PlayerInfoStart = 128,
    PlayerWorldLocation,
    PlayerForwardVector,
    PlayerVelocity,
    PlayerSocketLocation,
    PlayerSocketForwardVector,
};

