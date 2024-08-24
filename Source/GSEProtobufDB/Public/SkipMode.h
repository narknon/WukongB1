#pragma once
#include "CoreMinimal.h"
#include "SkipMode.generated.h"

UENUM(BlueprintType)
enum class SkipMode : uint8 {
    None,
    Press,
    LongPress,
};

