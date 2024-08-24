#pragma once
#include "CoreMinimal.h"
#include "InputMappingContextMode.generated.h"

UENUM(BlueprintType)
enum class InputMappingContextMode : uint8 {
    UIOnly,
    GameOnly,
    UIAndGame,
    Replay,
    All,
};

