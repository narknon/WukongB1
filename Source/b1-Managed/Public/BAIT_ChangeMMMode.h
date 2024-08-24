#pragma once
#include "CoreMinimal.h"
#include "BAIT_Base.h"
#include "State_MM.h"
#include "BAIT_ChangeMMMode.generated.h"

UCLASS(Blueprintable)
class UBAIT_ChangeMMMode : public UBAIT_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    State_MM MotionMatchingState;
    
    UBAIT_ChangeMMMode();

};

