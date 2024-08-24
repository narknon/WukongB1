#pragma once
#include "CoreMinimal.h"
#include "EAIBasicActionState.generated.h"

UENUM(BlueprintType)
enum class EAIBasicActionState : uint8 {
    None,
    Executing,
    Finish,
    ErrorRequestType,
    SkillNotFound,
    RequestNoFound,
    WaitingAbort,
    Aborted,
};

