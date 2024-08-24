#pragma once
#include "CoreMinimal.h"
#include "EBGUEQCQueryType.generated.h"

UENUM(BlueprintType)
enum class EBGUEQCQueryType : uint8 {
    None,
    SingleActor,
    SingleLocation,
    ActorSet,
    LocationSet,
};

