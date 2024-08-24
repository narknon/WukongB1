#pragma once
#include "CoreMinimal.h"
#include "EPCGPointThresholdType.generated.h"

UENUM(BlueprintType)
enum class EPCGPointThresholdType : uint8 {
    Property,
    Metadata,
    Constant,
};

