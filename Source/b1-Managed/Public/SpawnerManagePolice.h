#pragma once
#include "CoreMinimal.h"
#include "SpawnerManagePolice.generated.h"

UENUM(BlueprintType)
enum class SpawnerManagePolice : uint8 {
    SameAsPrevious,
    Auto,
    SameAsBattle,
    OnlyBeginSameAsBattle,
    OnlyEndSameAsBattle,
    Disable,
    BeginLikeStateEndLikeBattle,
};

