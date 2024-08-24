#pragma once
#include "CoreMinimal.h"
#include "AnimalSpawnPosType.generated.h"

UENUM(BlueprintType)
enum class AnimalSpawnPosType : uint8 {
    EQS_Runtime,
    PresetPointset,
};

