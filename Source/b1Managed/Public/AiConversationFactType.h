#pragma once
#include "CoreMinimal.h"
#include "AiConversationFactType.generated.h"

UENUM(BlueprintType)
enum class AiConversationFactType : uint8 {
    FactType_Int,
    FactType_Bool,
    FactType_String,
};

