#pragma once
#include "CoreMinimal.h"
#include "AssociationUnitSpawnType.generated.h"

UENUM(BlueprintType)
enum class AssociationUnitSpawnType : uint8 {
    BySceneItem,
    ByEQS,
};

