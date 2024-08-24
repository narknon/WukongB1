#pragma once
#include "CoreMinimal.h"
#include "SceneObjTransitionEvent.generated.h"

UENUM(BlueprintType)
enum class SceneObjTransitionEvent : uint8 {
    OnSpawn,
    Eliminate,
    OnReset,
    NextState,
    JumpToState0,
    JumpToState1,
    JumpToState2,
    JumpToState3,
    JumpToState4,
    JumpToState5,
    JumpToState6,
};

