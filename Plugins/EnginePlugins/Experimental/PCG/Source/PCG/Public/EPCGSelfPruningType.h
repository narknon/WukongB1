#pragma once
#include "CoreMinimal.h"
#include "EPCGSelfPruningType.generated.h"

UENUM(BlueprintType)
enum class EPCGSelfPruningType : uint8 {
    LargeToSmall,
    SmallToLarge,
    AllEqual,
    None,
    RemoveDuplicates,
};

