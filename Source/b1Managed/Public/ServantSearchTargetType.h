#pragma once
#include "CoreMinimal.h"
#include "ServantSearchTargetType.generated.h"

UENUM(BlueprintType)
enum class ServantSearchTargetType : uint8 {
    None,
    CatchPlayer,
    SyncMaster,
    ByPerception,
    SyncSummoner,
};

