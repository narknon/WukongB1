#pragma once
#include "CoreMinimal.h"
#include "FollowPartnerSpawnType.generated.h"

UENUM(BlueprintType)
enum class FollowPartnerSpawnType : uint8 {
    BySceneItem,
    ByEqs,
};

