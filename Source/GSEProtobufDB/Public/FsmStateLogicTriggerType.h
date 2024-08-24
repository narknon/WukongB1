#pragma once
#include "CoreMinimal.h"
#include "FsmStateLogicTriggerType.generated.h"

UENUM(BlueprintType)
enum class FsmStateLogicTriggerType : uint8 {
    Auto,
    Disable,
};

