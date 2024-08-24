#pragma once
#include "CoreMinimal.h"
#include "EJavascriptSizingRule.generated.h"

UENUM(BlueprintType)
enum class EJavascriptSizingRule : uint8 {
    FixedSize,
    Autosized,
    UserSized,
};

