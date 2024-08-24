#pragma once
#include "CoreMinimal.h"
#include "EndCreditsPageAction.generated.h"

UENUM(BlueprintType)
enum class EndCreditsPageAction : uint8 {
    Anim,
    AnimAndScroll,
    Scroll,
    SwitchSpeedScroll,
    ScrollAnimEnd,
};

