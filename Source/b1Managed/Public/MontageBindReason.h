#pragma once
#include "CoreMinimal.h"
#include "MontageBindReason.generated.h"

UENUM(BlueprintType)
enum class MontageBindReason : uint8 {
    Default,
    NormalSkill,
    MagicallyChange,
    ChargeSkill,
    ManualSplineMove,
    FollowPartnerIdleDodge,
    FollowPartnerIdleWaiting,
    Patrol,
    SummonBehavior,
    Born,
    LifeSavingHairPrepare,
    LifeSavingHair,
    EngageSkill,
    InteractCricket,
    Interact,
};

