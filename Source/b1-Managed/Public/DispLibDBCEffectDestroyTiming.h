#pragma once
#include "CoreMinimal.h"
#include "DispLibDBCEffectDestroyTiming.generated.h"

UENUM(BlueprintType)
enum class DispLibDBCEffectDestroyTiming : uint8 {
    OnEndDispStageEnd,
    OnEndDispStageStart,
};

