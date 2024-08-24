#pragma once
#include "CoreMinimal.h"
#include "EOnlinePresenceStateType.generated.h"

UENUM(BlueprintType)
enum class EOnlinePresenceStateType : uint8 {
    Online,
    Offline,
    Away,
    ExtendedAway,
    DoNotDisturb,
    Chat,
};

