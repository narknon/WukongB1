#pragma once
#include "CoreMinimal.h"
#include "EBGUBulletRecoveryMode.generated.h"

UENUM(BlueprintType)
enum class EBGUBulletRecoveryMode : uint8 {
    HitDestroy,
    FlyBackByTime,
    HitNotDestroy,
    EnumMax,
};

