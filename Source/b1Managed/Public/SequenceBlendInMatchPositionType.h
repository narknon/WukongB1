#pragma once
#include "CoreMinimal.h"
#include "SequenceBlendInMatchPositionType.generated.h"

UENUM(BlueprintType)
enum class SequenceBlendInMatchPositionType : uint8 {
    None,
    OnePoint,
    TwoPoint,
    Ori2PointA,
};

