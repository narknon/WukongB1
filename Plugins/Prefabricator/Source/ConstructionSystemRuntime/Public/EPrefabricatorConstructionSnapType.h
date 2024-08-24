#pragma once
#include "CoreMinimal.h"
#include "EPrefabricatorConstructionSnapType.generated.h"

UENUM(BlueprintType)
enum class EPrefabricatorConstructionSnapType : uint8 {
    Floor,
    Wall,
    Object,
};

