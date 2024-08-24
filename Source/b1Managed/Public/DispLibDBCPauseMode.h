#pragma once
#include "CoreMinimal.h"
#include "DispLibDBCPauseMode.generated.h"

UENUM(BlueprintType)
enum class DispLibDBCPauseMode : uint8 {
    Pause,
    None,
    GotoEndDispStage,
    RealEndAndNoEndDispStage,
    PauseAndHide,
    ForceDestory,
};

