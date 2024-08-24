#pragma once
#include "CoreMinimal.h"
#include "SkillsRefWhiteListType.generated.h"

UENUM(BlueprintType)
enum class SkillsRefWhiteListType : uint8 {
    Ignore,
    Delay,
};

