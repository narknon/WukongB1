#pragma once
#include "CoreMinimal.h"
#include "CollisionBodyType.generated.h"

UENUM(BlueprintType)
enum class CollisionBodyType : uint8 {
    CollisionBody_CapsuleComp = 1,
    CollisionBody_SkeletalMeshComp,
};

