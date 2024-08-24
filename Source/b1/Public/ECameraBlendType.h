#pragma once
#include "CoreMinimal.h"
#include "ECameraBlendType.generated.h"

UENUM(BlueprintType)
enum class ECameraBlendType : uint8 {
    None,
    BlendBySpeed,
    BlendByTime,
    MAX = 255,
};

