#pragma once
#include "CoreMinimal.h"
#include "DispLibDBCEndStageMode.generated.h"

UENUM(BlueprintType)
enum class DispLibDBCEndStageMode : uint8 {
    CommonEnd,
    EndImmediately,
};

