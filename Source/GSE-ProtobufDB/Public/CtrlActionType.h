#pragma once
#include "CoreMinimal.h"
#include "CtrlActionType.generated.h"

UENUM(BlueprintType)
enum class CtrlActionType : uint8 {
    CatNone,
    CatRunTrace,
    CatAttack,
    CatTooFar,
    CatMoveToCast,
};

