#pragma once
#include "CoreMinimal.h"
#include "BAIT_Base.h"
#include "BAIT_MoveToPerceivedTarget.generated.h"

UCLASS(Blueprintable)
class UBAIT_MoveToPerceivedTarget : public UBAIT_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AcceptableRadius;
    
    UBAIT_MoveToPerceivedTarget();

};

