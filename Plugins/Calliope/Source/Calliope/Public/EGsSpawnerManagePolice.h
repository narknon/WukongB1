#pragma once
#include "CoreMinimal.h"
#include "EGsSpawnerManagePolice.generated.h"

UENUM(BlueprintType)
enum class EGsSpawnerManagePolice : uint8 {
    SameAsPrevious,
    Auto,
    SameAsBattle,
    OnlyBeginSameAsBattle,
    OnlyEndSameAsBattle,
    Disable,
    BeginLikeStateEndLikeBattle,
};

