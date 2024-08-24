#pragma once
#include "CoreMinimal.h"
#include "MapSymbolState.generated.h"

UENUM(BlueprintType)
enum class MapSymbolState : uint8 {
    Hidden,
    Incompelte,
    Compelte,
    Unexplored,
};

