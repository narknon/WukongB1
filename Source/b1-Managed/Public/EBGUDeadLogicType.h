#pragma once
#include "CoreMinimal.h"
#include "EBGUDeadLogicType.generated.h"

UENUM(BlueprintType)
enum class EBGUDeadLogicType : uint8 {
    None,
    Normal,
    FlyByPhysical,
    AI,
    Sequence,
};

