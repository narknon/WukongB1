#pragma once
#include "CoreMinimal.h"
#include "InputTriggerTimedBase.h"
#include "GSInputTriggerHold.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, MinimalAPI, Config=Engine)
class UGSInputTriggerHold : public UInputTriggerTimedBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HoldTimeThreshold;
    
    UGSInputTriggerHold();

};

