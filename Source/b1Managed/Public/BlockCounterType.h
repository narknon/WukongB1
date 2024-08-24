#pragma once
#include "CoreMinimal.h"
#include "BlockCounterType.generated.h"

UENUM(BlueprintType)
enum class BlockCounterType : uint8 {
    AddCountAfterBounced,
    AddCountAfterBlock,
};

