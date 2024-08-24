#pragma once
#include "CoreMinimal.h"
#include "DropReason.generated.h"

UENUM(BlueprintType)
enum class DropReason : uint8 {
    None,
    UnitDead,
    Collection,
    Destruction,
    Challenge,
    DropItemMgr,
};

