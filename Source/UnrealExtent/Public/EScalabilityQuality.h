#pragma once
#include "CoreMinimal.h"
#include "EScalabilityQuality.generated.h"

UENUM(BlueprintType)
enum class EScalabilityQuality : uint8 {
    INVALID,
    LOW,
    MEDIUM,
    HIGH,
    EPIC,
    CINE,
};

