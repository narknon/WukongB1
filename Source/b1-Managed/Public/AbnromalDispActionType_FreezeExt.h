#pragma once
#include "CoreMinimal.h"
#include "AbnromalDispActionType_FreezeExt.generated.h"

UENUM(BlueprintType)
enum class AbnromalDispActionType_FreezeExt : uint8 {
    Broken,
    AutoRelease,
    ShakeFreeze,
};

