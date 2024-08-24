#pragma once
#include "CoreMinimal.h"
#include "AxisLineType.generated.h"

UENUM(BlueprintType)
enum class AxisLineType : uint8 {
    solid,
    dashed,
    dotted,
};

