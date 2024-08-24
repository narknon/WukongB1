#pragma once
#include "CoreMinimal.h"
#include "EGSDestructibleModifyType.generated.h"

UENUM(BlueprintType)
enum class EGSDestructibleModifyType : uint8 {
    Break,
    Modify,
};

