#pragma once
#include "CoreMinimal.h"
#include "InputTrigger.h"
#include "GSInputTriggerRepeatPressed.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, MinimalAPI, Config=Engine)
class UGSInputTriggerRepeatPressed : public UInputTrigger {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float interval;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RepeatedPressedTriggerCount;
    
    UGSInputTriggerRepeatPressed();

};

