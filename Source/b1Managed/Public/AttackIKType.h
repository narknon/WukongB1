#pragma once
#include "CoreMinimal.h"
#include "AttackIKType.generated.h"

UENUM(BlueprintType)
enum class AttackIKType : uint8 {
    None,
    TerrainSlope,
    AvatarBonePitchOnly,
    AvatarBoneRollOnly,
    FishSpike,
    AvatarLockPointPitch,
};

