#pragma once
#include "CoreMinimal.h"
#include "DispLibDBCAxisMode.generated.h"

UENUM(BlueprintType)
enum class DispLibDBCAxisMode : uint8 {
    WS_X,
    WS_Y,
    WS_Z,
    WS_N_X,
    WS_N_Y,
    WS_N_Z,
    Bone_X,
    Bone_Y,
    Bone_Z,
    Bone_N_X,
    Bone_N_Y,
    Bone_N_Z,
    Owner_X,
    Owner_Y,
    Owner_Z,
    Owner_N_X,
    Owner_N_Y,
    Owner_N_Z,
    Bone_Velocity,
    Bone_N_Velocity,
    Owner_Velocity,
    Owner_N_Velocity,
    Zero,
};

