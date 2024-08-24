#pragma once
#include "CoreMinimal.h"
#include "SmartSelectTargetType.generated.h"

UENUM(BlueprintType)
enum class SmartSelectTargetType : uint8 {
    None,
    SstSimple,
    SstQuality,
    SstSelf,
    SstQuantity,
    SstElite,
    SstSame,
    SstMeleeAutoLock,
    SstCameraLock,
};

