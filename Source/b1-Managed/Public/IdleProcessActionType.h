#pragma once
#include "CoreMinimal.h"
#include "IdleProcessActionType.generated.h"

UENUM(BlueprintType)
enum class IdleProcessActionType : uint8 {
    None,
    Teleport,
    ActiveRebirthPoint,
    DisappearUnit,
    NotifyDropItemManagerDrop,
    AiConversation,
    SetNPCParamOnlyInEnter,
    TriggerUnitBattle,
    SpawnAssociationUnit,
    ActiveAssociationUnit,
    KillAssociationUnit,
    NpcPlayMontage,
    NpcMoveTo,
    EnterWeakPerformState,
    ExitWeakPerformState,
    KillFollowPartner,
    ClearAllBloodBar,
    NotifyStateMachine,
    TeleportRebirthPoint,
    PlayDefeatUI,
    BlockRebirthPoint,
    GameLevelPass,
    TriggerSplineMove,
};

