#pragma once
#include "CoreMinimal.h"
#include "EGsUnitResetType.generated.h"

UENUM(BlueprintType)
enum class EGsUnitResetType : uint8 {
    No,
    Destroy,
    Status,
    Spawn,
    StatusWithoutHp,
    None,
};

