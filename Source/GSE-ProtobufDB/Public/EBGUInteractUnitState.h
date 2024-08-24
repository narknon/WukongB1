#pragma once
#include "CoreMinimal.h"
#include "EBGUInteractUnitState.generated.h"

UENUM(BlueprintType)
enum class EBGUInteractUnitState : uint8 {
    Default,
    BeforeInactive,
    BeforeActive,
    AfterInactive,
};

