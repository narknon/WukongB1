#pragma once
#include "CoreMinimal.h"
#include "DispLibDBCMaterialsFilterMode.generated.h"

UENUM(BlueprintType)
enum class DispLibDBCMaterialsFilterMode : uint8 {
    AllMats,
    BySlotNames,
    ByExcludeSlotNames,
    ByIndexes,
    ByExcludeIndexes,
    ByUMaterial,
    ByExcludeUMaterial,
};

