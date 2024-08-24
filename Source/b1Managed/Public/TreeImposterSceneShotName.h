#pragma once
#include "CoreMinimal.h"
#include "TreeImposterSceneShotName.generated.h"

UENUM(BlueprintType)
enum class TreeImposterSceneShotName : uint8 {
    BaseColor,
    NormalWS,
    Specular,
    Roughness,
    OpacityMask,
};

