#pragma once
#include "CoreMinimal.h"
#include "EBGUMoveAIType.generated.h"

UENUM(BlueprintType)
enum class EBGUMoveAIType : uint8 {
    None,
    KeepFacingTarget,
    Flock,
    FacingVelocity,
};

