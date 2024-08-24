#pragma once
#include "CoreMinimal.h"
#include "EAISearchTargetWay.generated.h"

UENUM(BlueprintType)
enum class EAISearchTargetWay : uint8 {
    FindTargetNearest,
    FindTargetFurthest,
    FindTargetByHatred,
};

