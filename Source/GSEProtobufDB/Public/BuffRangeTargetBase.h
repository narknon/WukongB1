#pragma once
#include "CoreMinimal.h"
#include "BuffRangeTargetBase.generated.h"

UENUM(BlueprintType)
enum class BuffRangeTargetBase : uint8 {
    RootCaster,
    Caster,
    Owner,
};

