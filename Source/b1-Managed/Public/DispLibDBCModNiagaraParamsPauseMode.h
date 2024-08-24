#pragma once
#include "CoreMinimal.h"
#include "DispLibDBCModNiagaraParamsPauseMode.generated.h"

UENUM(BlueprintType)
enum class DispLibDBCModNiagaraParamsPauseMode : uint8 {
    Pause,
    None,
    GotoEndDispStage,
    RealEndAndNoEndDispStage,
};

