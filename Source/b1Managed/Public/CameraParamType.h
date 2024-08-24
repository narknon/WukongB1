#pragma once
#include "CoreMinimal.h"
#include "CameraParamType.generated.h"

UENUM(BlueprintType)
enum class CameraParamType : uint8 {
    ArmLocationX,
    ArmLocationY,
    ArmLocationZ,
    ArmSocketOffsetX,
    ArmSocketOffsetY,
    ArmSocketOffsetZ,
    ArmLength,
    ControllerPitch,
    ControllerRoll,
    ControllerYaw,
    DmcActorLocationX,
    DmcActorLocationY,
    DmcActorLocationZ,
    DmcActorPitch,
    DmcActorRoll,
    DmcActorYaw,
    DmcArmLength,
    PlayerPosition2D,
    PlayerPositionZ,
    TargetPosition2D,
    TargetPositionZ,
    EnumMax,
};

