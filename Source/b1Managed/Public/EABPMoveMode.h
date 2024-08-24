#pragma once
#include "CoreMinimal.h"
#include "EABPMoveMode.generated.h"

UENUM(BlueprintType)
enum class EABPMoveMode : uint8 {
    None,
    Locomotion_Simple4Dir,
    Locomotion_Paragon4Dir,
    Locomotion_Simple8Dir,
    MotionMatching,
    CarMove,
    Locomotion_Player8Dir,
    SimpleFlyControl,
    PlayerLocomotion,
    ComplexFlyControl,
    MonsterLocomotion,
    AdvancedMonsterLocomotion,
    QuadrupedLocomotion,
    CloudLocomotion,
};

