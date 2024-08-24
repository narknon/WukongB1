#pragma once
#include "CoreMinimal.h"
#include "ContinueBehaviorType.generated.h"

UENUM(BlueprintType)
enum class ContinueBehaviorType : uint8 {
    None,
    Skill,
    Beatback,
    AnimationSyncing,
};

