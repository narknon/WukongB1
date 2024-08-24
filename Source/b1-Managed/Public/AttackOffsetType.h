#pragma once
#include "CoreMinimal.h"
#include "AttackOffsetType.generated.h"

UENUM(BlueprintType)
enum class AttackOffsetType : uint8 {
    AttackOffset_None,
    AttackOffset_WorldRotOffset,
};

