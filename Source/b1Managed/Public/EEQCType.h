#pragma once
#include "CoreMinimal.h"
#include "EEQCType.generated.h"

UENUM(BlueprintType)
enum class EEQCType : uint8 {
    None,
    Target,
    Player,
    Querier,
};

