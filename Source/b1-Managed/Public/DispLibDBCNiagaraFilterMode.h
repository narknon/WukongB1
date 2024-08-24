#pragma once
#include "CoreMinimal.h"
#include "DispLibDBCNiagaraFilterMode.generated.h"

UENUM(BlueprintType)
enum class DispLibDBCNiagaraFilterMode : uint8 {
    AllNiagara,
    ByName,
    ByExcludeName,
    ByTags,
    ByExcludeTags,
    BySystemAsset,
    ByExcludeSystemAsset,
};

