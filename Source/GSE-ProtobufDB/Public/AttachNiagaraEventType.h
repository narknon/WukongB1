#pragma once
#include "CoreMinimal.h"
#include "AttachNiagaraEventType.generated.h"

UENUM(BlueprintType)
enum class AttachNiagaraEventType : uint8 {
    SpiderEggByDetonate,
    ExplosiveByDetonatel0,
    ExplosiveByDetonatel1,
    ExplosiveByDetonatel2,
    ExplosiveByDetonatel3,
    SpiderEggStandingByDetonateLevel0,
    SpiderEggStandingByDetonateLevel1,
    SpiderEggStandingByDetonateLevel2,
    SpiderEggStandingByDetonateLevel3,
    SpiderEggMaxLevelByDetonate,
};

