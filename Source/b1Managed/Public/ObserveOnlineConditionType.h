#pragma once
#include "CoreMinimal.h"
#include "ObserveOnlineConditionType.generated.h"

UENUM(BlueprintType)
enum class ObserveOnlineConditionType : uint8 {
    None,
    PlayerCountInRange,
    PlayerEnterBossTraceArea,
    KillMonsterNumber,
    GainItemCumulative,
    AwardCount,
    EnumMax,
};

