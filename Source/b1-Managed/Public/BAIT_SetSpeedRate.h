#pragma once
#include "CoreMinimal.h"
#include "BAIT_Base.h"
#include "BAIT_SetSpeedRate.generated.h"

UCLASS(Blueprintable)
class UBAIT_SetSpeedRate : public UBAIT_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NewSpeedRate;
    
    UBAIT_SetSpeedRate();

};

