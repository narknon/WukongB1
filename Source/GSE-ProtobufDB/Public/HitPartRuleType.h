#pragma once
#include "CoreMinimal.h"
#include "HitPartRuleType.generated.h"

UENUM(BlueprintType)
enum class HitPartRuleType : uint8 {
    ByPa,
    ByDir,
    ByExclude,
};

