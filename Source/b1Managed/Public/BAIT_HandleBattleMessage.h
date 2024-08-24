#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "BAIT_Base.h"
#include "BAIT_HandleBattleMessage.generated.h"

UCLASS(Blueprintable)
class UBAIT_HandleBattleMessage : public UBAIT_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag BattleMessage;
    
    UBAIT_HandleBattleMessage();

};

