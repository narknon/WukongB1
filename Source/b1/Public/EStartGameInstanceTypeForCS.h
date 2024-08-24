#pragma once
#include "CoreMinimal.h"
#include "EStartGameInstanceTypeForCS.generated.h"

UENUM(BlueprintType)
enum EStartGameInstanceTypeForCS {
    StartCS_UnKnow,
    StartCS_StandAlone,
    StartCS_DedicateServer,
    StartCS_PIE_Standalone,
    StartCS_PIE_ListenServer,
    StartCS_PIE_Client,
    StartCS_PIE_DedicateServer,
};

