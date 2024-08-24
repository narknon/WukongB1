#pragma once
#include "CoreMinimal.h"
#include "EPCGUnionType.generated.h"

UENUM(BlueprintType)
enum class EPCGUnionType : uint8 {
    LeftToRightPriority,
    RightToLeftPriority,
    KeepAll,
};

