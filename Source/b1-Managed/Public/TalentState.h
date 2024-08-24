#pragma once
#include "CoreMinimal.h"
#include "TalentState.generated.h"

UENUM(BlueprintType)
enum class TalentState : uint8 {
    NotLearn,
    HasLearn,
    MaxLearn,
};

