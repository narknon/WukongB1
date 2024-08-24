#pragma once
#include "CoreMinimal.h"
#include "SequenceType.generated.h"

UENUM(BlueprintType)
enum class SequenceType : uint8 {
    None,
    StorySequence,
    InteractorSequence,
};

