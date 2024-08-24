#pragma once
#include "CoreMinimal.h"
#include "PartnerAssistState.generated.h"

UENUM(BlueprintType)
enum class PartnerAssistState : uint8 {
    None,
    PassiveWithOutAtk,
    Passive,
    Active,
};

