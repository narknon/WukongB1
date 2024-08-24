#pragma once
#include "CoreMinimal.h"
#include "TriggerEventReturnType.generated.h"

UENUM(BlueprintType)
enum class TriggerEventReturnType : uint8 {
    NotTriggered,
    TriggerSucceeded,
    TriggerFailed,
};

