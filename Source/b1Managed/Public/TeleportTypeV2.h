#pragma once
#include "CoreMinimal.h"
#include "TeleportTypeV2.generated.h"

UENUM(BlueprintType)
enum class TeleportTypeV2 : uint8 {
    SimpleLevelIdAndTransform,
    RebirthPoint,
    TeleportNamedPoint,
    Dream,
    NextChapter,
    RebirthPointTeleportOnly,
    PrologueCompleted,
};

