#pragma once
#include "CoreMinimal.h"
#include "EPCGAttributeSelectOperation.generated.h"

UENUM()
enum class EPCGAttributeSelectOperation : int32 {
    Min,
    Max,
    Median,
};

