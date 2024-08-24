#pragma once
#include "CoreMinimal.h"
#include "UnitAIDetourCrowdType.generated.h"

UENUM(BlueprintType)
enum class UnitAIDetourCrowdType : uint8 {
    None,
    Low100Detect,
    Low500Detect,
    Low,
    Medium,
    MediumDetectLightAvoidence,
    FarDetect,
    FarDetectLightAvoidence,
    MediumDectectHeavyAvoidence,
    MediumHighQuality,
    EnumMax = 255,
};

