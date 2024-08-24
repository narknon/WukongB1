#pragma once
#include "CoreMinimal.h"
#include "InputTriggers.h"
#include "GSInputTriggerChordHold.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, MinimalAPI, Config=Engine)
class UGSInputTriggerChordHold : public UInputTrigger {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HoldTimeThreshold;
    
    UGSInputTriggerChordHold();

};

