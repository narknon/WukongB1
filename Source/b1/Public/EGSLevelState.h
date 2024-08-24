#pragma once
#include "CoreMinimal.h"
#include "EGSLevelState.generated.h"

UENUM(BlueprintType)
enum class EGSLevelState : uint8 {
    Auto,
    LoadedVisible,
    LoadedInvisible,
    Unloaded,
};

