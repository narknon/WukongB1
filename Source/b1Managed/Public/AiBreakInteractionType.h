#pragma once
#include "CoreMinimal.h"
#include "AiBreakInteractionType.generated.h"

UENUM(BlueprintType)
enum class AiBreakInteractionType : uint8 {
    Battle,
    PlayerFaraway,
    PlayerLeaveInteractArea,
    Other,
};

