#pragma once
#include "CoreMinimal.h"
#include "Birth_AbnormalStateImmueType.generated.h"

UENUM(BlueprintType)
enum class Birth_AbnormalStateImmueType : uint8 {
    None,
    FreezeImmue,
    BurnImmue,
    PoisonImmue,
    ThunderImmue,
};

