#pragma once
#include "CoreMinimal.h"
#include "PillarFormTerminatorType.generated.h"

UENUM(BlueprintType)
enum class PillarFormTerminatorType : uint8 {
    None,
    ClearStamina,
    BreakPillarForm,
};

