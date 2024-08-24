#pragma once
#include "CoreMinimal.h"
#include "AbnromalDispActionType.generated.h"

UENUM(BlueprintType)
enum class AbnromalDispActionType : uint8 {
    AccProcess,
    FinalBegin,
    FinalLoop,
    HitExt,
    DeadKeep,
    DeadDisappear,
};

