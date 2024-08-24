#pragma once
#include "CoreMinimal.h"
#include "JumpType.generated.h"

UENUM(BlueprintType)
enum class JumpType : uint8 {
    None,
    Normal,
    GlideJump,
    StrideJump,
};

