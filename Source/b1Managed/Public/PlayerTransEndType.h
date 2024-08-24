#pragma once
#include "CoreMinimal.h"
#include "PlayerTransEndType.generated.h"

UENUM(BlueprintType)
enum class PlayerTransEndType : uint8 {
    None,
    CastSpell,
    ManualEndRide,
    BeatBack,
    EnergyEmpty,
    RebirthTransBack,
    CPGTransBack,
    HpTransBack,
    Simplestate,
    CantRide,
    CantTrans,
    Buff,
    TriggerBoxForceTransBack,
    SkillEffect,
    CMGTransBack,
    SettingransBack,
    Plot,
};

