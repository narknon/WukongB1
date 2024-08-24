#pragma once
#include "CoreMinimal.h"
#include "ProjectilePosOffsetType.generated.h"

UENUM(BlueprintType)
enum class ProjectilePosOffsetType : uint8 {
    None,
    Normal,
    RangeOffset,
    RandomOffset,
};

