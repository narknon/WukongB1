#pragma once
#include "CoreMinimal.h"
#include "BUI_Widget.h"
#include "BUI_CommErrorTips.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UBUI_CommErrorTips : public UBUI_Widget {
    GENERATED_BODY()
public:
    UBUI_CommErrorTips();

    UFUNCTION(BlueprintCallable)
    void OnConfirmButtonDown();
    
};

