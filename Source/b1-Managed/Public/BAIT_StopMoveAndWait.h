#pragma once
#include "CoreMinimal.h"
#include "BAIT_Base.h"
#include "BAIT_StopMoveAndWait.generated.h"

UCLASS(Blueprintable)
class UBAIT_StopMoveAndWait : public UBAIT_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WaitTime;
    
    UBAIT_StopMoveAndWait();

};

