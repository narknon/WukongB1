#pragma once
#include "CoreMinimal.h"
#include "GateStateMachineType.generated.h"

UENUM(BlueprintType)
enum class GateStateMachineType : uint8 {
    None,
    Destructible,
};

