#pragma once
#include "CoreMinimal.h"
#include "EBGMDisableType.generated.h"

UENUM(BlueprintType)
enum class EBGMDisableType : uint8 {
    None,
    BossBattleBGM,
    EliteBattleBGM,
    MonsterBattleBGM,
    WanderBGM,
    TransMusic = 32,
};

