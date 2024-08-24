#pragma once
#include "CoreMinimal.h"
#include "MontageSectionJumpType.generated.h"

UENUM(BlueprintType)
enum class MontageSectionJumpType : uint8 {
    None,
    AnimationSyncing,
};

