#pragma once
#include "CoreMinimal.h"
#include "EGsStreamingLevelState.generated.h"

UENUM(BlueprintType)
enum class EGsStreamingLevelState : uint8 {
    LoadedAndShown,
    Unloaded,
};

