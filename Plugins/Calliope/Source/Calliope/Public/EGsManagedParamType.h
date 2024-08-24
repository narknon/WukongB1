#pragma once
#include "CoreMinimal.h"
#include "EGsManagedParamType.generated.h"

UENUM(BlueprintType)
enum class EGsManagedParamType : uint8 {
    None,
    Parameter,
    SceneObj,
    DynamicObstacle,
    Overlap,
    Interactor,
    Spawner,
    Unit,
    NPCUnit,
    GroupUnit,
    IntParam = 32,
    SequenceID,
    TaskStageID,
    BuffID,
    GroupID,
    AiConversationID,
    TaskLineID,
    NameParam = 64,
    ArchiveLabel,
    StreamingLevel,
    AssociationUnitConfig,
    AssociationOnFightSkillID,
    FollowPartnerConfig,
    TeamID,
    IdleAMIdx,
    InteractGroupID,
    StreamingLevelStateConfig,
    LeisureAnimIndex,
};

