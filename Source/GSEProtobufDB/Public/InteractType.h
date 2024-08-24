#pragma once
#include "CoreMinimal.h"
#include "InteractType.generated.h"

UENUM(BlueprintType)
enum class InteractType : uint8 {
    None,
    RebirthPoint,
    StandardObj,
    DropItem,
    TaskNpc,
    Rescue,
    Collection,
    MeditationPoint,
    BoLangGu,
    RequireItem,
    Focus,
    NotForPlayer,
    StrangeBox,
    Cricket,
    EnumMax,
};

