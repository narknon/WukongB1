#pragma once
#include "CoreMinimal.h"
#include "ChallengeDifficulty.generated.h"

UENUM(BlueprintType)
enum class ChallengeDifficulty : uint8 {
    Min,
    Easy,
    Normal,
    Hard,
};

