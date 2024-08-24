#pragma once
#include "CoreMinimal.h"
#include "DetectedForceType.generated.h"

UENUM(BlueprintType)
enum class DetectedForceType : uint8 {
    Friend,
    Enemy,
    Other,
};

