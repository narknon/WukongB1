#pragma once
#include "CoreMinimal.h"
#include "SkillIDSource.generated.h"

UENUM(BlueprintType)
enum class SkillIDSource : uint8 {
    Custom,
    FromSceneItem,
};

