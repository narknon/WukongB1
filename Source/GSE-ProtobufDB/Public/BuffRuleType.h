#pragma once
#include "CoreMinimal.h"
#include "BuffRuleType.generated.h"

UENUM(BlueprintType)
enum class BuffRuleType : uint8 {
    BuffRuleNone,
    BrReplace,
    BrExclude,
    BrCoexist,
    BrCompose,
    BrPrecondition,
};

