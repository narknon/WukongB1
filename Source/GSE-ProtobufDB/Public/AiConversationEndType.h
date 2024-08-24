#pragma once
#include "CoreMinimal.h"
#include "AiConversationEndType.generated.h"

UENUM(BlueprintType)
enum class AiConversationEndType : uint8 {
    None,
    Manual,
    AkEnded,
    AmEnded,
};

