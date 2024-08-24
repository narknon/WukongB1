#pragma once
#include "CoreMinimal.h"
#include "GuideGroupFinishType.generated.h"

UENUM(BlueprintType)
enum class GuideGroupFinishType : uint8 {
    Confirm,
    CountDown,
    ChecklistCompleted,
};

