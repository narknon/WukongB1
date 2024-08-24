#pragma once
#include "CoreMinimal.h"
#include "EBGUMoveCurveType.generated.h"

UENUM(BlueprintType)
enum class EBGUMoveCurveType : uint8 {
    None,
    SpeedCurve,
    DistanceCurve,
};

