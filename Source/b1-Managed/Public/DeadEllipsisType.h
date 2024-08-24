#pragma once
#include "CoreMinimal.h"
#include "DeadEllipsisType.generated.h"

UENUM(BlueprintType)
enum class DeadEllipsisType : uint8 {
    None,
    NoAbnormalState,
    NoHitAction,
    NoAttackerArea,
    BothNoAttackerAreaNHitAction,
    NoGears,
    NoDepot,
};

