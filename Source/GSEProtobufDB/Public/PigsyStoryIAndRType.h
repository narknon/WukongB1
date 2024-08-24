#pragma once
#include "CoreMinimal.h"
#include "PigsyStoryIAndRType.generated.h"

UENUM(BlueprintType)
enum class PigsyStoryIAndRType : uint8 {
    None,
    ResumeDefault,
    InterruptIntoBattle,
    InterruptInteractWithNpc,
    InterruptPlayerMoveOverDist,
    InterruptBajieInteractWait,
};

