#pragma once
#include "CoreMinimal.h"
#include "InteractAction.generated.h"

UENUM(BlueprintType)
enum class InteractAction : uint8 {
    None,
    DummyMeshAnim,
    RebirthPoint,
    Meditation,
    SkillAndBuff,
    ComplexSkill,
    Montage,
    ComplexMontage,
    Dialogue,
    Seq,
    ToolNpc,
    LoopMontage,
    LongPressRescue,
    PartyRoom,
    OnlineTeleport,
    OpenUi,
    StrangeBox,
    EnterSplineMove,
    DaShengEquipOpen,
    XiShuaiSpecial,
    Echo,
    EnumMax,
};

