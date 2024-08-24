#pragma once
#include "CoreMinimal.h"
#include "NeutralAnimalType.generated.h"

UENUM(BlueprintType)
enum class NeutralAnimalType : uint8 {
    None,
    Battle,
    Escape,
};

