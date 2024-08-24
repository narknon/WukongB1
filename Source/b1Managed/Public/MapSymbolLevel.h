#pragma once
#include "CoreMinimal.h"
#include "MapSymbolLevel.generated.h"

UENUM(BlueprintType)
enum class MapSymbolLevel : uint8 {
    EnumMin,
    CrossFocus,
    Player,
    Npc,
    RebirthPoint,
    Stupa,
    GodTower,
    StrongHold,
    CaveEntrance,
    Challenge,
    Desc,
    EnumMax,
};

