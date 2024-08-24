#pragma once
#include "CoreMinimal.h"
#include "CastSkillResult.generated.h"

UENUM(BlueprintType)
enum class CastSkillResult : uint8 {
    CSR_OK,
    CSR_CAST_CHR_FAILED,
    CSR_FIND_NO_SKILLDESC,
    CSR_FIND_NO_UNITDESC,
    CSR_FIND_NO_SKILLMONTAGE,
    CSR_FIND_NO_ANIMINST,
    CSR_CAN_CAST_SKILL_CHECK_FAILED,
    CSR_OTHER,
};

