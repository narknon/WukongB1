#pragma once
#include "CoreMinimal.h"
#include "MapSymbolActiveState.generated.h"

UENUM(BlueprintType)
enum class MapSymbolActiveState : uint8 {
    Normal,
    Disable,
    VisableNotHit,
};

