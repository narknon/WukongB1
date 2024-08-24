#pragma once
#include "CoreMinimal.h"
#include "EBGUBulletDispReason.generated.h"

UENUM(BlueprintType)
enum class EBGUBulletDispReason : uint8 {
    None,
    Spawn,
    HitChr,
    HitSceneItem,
    LifeOver,
    BeHit,
};

