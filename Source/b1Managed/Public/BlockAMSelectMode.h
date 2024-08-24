#pragma once
#include "CoreMinimal.h"
#include "BlockAMSelectMode.generated.h"

UENUM(BlueprintType)
enum class BlockAMSelectMode : uint8 {
    SequenceSelectMode,
    RandomSelectMode,
};

