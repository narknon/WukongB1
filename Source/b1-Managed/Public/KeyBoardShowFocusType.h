#pragma once
#include "CoreMinimal.h"
#include "KeyBoardShowFocusType.generated.h"

UENUM(BlueprintType)
enum class KeyBoardShowFocusType : uint8 {
    Hide,
    OnlyHover,
    Always,
};

