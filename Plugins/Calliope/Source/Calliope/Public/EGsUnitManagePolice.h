#pragma once
#include "CoreMinimal.h"
#include "EGsUnitManagePolice.generated.h"

UENUM(BlueprintType)
enum class EGsUnitManagePolice : uint8 {
    SameAsPrevious,
    Status,
    StatusWithoutHP,
    Spawn,
    Destroy,
};

