#pragma once
#include "CoreMinimal.h"
#include "EBGWOnlineSessionState.generated.h"

UENUM(BlueprintType)
enum EBGWOnlineSessionState {
    NoSession,
    Creating,
    Pending,
    Starting,
    InProgress,
    Ending,
    Ended,
    Destroying,
};

