#pragma once
#include "CoreMinimal.h"
#include "EGSEnvContextBase.generated.h"

UENUM(BlueprintType)
enum class EGSEnvContextBase : uint8 {
    Querier,
    Player,
    PlayerCamera,
    SceneItemByTag,
    Target,
    CustomActor,
};

