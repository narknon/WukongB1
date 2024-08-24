#pragma once
#include "CoreMinimal.h"
#include "ProjectileBornDirType.generated.h"

UENUM(BlueprintType)
enum class ProjectileBornDirType : uint8 {
    None,
    UseSlotDir,
    LookAtTargetPos,
    XYLineFromOwner,
    UseEffectNormal,
    BaseActorRot,
    UsePointSetCached,
    UseEffectCasterRot,
    LineFromSpawner,
};

