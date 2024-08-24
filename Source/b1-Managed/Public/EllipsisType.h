#pragma once
#include "CoreMinimal.h"
#include "EllipsisType.generated.h"

UENUM(BlueprintType)
enum class EllipsisType : uint8 {
    None,
    NoHitAction,
    NoAttackerArea,
    BothNoAttackerAreaNHitAction,
    NoGears,
    NoDepot,
};

