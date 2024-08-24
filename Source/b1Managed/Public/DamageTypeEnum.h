#pragma once
#include "CoreMinimal.h"
#include "DamageTypeEnum.generated.h"

UENUM(BlueprintType)
enum class DamageTypeEnum : uint8 {
    NONE,
    PLAYER_DMG,
    PLAYER_DMG_CRIT,
    PLAYER_DMG_FREEZE,
    PLAYER_DMG_BURN,
    PLAYER_DMG_POSITION,
    PLAYER_DMG_THUNDER,
    PLAYER_MISS,
    PLAYER_HEAL,
    ENEMY_DMG,
    ENEMY_DMG_CRIT,
    ENEMY_DMG_FREEZE,
    ENEMY_DMG_BURN,
    ENEMY_DMG_POSITION,
    ENEMY_DMG_THUNDER,
    ENEMY_MISS,
    ENEMY_HEAL,
    All,
};

