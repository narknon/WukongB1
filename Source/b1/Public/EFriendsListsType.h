#pragma once
#include "CoreMinimal.h"
#include "EFriendsListsType.generated.h"

UENUM(BlueprintType)
enum EFriendsListsType {
    Default,
    OnlinePlayers,
    InGamePlayers,
    InGameAndSessionPlayers,
};

