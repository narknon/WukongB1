#pragma once
#include "CoreMinimal.h"
#include "HitSlowResumeType.generated.h"

UENUM(BlueprintType)
enum class HitSlowResumeType : uint8 {
    Linear,
    EaseIn,
    EaseOut,
    EnumMax,
};

