#pragma once
#include "CoreMinimal.h"
#include "AiConversationConditionType.generated.h"

UENUM(BlueprintType)
enum class AiConversationConditionType : uint8 {
    None,
    LifeState,
    SimpleState,
    Hp,
    PartnerAround,
    SceneObjStateMachine,
    ActorWithTagAround,
    DistanceToSpeaker2D,
    CheckResId,
    BlackboardData,
    BagItemExist,
    IsInFsmState,
};

