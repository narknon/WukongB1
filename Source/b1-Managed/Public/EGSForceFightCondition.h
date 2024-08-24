#pragma once
#include "CoreMinimal.h"
#include "EGSForceFightCondition.generated.h"

UENUM(BlueprintType)
enum class EGSForceFightCondition : uint8 {
    EnterCollisionArea,
    LeaveCollisionArea,
    ObserveUnitsConditions,
};

