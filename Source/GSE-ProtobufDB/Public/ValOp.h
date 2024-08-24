#pragma once
#include "CoreMinimal.h"
#include "ValOp.generated.h"

UENUM(BlueprintType)
enum class ValOp : uint8 {
    Add,
    Mul,
    OverrideBase,
};

