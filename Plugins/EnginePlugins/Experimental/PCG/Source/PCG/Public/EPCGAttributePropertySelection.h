#pragma once
#include "CoreMinimal.h"
#include "EPCGAttributePropertySelection.generated.h"

UENUM()
enum class EPCGAttributePropertySelection : int32 {
    Attribute,
    PointProperty,
    ExtraProperty,
};

