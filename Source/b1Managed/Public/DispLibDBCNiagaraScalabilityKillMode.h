#pragma once
#include "CoreMinimal.h"
#include "DispLibDBCNiagaraScalabilityKillMode.generated.h"

UENUM(BlueprintType)
enum class DispLibDBCNiagaraScalabilityKillMode : uint8 {
    IntoEndDispStage,
    ForceNoEndDispStage,
    ReuseByReset,
};

