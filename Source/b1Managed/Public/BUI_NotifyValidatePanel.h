#pragma once
#include "CoreMinimal.h"
#include "BUI_Widget.h"
#include "BUI_NotifyValidatePanel.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UBUI_NotifyValidatePanel : public UBUI_Widget {
    GENERATED_BODY()
public:
    UBUI_NotifyValidatePanel();

private:
    UFUNCTION(BlueprintCallable)
    void OnClickClose();
    
};

