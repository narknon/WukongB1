#pragma once
#include "CoreMinimal.h"
#include "SeqHiddenHeadType.generated.h"

UENUM(BlueprintType)
enum class SeqHiddenHeadType : uint8 {
    NoHidden,
    Hidden,
    HiddenExceptDaSheng,
};

