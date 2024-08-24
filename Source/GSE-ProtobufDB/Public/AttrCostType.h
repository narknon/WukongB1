#pragma once
#include "CoreMinimal.h"
#include "AttrCostType.generated.h"

UENUM(BlueprintType)
enum class AttrCostType : uint8 {
    None,
    Hp,
    Mp,
    Stamina,
    BloodBottleNum,
    SpecialEnergy,
    PotentialEnergy,
    TransEnergy,
    FabaoEnergy,
    VigorEnergy,
};

