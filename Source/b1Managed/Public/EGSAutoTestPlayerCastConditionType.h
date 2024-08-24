#pragma once
#include "CoreMinimal.h"
#include "EGSAutoTestPlayerCastConditionType.generated.h"

UENUM(BlueprintType)
enum class EGSAutoTestPlayerCastConditionType : uint8 {
    UnitAttr,
    UnitState,
    HasItem = 64,
    PELevel,
    NotPreloading = 128,
};

