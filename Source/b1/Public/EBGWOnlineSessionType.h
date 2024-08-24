#pragma once
#include "CoreMinimal.h"
#include "EBGWOnlineSessionType.generated.h"

UENUM(BlueprintType)
enum EBGWOnlineSessionType {
    InvalidSession,
    GameSession,
    PlayerSession,
    PartySession,
};

