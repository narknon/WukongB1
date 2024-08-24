#pragma once
#include "CoreMinimal.h"
#include "OverlapManagePolice.generated.h"

UENUM(BlueprintType)
enum class OverlapManagePolice : uint8 {
    SameAsPrevious,
    KeepEnable,
    KeepDisable,
};

