#pragma once
#include "CoreMinimal.h"
#include "CharacterSlopeAlignType.generated.h"

UENUM(BlueprintType)
enum class CharacterSlopeAlignType : uint8 {
    None,
    AOPlan,
    RotWholeBodyPlan,
};

