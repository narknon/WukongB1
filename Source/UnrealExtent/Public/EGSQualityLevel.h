#pragma once
#include "CoreMinimal.h"
#include "EGSQualityLevel.generated.h"

UENUM(BlueprintType)
enum class EGSQualityLevel : uint8 {
    INVALID,
    LOW,
    MEDIUM,
    HIGH,
    EPIC,
    CINE,
};

