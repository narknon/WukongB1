#pragma once
#include "CoreMinimal.h"
#include "ProjectilePosOffsetSpace.generated.h"

UENUM(BlueprintType)
enum class ProjectilePosOffsetSpace : uint8 {
    WorldSpace,
    BaseActorLocalSpace,
    SocketLocalSpace,
};

