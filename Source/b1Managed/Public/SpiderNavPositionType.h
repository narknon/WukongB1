#pragma once
#include "CoreMinimal.h"
#include "SpiderNavPositionType.generated.h"

UENUM(BlueprintType)
enum class SpiderNavPositionType : uint8 {
    Ground,
    Wall,
};

