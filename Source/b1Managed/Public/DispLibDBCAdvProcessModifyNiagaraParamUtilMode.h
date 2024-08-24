#pragma once
#include "CoreMinimal.h"
#include "DispLibDBCAdvProcessModifyNiagaraParamUtilMode.generated.h"

UENUM(BlueprintType)
enum class DispLibDBCAdvProcessModifyNiagaraParamUtilMode : uint8 {
    Standard,
    RandomOnSpawn,
    Random,
    TimedUCurve,
    SpecAtt,
    SpecAttUCurve,
};

