#pragma once
#include "CoreMinimal.h"
#include "ScrollConsumeType.generated.h"

UENUM(BlueprintType)
enum class ScrollConsumeType : uint8 {
    Normal,
    NotConsumed,
    CanScroll,
};

