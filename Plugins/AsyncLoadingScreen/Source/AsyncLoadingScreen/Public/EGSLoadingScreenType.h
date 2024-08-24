#pragma once
#include "CoreMinimal.h"
#include "EGSLoadingScreenType.generated.h"

UENUM(BlueprintType)
enum class EGSLoadingScreenType : uint8 {
    Unknown,
    LoadProgOnly,
    Full,
    FullBlack,
    FullWhite,
    Chapter,
};

