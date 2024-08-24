#pragma once
#include "CoreMinimal.h"
#include "EBeamFXTargetActorType.generated.h"

UENUM(BlueprintType)
enum class EBeamFXTargetActorType : uint8 {
    Zero,
    Self,
    CameraLockActor,
    MAX = 255,
};

