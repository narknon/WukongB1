#pragma once
#include "CoreMinimal.h"
#include "EGI_Global_SubG_GI_Loading_TravelLevel_Return.generated.h"

UENUM(BlueprintType)
enum class EGI_Global_SubG_GI_Loading_TravelLevel_Return : uint8 {
    Finish,
    ClientDisconnect,
    ReadArchiveFailed,
};

