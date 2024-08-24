#pragma once
#include "CoreMinimal.h"
#include "DamageCalcType.generated.h"

UENUM(BlueprintType)
enum class DamageCalcType : uint8 {
    Normal,
    ElemDot,
    HPMaxRatioAbs,
};

