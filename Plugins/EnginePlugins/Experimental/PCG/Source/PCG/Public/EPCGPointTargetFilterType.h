#pragma once
#include "CoreMinimal.h"
#include "EPCGPointTargetFilterType.generated.h"

UENUM(BlueprintType)
enum class EPCGPointTargetFilterType : uint8 {
    Property,
    Metadata,
};

