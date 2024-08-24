#pragma once
#include "CoreMinimal.h"
#include "EBGMVolumeConditionType.generated.h"

UENUM(BlueprintType)
enum class EBGMVolumeConditionType : uint8 {
    None,
    UnitAlive,
    UnitInBattle,
    IntervalTriggerActive,
};

