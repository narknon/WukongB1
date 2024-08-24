#pragma once
#include "CoreMinimal.h"
#include "EBGWUserPrivileges.generated.h"

UENUM(BlueprintType)
enum EBGWUserPrivileges {
    CanPlay,
    CanPlayOnline,
    CanCommunicateOnline,
    CanUseUserGeneratedContent,
    CanUserCrossPlay,
};

