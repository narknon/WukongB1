#pragma once
#include "CoreMinimal.h"
#include "TriggerType2.generated.h"

UENUM(BlueprintType)
enum class TriggerType : uint8 {
    None,
    Interact,
    Overlap,
    CharacterState,
    CharacterAttr,
    CircleRangeCharacterDie,
};

