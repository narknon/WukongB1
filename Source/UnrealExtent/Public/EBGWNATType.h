#pragma once
#include "CoreMinimal.h"
#include "EBGWNATType.generated.h"

UENUM(BlueprintType)
enum class EBGWNATType : uint8 {
    SONY_NAT_TYPE_UNKNOWN,
    SONY_NAT_TYPE_1,
    SONY_NAT_TYPE_2,
    SONY_NAT_TYPE_3,
    STEAM_IS_BEHIND_NAT,
    STEAM_NOT_BEHIND_NAT,
    EOS_NAT_Unknown,
    EOS_NAT_Open,
    EOS_NAT_Moderate,
    EOS_NAT_Strict,
    NotSupport,
};

