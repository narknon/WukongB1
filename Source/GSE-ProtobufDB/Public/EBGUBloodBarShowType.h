#pragma once
#include "CoreMinimal.h"
#include "EBGUBloodBarShowType.generated.h"

UENUM(BlueprintType)
enum class EBGUBloodBarShowType : uint8 {
    Hide,
    Always,
    Change,
};

