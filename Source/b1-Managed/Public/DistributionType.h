#pragma once
#include "CoreMinimal.h"
#include "DistributionType.generated.h"

UENUM(BlueprintType)
enum class DistributionType : uint8 {
    SenderToAllMembers,
    SenderToOtherMembers,
};

