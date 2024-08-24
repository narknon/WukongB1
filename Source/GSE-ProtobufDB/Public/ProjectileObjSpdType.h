#pragma once
#include "CoreMinimal.h"
#include "ProjectileObjSpdType.generated.h"

UENUM(BlueprintType)
enum class ProjectileObjSpdType : uint8 {
    None,
    Normal,
    ByTime,
    CurveByTime,
    CurveByDist,
};

