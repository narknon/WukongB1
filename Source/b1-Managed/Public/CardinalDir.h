#pragma once
#include "CoreMinimal.h"
#include "CardinalDir.generated.h"

UENUM(BlueprintType)
enum class CardinalDir : uint8 {
    Default,
    E,
    S,
    W,
};

