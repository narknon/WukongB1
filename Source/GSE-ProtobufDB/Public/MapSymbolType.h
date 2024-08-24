#pragma once
#include "CoreMinimal.h"
#include "MapSymbolType.generated.h"

UENUM(BlueprintType)
enum class MapSymbolType : uint8 {
    Min,
    Stupa,
    GodTower,
    CaveEntrance,
    Challenge,
    StrongHold,
    Npc,
    MirageWorld,
    RebirthPoint,
};

