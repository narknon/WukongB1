#pragma once
#include "CoreMinimal.h"
#include "EPCGCopyPointsInheritanceMode.generated.h"

UENUM(BlueprintType)
enum class EPCGCopyPointsInheritanceMode : uint8 {
    Relative,
    Source,
    Target,
};

