#pragma once
#include "CoreMinimal.h"
#include "GlideMoveAnimState.generated.h"

UENUM(BlueprintType)
enum class GlideMoveAnimState : uint8 {
    None,
    GlideStart,
    GlideLoop,
    GlideEnd,
};

