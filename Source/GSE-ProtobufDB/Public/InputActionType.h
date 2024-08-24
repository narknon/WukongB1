#pragma once
#include "CoreMinimal.h"
#include "InputActionType.generated.h"

UENUM(BlueprintType)
enum class InputActionType : uint8 {
    None,
    LightAttack,
    HeavyAttack,
    Interact,
    CastItemSkill,
    CameraLock,
    SpinMode = 7,
    CameraLockPointHide,
    CameraModeSwitch = 10,
    CameraG4SpotTurn,
    SwitchMoveSpeedState,
    Move = 14,
    ViewportRotate,
    Dodge = 18,
    Jump,
    PhantomRush = 23,
    AxisCameraLockSwitchTarget,
    UseShortcutItem,
    SwitchDefaultSpell = 28,
    UseSkillByType,
    CastFaBaoSkill,
    MoveFinish = 33,
    SwitchWeaponPoseHeavy,
    SwitchWeaponPoseProp,
    SwitchWeaponPosePoke,
    Unfreeze,
    UseVigorSkill,
    CloudLift,
    CloudFreeLook,
    ToggleCloudMove,
    SpinModeMoveForward,
};

