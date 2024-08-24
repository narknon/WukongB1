#pragma once
#include "CoreMinimal.h"
#include "EPCGMedadataMathsOperation.generated.h"

UENUM()
enum class EPCGMedadataMathsOperation : uint16 {
    UnaryOp = 1024,
    Sign,
    Frac,
    Truncate,
    Round,
    Sqrt,
    Abs,
    Floor,
    Ceil,
    OneMinus,
    BinaryOp = 2048,
    Add,
    Subtract,
    Multiply,
    Divide,
    Max,
    Min,
    Pow,
    ClampMin,
    ClampMax,
    Modulo,
    Set,
    TernaryOp = 4096,
    Clamp,
    Lerp,
};

