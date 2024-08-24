#pragma once
#include "CoreMinimal.h"
#include "ProjectileResetDirType.generated.h"

UENUM(BlueprintType)
enum class ProjectileResetDirType : uint8 {
    None,
    WorldSpace,
    CasterLocalSpace,
    CasterControllerLocalSpace,
    Fpstype,
    LookAtTarget,
};

