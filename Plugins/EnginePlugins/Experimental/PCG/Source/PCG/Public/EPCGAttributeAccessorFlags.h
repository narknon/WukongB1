#pragma once
#include "CoreMinimal.h"
#include "EPCGAttributeAccessorFlags.generated.h"

UENUM(BlueprintType)
enum class EPCGAttributeAccessorFlags : uint8 {
    StrictType = 1,
    AllowBroadcast,
    AllowConstructible = 4,
    AllowSetDefaultValue = 8,
};

