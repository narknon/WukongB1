#pragma once
#include "CoreMinimal.h"
#include "PostProcessSource.generated.h"

UENUM(BlueprintType)
enum class PostProcessSource : uint8 {
    None,
    Buff,
    AnimNotify,
    ReservedAfterReset,
    IntervalTrigger,
};

