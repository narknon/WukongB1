#pragma once
#include "CoreMinimal.h"
#include "AkCurveInterpolationCS.generated.h"

UENUM(BlueprintType)
enum class AkCurveInterpolationCS : uint8 {
    Log3,
    Sine,
    Log1,
    InvSCurve,
    Linear,
    SCurve,
    Exp1,
    SineReciprocal,
    Exp3,
    Constant,
};

