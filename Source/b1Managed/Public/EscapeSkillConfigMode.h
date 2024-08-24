#pragma once
#include "CoreMinimal.h"
#include "EscapeSkillConfigMode.generated.h"

UENUM(BlueprintType)
enum class EscapeSkillConfigMode : uint8 {
    None,
    Single,
    Multiple,
    FromSceneItem,
};

