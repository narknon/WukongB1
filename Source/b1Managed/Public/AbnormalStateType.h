#pragma once
#include "CoreMinimal.h"
#include "AbnormalStateType.generated.h"

UENUM(BlueprintType)
enum class AbnormalStateType : uint8 {
    None,
    Abnormal_Freeze,
    Abnormal_Burn,
    Abnormal_Poison,
    Abnormal_Thunder,
    Abnormal_Yin,
    Abnormal_Yang,
    EnumMax,
};

