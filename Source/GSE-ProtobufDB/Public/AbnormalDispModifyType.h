#pragma once
#include "CoreMinimal.h"
#include "AbnormalDispModifyType.generated.h"

UENUM(BlueprintType)
enum class AbnormalDispModifyType : uint8 {
    None,
    Override,
    Modify,
};

