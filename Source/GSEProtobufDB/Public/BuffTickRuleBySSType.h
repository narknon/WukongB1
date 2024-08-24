#pragma once
#include "CoreMinimal.h"
#include "BuffTickRuleBySSType.generated.h"

UENUM(BlueprintType)
enum class BuffTickRuleBySSType : uint8 {
    None,
    BlackList,
    WhiteList,
};

