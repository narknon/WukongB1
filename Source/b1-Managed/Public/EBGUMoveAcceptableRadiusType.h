#pragma once
#include "CoreMinimal.h"
#include "EBGUMoveAcceptableRadiusType.generated.h"

UENUM(BlueprintType)
enum class EBGUMoveAcceptableRadiusType : uint8 {
    NoInclude,
    IncludeSelf,
    IncludeTarget,
    BothIncludeSelfAndTarget,
};

