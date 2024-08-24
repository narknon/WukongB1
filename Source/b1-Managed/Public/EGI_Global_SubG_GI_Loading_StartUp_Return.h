#pragma once
#include "CoreMinimal.h"
#include "EGI_Global_SubG_GI_Loading_StartUp_Return.generated.h"

UENUM(BlueprintType)
enum class EGI_Global_SubG_GI_Loading_StartUp_Return : uint8 {
    FinishWithArchive,
    FinishWithOutArchive,
};

