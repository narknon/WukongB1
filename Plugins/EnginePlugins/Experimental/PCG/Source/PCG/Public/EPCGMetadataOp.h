#pragma once
#include "CoreMinimal.h"
#include "EPCGMetadataOp.generated.h"

UENUM(BlueprintType)
enum class EPCGMetadataOp : uint8 {
    Min,
    Max,
    Sub,
    Add,
    Mul,
    Div,
    SourceValue,
    TargetValue,
};

