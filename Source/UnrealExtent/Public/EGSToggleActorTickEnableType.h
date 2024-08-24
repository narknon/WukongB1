#pragma once
#include "CoreMinimal.h"
#include "EGSToggleActorTickEnableType.generated.h"

UENUM(BlueprintType)
enum class EGSToggleActorTickEnableType : uint8 {
    ActorTick,
    MoveComp,
    SKMeshComp,
    AkComp,
    AIComp,
    INCLUDE_CHILD_ACTOR,
};

