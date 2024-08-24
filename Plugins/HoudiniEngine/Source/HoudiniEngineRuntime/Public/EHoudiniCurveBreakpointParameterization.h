#pragma once
#include "CoreMinimal.h"
#include "EHoudiniCurveBreakpointParameterization.generated.h"

UENUM()
enum class EHoudiniCurveBreakpointParameterization : int8 {
    Invalid = -1,
    Uniform = 0,
    Chord,
    Centripetal,
};

