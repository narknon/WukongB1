#pragma once
#include "CoreMinimal.h"
#include "EGI_Global_SubG_GI_Loading_UnKnowLevelTravel_Return.generated.h"

UENUM(BlueprintType)
enum class EGI_Global_SubG_GI_Loading_UnKnowLevelTravel_Return : uint8 {
    FinishInWXLogin,
    FinishInStartUp,
    FinishInStandAlone,
    FinishInLS,
    FinishInClient,
};

