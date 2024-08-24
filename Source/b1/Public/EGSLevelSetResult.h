#pragma once
#include "CoreMinimal.h"
#include "EGSLevelSetResult.generated.h"

UENUM(BlueprintType)
enum class EGSLevelSetResult : uint8 {
    Success,
    RefusedByVolume,
    LevelNotFound,
    NullPtrParam,
    WorldTypeError,
    UnnecessaryUnload,
    BlockedByHotLevelStreaming,
    UnknownError,
};

