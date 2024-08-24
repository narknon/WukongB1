#pragma once
#include "CoreMinimal.h"
#include "UnitManagePolice.generated.h"

UENUM(BlueprintType)
enum class UnitManagePolice : uint8 {
    SameAsPrevious,
    Status,
    StatusWithoutHP,
    Spawn,
    Destroy,
};

