#pragma once
#include "CoreMinimal.h"
#include "EGSAKBObjType.generated.h"

UENUM(BlueprintType)
enum class EGSAKBObjType : uint8 {
    GSA_OBJ_TYPE_MIN,
    GSA_OBJ_TYPE_ACTOR,
    GSA_OBJ_TYPE_WIDGET,
    GSA_OBJ_TYPE_MPC_INST,
};

