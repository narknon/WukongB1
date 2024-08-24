#pragma once
#include "CoreMinimal.h"
#include "EBGUMagicFieldGenType.generated.h"

UENUM(BlueprintType)
enum class EBGUMagicFieldGenType : uint8 {
    EbgumagicFieldGenTypeCaster,
    Target,
    EnumMax = 3,
};

