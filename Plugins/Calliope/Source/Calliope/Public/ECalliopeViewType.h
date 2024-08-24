#pragma once
#include "CoreMinimal.h"
#include "ECalliopeViewType.generated.h"

UENUM(BlueprintType)
enum class ECalliopeViewType : uint8 {
    None,
    Quest,
    Combo,
    State,
    Behavior,
    Skill,
    Movie,
    Process,
    Task,
    FSM,
    Dialogue,
    Guide,
    Max,
};

