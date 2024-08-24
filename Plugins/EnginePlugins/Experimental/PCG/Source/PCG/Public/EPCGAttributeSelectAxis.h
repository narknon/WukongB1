#pragma once
#include "CoreMinimal.h"
#include "EPCGAttributeSelectAxis.generated.h"

UENUM()
enum class EPCGAttributeSelectAxis : int32 {
    X,
    Y,
    Z,
    W,
    CustomAxis,
};

