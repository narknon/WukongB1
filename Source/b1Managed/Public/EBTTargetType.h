#pragma once
#include "CoreMinimal.h"
#include "EBTTargetType.generated.h"

UENUM(BlueprintType)
enum class EBTTargetType : uint8 {
    Target,
    Player,
    SceneItem,
    Location,
    AlignToCamFwd,
    None,
};

