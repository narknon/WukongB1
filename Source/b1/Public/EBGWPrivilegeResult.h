#pragma once
#include "CoreMinimal.h"
#include "EBGWPrivilegeResult.generated.h"

UENUM(BlueprintType)
enum class EBGWPrivilegeResult : uint8 {
    Unknown,
    Available,
    UserNotLoggedIn,
    LicenseInvalid,
    VersionOutdated,
    NetworkConnectionUnavailable,
    AgeRestricted,
    AccountTypeRestricted,
    AccountUseRestricted,
    PlatformFailure,
};

