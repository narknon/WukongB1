#pragma once
#include "CoreMinimal.h"
#include "DefeatUITriggerType.generated.h"

UENUM(BlueprintType)
enum class DefeatUITriggerType : uint8 {
    None,
    Dead,
    Seq,
    Cpg,
};

