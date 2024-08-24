#pragma once
#include "CoreMinimal.h"
#include "EPCGAttributeReduceOperation.generated.h"

UENUM()
enum class EPCGAttributeReduceOperation : int32 {
    Average,
    Max,
    Min,
};

