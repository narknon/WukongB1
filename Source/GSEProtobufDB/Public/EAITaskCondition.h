#pragma once
#include "CoreMinimal.h"
#include "EAITaskCondition.generated.h"

UENUM(BlueprintType)
enum class EAITaskCondition : uint8 {
    None,
    SelfHpLessThan,
    TargetHpLessThan,
    SelfHasBuff,
    TargetHasBuff,
};

