#pragma once
#include "CoreMinimal.h"
#include "PlayType.generated.h"

UENUM(BlueprintType)
enum class PlayType : uint8 {
    None,
    Once,
    Loop,
};

