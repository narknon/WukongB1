#pragma once
#include "CoreMinimal.h"
#include "EGSForceRatioType.generated.h"

UENUM(BlueprintType)
enum class EGSForceRatioType : uint8 {
    Auto,
    Force16_9,
    Force21_9,
};

