#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "BED_BehaviorNode_Action.h"
#include "BED_BehaviorNode_HandleBattleMessage.generated.h"

UCLASS(Blueprintable)
class UBED_BehaviorNode_HandleBattleMessage : public UBED_BehaviorNode_Action {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag BattleMessage;
    
    UBED_BehaviorNode_HandleBattleMessage();

};

