#pragma once
#include "CoreMinimal.h"
#include "EBGUFSMEventName.h"
#include "BAIT_Base.h"
#include "BAIT_FSMEvent.generated.h"

UCLASS(Blueprintable)
class UBAIT_FSMEvent : public UBAIT_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBGUFSMEventName EventName;
    
    UBAIT_FSMEvent();

};

