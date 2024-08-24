#pragma once
#include "CoreMinimal.h"
#include "MovieTriggerType.generated.h"

UENUM(BlueprintType)
enum class MovieTriggerType : uint8 {
    None,
    Overlap,
    Interactor,
    Unit,
    NPC,
    Spawner,
    TaskStage,
};

