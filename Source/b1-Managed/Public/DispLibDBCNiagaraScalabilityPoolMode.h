#pragma once
#include "CoreMinimal.h"
#include "DispLibDBCNiagaraScalabilityPoolMode.generated.h"

UENUM(BlueprintType)
enum class DispLibDBCNiagaraScalabilityPoolMode : uint8 {
    GlobalSameDataAssets,
    GlobalSameNiagaraSystem,
    PreSourceOwnerSameNiagaraSystem,
};

