#pragma once
#include "CoreMinimal.h"
#include "FsmMoveLogicType.generated.h"

UENUM(BlueprintType)
enum class FsmMoveLogicType : uint8 {
    Auto,
    NoMove,
};

