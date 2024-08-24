#pragma once
#include "CoreMinimal.h"
#include "WarnStateBlock.generated.h"

UENUM(BlueprintType)
enum class WarnStateBlock : uint8 {
    UnBlock,
    BlockOnce,
    BlockState,
    BlockAll,
    EnumMax,
};

