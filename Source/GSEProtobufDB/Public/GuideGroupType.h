#pragma once
#include "CoreMinimal.h"
#include "GuideGroupType.generated.h"

UENUM(BlueprintType)
enum class GuideGroupType : uint8 {
    Normal,
    Task,
    Pause,
    Always,
};

