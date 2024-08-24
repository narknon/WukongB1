#pragma once
#include "CoreMinimal.h"
#include "EVolumeStreamingMethod.generated.h"

UENUM(BlueprintType)
enum EVolumeStreamingMethod {
    StreamingLevel,
    WorldCompositionGroup,
    WorldPartition,
};

