#pragma once
#include "CoreMinimal.h"
#include "EBGPTagTrigger.generated.h"

UENUM(BlueprintType)
enum class EBGPTagTrigger : uint8 {
    None,
    TransformBegin,
    TransformEnd,
    PauseEneryBegin,
    PauseEneryEnd,
    DisableTransformBegin,
    DisableTransformEnd,
    EnumMax,
};

