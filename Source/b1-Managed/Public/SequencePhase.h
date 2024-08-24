#pragma once
#include "CoreMinimal.h"
#include "SequencePhase.generated.h"

UENUM(BlueprintType)
enum class SequencePhase : uint8 {
    None,
    Started,
    Finished,
};

