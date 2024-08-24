#pragma once
#include "CoreMinimal.h"
#include "SkillSelectReleaseType.generated.h"

UENUM(BlueprintType)
enum class SkillSelectReleaseType : uint8 {
    None,
    StartRelease,
    StartSelectEndRelease,
    EndRelease,
    StartSelectStartRelease,
    EndSelectEndRelease,
};

