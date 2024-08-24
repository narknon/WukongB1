#pragma once
#include "CoreMinimal.h"
#include "BuffControlCondition.generated.h"

UENUM(BlueprintType)
enum class BuffControlCondition : uint8 {
    EnterCollisionArea,
    StayCollisionArea,
    LeaveCollisionArea,
};

