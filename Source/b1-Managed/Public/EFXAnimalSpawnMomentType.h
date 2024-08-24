#pragma once
#include "CoreMinimal.h"
#include "EFXAnimalSpawnMomentType.generated.h"

UENUM(BlueprintType)
enum class EFXAnimalSpawnMomentType : uint8 {
    SpawnAtBegin,
    SpawnAtEscape,
};

