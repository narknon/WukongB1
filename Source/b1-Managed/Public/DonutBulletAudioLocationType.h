#pragma once
#include "CoreMinimal.h"
#include "DonutBulletAudioLocationType.generated.h"

UENUM(BlueprintType)
enum class DonutBulletAudioLocationType : uint8 {
    None,
    InnerBorder,
    OuterBorder,
    Between,
};

