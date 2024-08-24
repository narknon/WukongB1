#pragma once
#include "CoreMinimal.h"
#include "EBGUBulletDestroyReason.generated.h"

UENUM(BlueprintType)
enum class EBGUBulletDestroyReason : uint8 {
    None,
    HitItemDestroy,
    HitCharacterDestroy,
    TimeOutDestroy,
    SpeedLowDestroy,
    FlyBackDestroy,
    FarthestDistOutDestroy,
    EffectDestroy,
    AttachedParentNotValid,
    LevelSequenceDestroy,
};

