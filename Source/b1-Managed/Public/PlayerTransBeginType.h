#pragma once
#include "CoreMinimal.h"
#include "PlayerTransBeginType.generated.h"

UENUM(BlueprintType)
enum class PlayerTransBeginType : uint8 {
    None,
    CastSpell,
    AddBuff,
    BianChan,
    Ride,
    ReadArchive,
    SkillEffect,
    Plot,
    RebirthPoint,
    Sequence,
};

