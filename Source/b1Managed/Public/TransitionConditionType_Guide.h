#pragma once
#include "CoreMinimal.h"
#include "TransitionConditionType_Guide.generated.h"

UENUM(BlueprintType)
enum class TransitionConditionType_Guide : uint8 {
    None,
    EnterOverlap,
    InAbnormalState,
    InteractRebirthPoint,
    PlayerDead,
    PlayerRebirth,
    UnitDead,
    GainItem,
    PlayerAttr,
    UnitActive,
    CloseToMonster,
    TaskStage,
    CurrentMap,
    NotInOverlapBox,
    InOverlapBox,
    NotPlayingSeq,
    LearnTalent,
    OpenUIPage,
    DropUIConfirm,
    FinishGuideGroup,
    ObserveSequence,
    OwningItem,
};

