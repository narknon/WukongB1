#pragma once
#include "CoreMinimal.h"
#include "PriorityActionUnitType.generated.h"

UENUM(BlueprintType)
enum class PriorityActionUnitType : uint8 {
    ActivatingGroupAIUnit,
    NoneActivatingGroupAIUnit,
    AllUnit,
};

