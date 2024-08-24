#pragma once
#include "CoreMinimal.h"
#include "MatSyncType.generated.h"

UENUM(BlueprintType)
enum class MatSyncType : uint8 {
    UnSync,
    SyncMainTex,
    SyncTierState,
    SyncPercent,
    SyncMainTexAndTier,
    SyncAllQuick,
    SyncAll,
};

