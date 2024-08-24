#pragma once
#include "CoreMinimal.h"
#include "AreaUnitFilterType.generated.h"

UENUM(BlueprintType)
enum class AreaUnitFilterType : uint8 {
    All,
    Player,
    LocalPlayer,
    WukongOnly,
    SpecifiedResID,
    WukongTeam,
};

