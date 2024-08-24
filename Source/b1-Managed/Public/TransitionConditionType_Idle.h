#pragma once
#include "CoreMinimal.h"
#include "TransitionConditionType_Idle.generated.h"

UENUM(BlueprintType)
enum class TransitionConditionType_Idle : uint8 {
    None,
    EnterOverlap,
    InteractorEnd,
    InteractorInOverlap,
    GameStateCondition,
    ActionsAllFinish,
    InteractorTimeOver,
    CheckTimeInOverlap,
    CheckTimeOutOverlap,
    TaskStage,
    ConsumedItem,
    OwningItem,
    InteractionRecord,
    InteractionEnd,
    UnitActive,
    NpcActionFinished,
    NPCReach,
    AiConversationChainEnd,
    UnownedEnoughItem,
    UnitInActive,
    NotInOverlapBox,
    InOverlapBox,
    PlayerCloudMove,
    PlayerTransAsFox,
};

