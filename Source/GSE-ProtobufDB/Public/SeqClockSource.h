#pragma once
#include "CoreMinimal.h"
#include "SeqClockSource.generated.h"

UENUM(BlueprintType)
enum class SeqClockSource : uint8 {
    Tick,
    Platform,
};

