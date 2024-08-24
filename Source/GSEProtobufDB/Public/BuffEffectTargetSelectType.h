#pragma once
#include "CoreMinimal.h"
#include "BuffEffectTargetSelectType.generated.h"

UENUM(BlueprintType)
enum class BuffEffectTargetSelectType : uint8 {
    BuffTarget,
    BuffOwner,
    Both,
};

