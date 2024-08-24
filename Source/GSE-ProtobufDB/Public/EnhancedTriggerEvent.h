#pragma once
#include "CoreMinimal.h"
#include "EnhancedTriggerEvent.generated.h"

UENUM(BlueprintType)
enum class EnhancedTriggerEvent : uint8 {
    None,
    Triggered,
    Started,
    Ongoing,
    Canceled,
    Completed,
};

