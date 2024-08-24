#pragma once
#include "CoreMinimal.h"
#include "GroupAIMoveType.generated.h"

UENUM(BlueprintType)
enum class GroupAIMoveType : uint8 {
    UseDefault,
    RunWithKeepFacingTarget,
    SprintWithNone,
    SprintWithKeepFacingTarget,
};

