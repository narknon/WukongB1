#pragma once
#include "CoreMinimal.h"
#include "DispLibDBCNiagaraForceVisibleStateMode.generated.h"

UENUM(BlueprintType)
enum class DispLibDBCNiagaraForceVisibleStateMode : uint8 {
    ImmdSetCompVisibleState,
    None,
    SetNiagaraParam,
};

