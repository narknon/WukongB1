#pragma once
#include "CoreMinimal.h"
#include "DispLibDBCAdvProcessReleaseParameterControlMode.generated.h"

UENUM(BlueprintType)
enum class DispLibDBCAdvProcessReleaseParameterControlMode : uint8 {
    OnEventRealEnd,
    OnParamSelfEndStageOver,
};

