#pragma once
#include "CoreMinimal.h"
#include "TriggerType.generated.h"

UENUM(BlueprintType)
enum class TriggerType : uint8 {
    item,
    axis,
};

