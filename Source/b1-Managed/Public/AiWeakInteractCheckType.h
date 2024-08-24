#pragma once
#include "CoreMinimal.h"
#include "AiWeakInteractCheckType.generated.h"

UENUM(BlueprintType)
enum class AiWeakInteractCheckType : uint8 {
    BothPlayerAndFollowPartner,
    OnlyFollowPartner,
};

