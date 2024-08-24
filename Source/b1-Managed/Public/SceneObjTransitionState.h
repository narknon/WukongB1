#pragma once
#include "CoreMinimal.h"
#include "SceneObjTransitionState.generated.h"

UENUM(BlueprintType)
enum class SceneObjTransitionState : uint8 {
    State0,
    State1,
    State2,
    State3,
    State4,
    State5,
    State6,
    Eliminated,
};

