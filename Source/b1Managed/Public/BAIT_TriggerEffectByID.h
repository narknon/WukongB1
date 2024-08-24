#pragma once
#include "CoreMinimal.h"
#include "BAIT_Base.h"
#include "BAIT_TriggerEffectByID.generated.h"

UCLASS(Blueprintable)
class UBAIT_TriggerEffectByID : public UBAIT_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EffectID;
    
    UBAIT_TriggerEffectByID();

};

