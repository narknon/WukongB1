#pragma once
#include "CoreMinimal.h"
#include "EFriendsStateType.generated.h"

UENUM(BlueprintType)
enum class EFriendsStateType : uint8 {
    Online,
    Offline,
    Away,
    ExtendedAway,
    DoNotDisturb,
    Chat,
};

