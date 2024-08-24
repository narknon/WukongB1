#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "BAIT_Base.h"
#include "BAIT_FSMEvent_Custom.generated.h"

UCLASS(Blueprintable)
class UBAIT_FSMEvent_Custom : public UBAIT_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Event;
    
    UBAIT_FSMEvent_Custom();

};

