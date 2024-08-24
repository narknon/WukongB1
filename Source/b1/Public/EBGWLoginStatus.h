#pragma once
#include "CoreMinimal.h"
#include "EBGWLoginStatus.generated.h"

UENUM(BlueprintType)
enum EBGWLoginStatus {
    NotLoggedIn,
    UsingLocalProfile,
    LoggedIn,
};

