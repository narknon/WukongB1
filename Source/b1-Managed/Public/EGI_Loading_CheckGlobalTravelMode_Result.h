#pragma once
#include "CoreMinimal.h"
#include "EGI_Loading_CheckGlobalTravelMode_Result.generated.h"

UENUM(BlueprintType)
enum class EGI_Loading_CheckGlobalTravelMode_Result : uint8 {
    MainMenu,
    StandAlone,
    ListenServer,
    Client,
};

