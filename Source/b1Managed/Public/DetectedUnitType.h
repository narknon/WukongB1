#pragma once
#include "CoreMinimal.h"
#include "DetectedUnitType.generated.h"

UENUM(BlueprintType)
enum class DetectedUnitType : uint8 {
    Self,
    Target,
    Master,
    Player,
    UseSmartUnit,
};

