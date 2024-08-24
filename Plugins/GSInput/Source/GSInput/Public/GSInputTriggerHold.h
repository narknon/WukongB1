#pragma once
#include "CoreMinimal.h"
#include "InputTriggers.h"
#include "GSInputTriggerHold.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, MinimalAPI, Config=Engine)
class UGSInputTriggerHold : public UInputTriggerTimedBase {
    GENERATED_BODY()

protected:
    virtual ETriggerState UpdateState_Implementation(const UEnhancedPlayerInput* PlayerInput, FInputActionValue ModifiedValue, float DeltaTime) override;
    
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HoldTimeThreshold;
    
    UGSInputTriggerHold();

};

