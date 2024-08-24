#pragma once
#include "CoreMinimal.h"
#include "DispLibDBCCompsFilterMode.generated.h"

UENUM(BlueprintType)
enum class DispLibDBCCompsFilterMode : uint8 {
    AllComps,
    ByTags,
    ByExcludeTags,
};

