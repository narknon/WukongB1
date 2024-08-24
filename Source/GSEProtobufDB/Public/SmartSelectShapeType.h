#pragma once
#include "CoreMinimal.h"
#include "SmartSelectShapeType.generated.h"

UENUM(BlueprintType)
enum class SmartSelectShapeType : uint8 {
    SssNone,
    SssFixedCircle,
    SssSector,
    SssArrow,
    SssRectangle,
    SssInCircle,
    SssCircle,
    SssArrowToCircle,
    SssShootUi,
};

