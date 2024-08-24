#pragma once
#include "CoreMinimal.h"
#include "EBGMPriority.generated.h"

UENUM(BlueprintType)
enum class EBGMPriority : uint8 {
    BossBattleBGM,
    EliteBattleBGM,
    MonsterBattleBGM,
    WanderBGM,
};

