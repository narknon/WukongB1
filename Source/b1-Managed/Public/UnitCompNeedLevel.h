#pragma once
#include "CoreMinimal.h"
#include "UnitCompNeedLevel.generated.h"

UENUM(BlueprintType)
enum class UnitCompNeedLevel : uint8 {
    Unused,
    DebugAndTest,
    OnlyTest,
    OnlyDebug,
    Alter,
    Need,
};

