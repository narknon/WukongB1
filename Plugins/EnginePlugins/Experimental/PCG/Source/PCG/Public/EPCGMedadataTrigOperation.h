#pragma once
#include "CoreMinimal.h"
#include "EPCGMedadataTrigOperation.generated.h"

UENUM()
enum class EPCGMedadataTrigOperation : uint16 {
    Acos,
    Asin,
    Atan,
    Atan2,
    Cos,
    Sin,
    Tan,
    DegToRad,
    RadToDeg,
};

