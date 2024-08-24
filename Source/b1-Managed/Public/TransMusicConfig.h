#pragma once
#include "CoreMinimal.h"
#include "TransMusicConfig.generated.h"

UENUM(BlueprintType)
enum class TransMusicConfig : uint8 {
    ByQuality,
    Enable,
    Disable,
};

