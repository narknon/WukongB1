#pragma once
#include "CoreMinimal.h"
#include "SkillCameraRotationType.generated.h"

UENUM(BlueprintType)
enum class SkillCameraRotationType : uint8 {
    UseUnitRotation,
    UseControllerRotation,
};

