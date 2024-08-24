#pragma once
#include "CoreMinimal.h"
#include "JumpSectionCondition.generated.h"

UENUM(BlueprintType)
enum class JumpSectionCondition : uint8 {
    SceneItemNotFound,
    FindSceneItemsWithSkillID,
};

