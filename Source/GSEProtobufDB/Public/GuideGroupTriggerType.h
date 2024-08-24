#pragma once
#include "CoreMinimal.h"
#include "GuideGroupTriggerType.generated.h"

UENUM(BlueprintType)
enum class GuideGroupTriggerType : uint8 {
    ObtainItem,
    CountDown,
    ChecklistCompleted,
};

