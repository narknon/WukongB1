#pragma once
#include "CoreMinimal.h"
#include "PriorityActionSelectUnitType.generated.h"

UENUM(BlueprintType)
enum class PriorityActionSelectUnitType : uint8 {
    AllInWandering,
    FarFromPlayerAndInScreenSort,
};

