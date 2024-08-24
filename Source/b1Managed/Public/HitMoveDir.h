#pragma once
#include "CoreMinimal.h"
#include "HitMoveDir.generated.h"

UENUM(BlueprintType)
enum class HitMoveDir : uint8 {
    Default,
    XAxisHitMove,
    YAxisHitMove,
};

