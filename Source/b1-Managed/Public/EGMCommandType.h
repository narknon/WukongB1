#pragma once
#include "CoreMinimal.h"
#include "EGMCommandType.generated.h"

UENUM(BlueprintType)
enum class EGMCommandType : uint8 {
    None,
    ShowBattleUI,
    EnableEnemyBar,
    Invincible,
    LockHP,
    LockStamina,
    Invisible,
    LockEnemyHP,
    CancelEnemyCD,
    ToggleAllEnemyAI,
    Lock60FPS,
    VSync,
    EnumMax,
};

