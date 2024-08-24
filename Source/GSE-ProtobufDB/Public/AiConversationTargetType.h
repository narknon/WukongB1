#pragma once
#include "CoreMinimal.h"
#include "AiConversationTargetType.generated.h"

UENUM(BlueprintType)
enum class AiConversationTargetType : uint8 {
    None,
    Self,
    CurTarget,
    ByGuid,
    LocalPlayer,
    ByTag,
    EventCaster,
    Narrator,
};

